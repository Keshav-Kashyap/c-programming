#include<stdio.h>
#include<stdlib.h>
int main () {
int n,i;
printf("enter n number of integer you want:");
scanf("%d",&n);
int *ptr = (int*) malloc(n*sizeof(int));
int *p=ptr;
printf("Enter elements:\n");
for(i=0;i<=n;i++){
scanf("%d",&(*ptr));
*ptr++;
}
printf("Elements are:\n");
for(i=1;i<=n;i++){
printf("%d ",(*p));
*p++;
}
    
    return 0;
}