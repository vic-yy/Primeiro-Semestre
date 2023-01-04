#include <stdio.h>
#include <stdlib.h>
int days (int day, int month, int year)
{
const int monthday[12]={31, 28, 31, 30, 31, 30, 31,31,30,31,30,31};
int day1;
day1 = year*365+day;
for(int i=0;i<month-1;i++)
{
day1 += monthday[i];
}
if (month <=2)
year--;
day1+=year/4 - year/100 + year/400;
int day2, month2, year2;
day2 = 2020*365+17;
for(int i=0;i<8;i++)
{
day2 += monthday[i];
}
if (month2 <=2)
year--;
day2+=2020/4 - 2020/100 + 2020/400;
return (day2-day1);
}
int main()
{
int z;
int diai, mesi, anoi;
while (scanf("%d %d %d", &diai, &mesi, &anoi)!=EOF){
z = days(diai, mesi, anoi);
printf("%d\n", z + 1);
}
return 0;
}
