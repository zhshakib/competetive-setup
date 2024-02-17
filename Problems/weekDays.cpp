#include <stdio.h>
#include <time.h>

int main() {
  int day, month, year;
  printf("Enter date: (DD/MM/YYYY) ");
  scanf("%d/%d/%d", &day, &month, &year);

  struct tm date = {0};
  date.tm_mday = day;
  date.tm_mon = month - 1;
  date.tm_year = year - 1900;

  mktime(&date);

  char weekdays[7][10] = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                          "Thursday", "Friday", "Saturday"};
  int weekday = date.tm_wday;
  printf("%d", weekday);

  return 0;
}