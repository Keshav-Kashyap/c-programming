#include<stdio.h>
int main () 
{
    int m,n,p,q;
    printf("Enter the Number of rows of 1st matrix:\n");
    scanf("%d",&m);
    printf("Enter the number of columns of 1st matrix:\n ");
    scanf("%d",&n);
    printf("Enter the Number of rows of 2nd matrix:\n");
    scanf("%d",&p);
    printf("Enter the number of columns of 2nd matrix:\n ");
    scanf("%d",&q);
    int mat1[m][n],mat2[p][q],res[n][p],i,j,k;
    printf("Enter Number of Elements of 1st Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter Number of Elements of 2nd Matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("1st Matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("2nd Matrix is :\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    if(m!=p)
    {
        printf("Sorry!! Matrix Multplaction Can't Possible");
    }
    else
    {

    
    printf("Matrix  Multiplcation is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            res[i][j]=0;
            for(k=0;k<m;k++)
            {
                res[i][j]+=(mat1[i][k]*mat2[k][j]);
            }   
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }    
    }
}