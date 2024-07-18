#include<stdio.h>
#include<stdlib.h>
int main () {
    int m,n,i,j;
    printf("Enter The Value Of Row:");
    scanf("%d",&n);
    printf("Enter The Value Of Column:");
    scanf("%d",&m);
    if(m!=n){
        printf("Transpose Cannot Find");
        exit(1);
    }
    int mat1[m][n],res[m][n];
    printf("Enter The Element of Matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }  
    printf("This is Your Marix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    } 
       printf("This is Your Transpose Of Marix:\n"); 
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           res[j][i]= mat1[i][j];
        }
    }  
 for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    } 

return 0;
}