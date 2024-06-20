#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct emply{
int id;
int atten[100];
char name[20];
};
int main() {
int i,week,attn;
clrscr();
struct emply emp[5];
for(i=0;i<5;i++){
emp[i].id=i+1;
strcpy(emp[i].name,"Keshav");
for(week=0;week<7;week++){
emp[i].atten[week]=week+1;
}
}
printf("\n");
//priniting data
for(i=0;i<5;i++){
printf("Emplyee ID: %d - Emloyee Name: %s\n",emp[i].id,emp[i].name);
printf("Attendence:\n");
for(week=0;week<7;week++){
printf("%d ",emp[i].atten[week]);
}
printf("\n\n");
}
getch();
return 0;

}
