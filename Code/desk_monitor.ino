#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_SDA 21
#define OLED_SCL 22

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Change these to the month/year you want
int month = 9;
int year = 2026;

const char* months[] = {
  "January", "February", "March", "April",
  "May", "June", "July", "August",
  "September", "October", "November", "December"
};

// Zeller's algorithm
int getFirstDay(int year, int month) {
  if (month < 3) {
    month += 12;
    year--;
  }

  int k = year % 100;
  int j = year / 100;

  int day = (1 + (13 * (month + 1)) / 5 + k +
             k / 4 + j / 4 + 5 * j) % 7;

  // Convert to Sunday = 0
  return day;
}

int daysInMonth(int month, int year) {
  if (month == 2) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      return 29;
    return 28;
  }

  if (month == 4 || month == 6 || month == 9 || month == 11)
    return 30;

  return 31;
}

void setup() {
  Serial.begin(115200);

  Wire.begin(OLED_SDA, OLED_SCL);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED not found!");
    while (true);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  drawCalendar();
}

void drawCalendar() {
  display.clearDisplay();

  // Month and year
  display.setTextSize(1);
  display.setCursor(35, 0);
  display.print(months[month - 1]);

  display.setCursor(55, 10);
  display.print(year);

  // Days of week
  const char* week[] = {
    "Su", "Mo", "Tu", "We", "Th", "Fr", "Sa"
  };

  for (int i = 0; i < 7; i++) {
    display.setCursor(i * 18 + 1, 22);
    display.print(week[i]);
  }

  int firstDay = getFirstDay(year, month);
  int totalDays = daysInMonth(month, year);

  int x;
  int y;

  for (int day = 1; day <= totalDays; day++) {

    int position = firstDay + day - 1;

    x = (position % 7) * 18 + 4;
    y = (position / 7) * 9 + 32;

    display.setCursor(x, y);
    display.print(day);
  }

  display.display();
}

void loop() {
  // Calendar stays on screen
}