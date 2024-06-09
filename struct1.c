#include<stdio.h>
int main () {
    typedef struct pokemon{
        char name[50];
        int speed;
        float attack;
        float hp;
        char teir;
    }pokemon;
    pokemon pika;
    printf("Enter Pokemon Name:");
    gets(pika.name);
    printf("Enter %s's HP:",pika.name);
    scanf("%f",&pika.hp);
    printf("Enter %s's Speed:",pika.name);
    scanf("%d",&pika.speed);
    printf("Enter %s's Attack:",pika.name);
    scanf("%f",&pika.attack);
    printf("Enter %s's Teir:",pika.name);
    scanf(" %c",&pika.teir);
    printf("\n\nName: %s",pika.name);
    printf("\nHP    : %0.2f",pika.hp);
    printf("\nSpeed : %d",pika.speed);
    printf("\nAttack: %0.2f",pika.attack);
    printf("\nTeir  : %c",pika.teir);
    printf("\n\nThanks For Watching");
    return 0;
}