#include<stdio.h>
void iseven(int *p,int a){
    int i;
    for(i=0;i<5;i++){
        printf("%d",*p);
        *p++;
    }
    
}
int main () {
        int arr[5]={1,2,3,4,5};
        iseven(&arr[0],5);
    




    return 0;
}