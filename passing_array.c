#include<stdio.h>
void iseven(int *a){
    if(*a%2==0) printf("%d",*a);
    else printf("%d",*a);
    
}
int main () {
        int arr[5]={1,2,3,4,5};
        int i;
        for(i=0;i<5;i++){
            iseven(&arr[i]);
        }




    return 0;
}