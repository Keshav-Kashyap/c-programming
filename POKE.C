#include<stdio.h>
#include<conio.h>
#include<string.h>
void main () {
typedef struct pokemon{
int hp;
float speed;
float power;
char tier;
char name[50];
}poki;
poki pika;
pika.hp=100;
pika.speed=110.343;
pika.power=453.34;
pika.tier = 'A';
strcpy(pika.name,"Pikachu");
printf("Pokemon Name: %s",pika.name);
printf("\n%s's HP    : %d",pika.name,pika.hp);
printf("\n%s's Speed : %f",pika.name,pika.speed);
printf("\n%s's Power : %d",poke.power);




getch();
}
