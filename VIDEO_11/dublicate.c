#include<stdio.h>
int main () {
    int i,j,n;
    printf("Enter the array size:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter The elemts of the arrray:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elemts of the arrray:\n");
     for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("The Repated Element: %d",arr[j]);
                break;
            }
        }
    }




    return 0;
}