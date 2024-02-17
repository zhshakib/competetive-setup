// Weekdays of a given date
// Using Zeller's congruence Formula!
// reference: https://en.wikipedia.org/wiki/Zeller%27s_congruence

#include <stdio.h>

int main() {
  char weekdays[7][10] = {"Saturday",  "Sunday",   "Monday", "Tuesday",
                          "Wednesday", "Thursday", "Friday"};
  int day, month, year;
  printf("Enter date: (DD/MM/YYYY) ");
  scanf("%d/%d/%d", &day, &month, &year);
  int q = day;
  int m = month;
  if (m < 3) {
    m = m + 12;
    year--;
  }
  int k = year % 100;
  int j = year / 100;

  int h = q + (13 * (m + 1) / 5) + k + (k / 4) + (j / 4) + (5 * j);
  h = h % 7;

  printf("%s", weekdays[h]);

  return 0;
}