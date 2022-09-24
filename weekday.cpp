#include<iostream>
using namespace std;
int mndays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
string day[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
int LeapYear(int y,int m)
{
	if(m<=2)
	y--;
	return((y/4)+(y/400)-(y/100));
}
int main()
{ int d,m,y;
cout<<"enter the date:";
cin>>d>>m>>y;
long long TotalDays=(y*365)+d;
for(int i=1;i<m;i++)
{TotalDays+=mndays[i];}
TotalDays+=LeapYear(y,m);
int rem=(TotalDays)%7;
cout<<"the weekday is"<<day[rem]<<endl;
}
