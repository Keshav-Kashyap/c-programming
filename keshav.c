#include<stdio.h>
void fun(int a){
    int i;
    for(int j=1;j<=a;j++){
        printf("\n");
    for(i=j;i<=j*10;i++){
        printf("%d",i);
    }
    }
}
int main () {
    printf("This is the use of Function in c Programming..\n");
    int a;
    printf("Enter The table number:");
    scanf("%d",&a);
    fun(a);
    return 0;
}