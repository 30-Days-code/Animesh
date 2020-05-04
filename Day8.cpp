#include<iostream.h>
#include<conio.h>
#include<stdio.h>
static int days_in_month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30, 31 };
int day, month, year;
unsigned short day_counter;
int is_leap(int y)
{
  return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}
class date{
  public:
  //int d,m,y;
  void olddate(int d, int m, int y);
  void next_day();
  void newdate(date set_date,int days);
};
void date::olddate(int d, int m, int y)
{
  m < 1 ? m = 1 : 0;
  m > 12 ? m = 12 : 0;
  d < 1 ? d = 1 : 0;
  d > days_in_month[m] ? d = days_in_month[m] : 0;
  if (is_leap(y)){
  days_in_month[2] = 29;
}
else
{
  days_in_month[2] = 28;
}
  day = d;
  month = m;
  year = y;
}
void date::next_day()
{
  day += 1; day_counter++;
  if (day > days_in_month[month]) {
  day = 1;
  month += 1;
  if (month > 12)
  {
    month = 1;
    year += 1;
    if (is_leap(year)) 
    {
      days_in_month[2] = 29;
    }  
    else {
 days_in_month[2] = 28;
 }
 }
}
}
void date::newdate(date olddate,int x){
 int i;
 for (i=0;i<x;i++) next_day();
}
int main(){
clrscr();
date d1;
d1.olddate(22,2,1980);
d1.newdate(d1,62);
day_counter = 0;
cout<<"day:"<<day<<" month:"<<month<<" year:"<<year;
getch();
} 
