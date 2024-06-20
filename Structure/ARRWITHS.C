#include<stdio.h>
#include<conio.h>
#include<string.h>
void main () {
int week,i,atten;
struct employe{
//character Array to store name
char name[50];
int emyid;
//integer array for attendance
int weekatten[7];
}emp;
clrscr();
// adding data
emp.emyid=1;
strcpy(emp.name,"Keshav");
for(week=0;week<7;week++){
emp.weekatten[week]=week+1;
}
printf("\n");

//printing the data
printf("Employee ID: %d - Employee Name: %s\n",emp.emyid ,emp.name);
printf("Attendence\n");
for(week=0;week<7;week++){
printf("%d ",emp.weekatten[week]);
}
printf("\n");
getch();
}



