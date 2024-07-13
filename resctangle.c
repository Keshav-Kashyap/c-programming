#include<stdio.h>
#define AREA_RECTANGLE(length,width)((length)*(width))// Macro to calculate  are
int main () {
    float length , width , area;
    printf("Enter length :");
    scanf("%f",&length);
    printf("Enter Width :");
    scanf("%f",&width);
    area=AREA_RECTANGLE(length,width) ;
    printf("Area Of rectangle : %f",area);
    return 0;
}