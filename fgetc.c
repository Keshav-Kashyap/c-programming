#include<stdio.h>
#include<stdlib.h>
int main () {
    FILE*fptr;
    fptr=fopen("keshav.txt","r");
    char c='a';
   if(fptr==NULL){
    printf("File Cannot Open");
    exit(1);
   }
    while(c!=EOF)
    {
        c=fgetc(fptr);
        printf("%c",c);
    }
fclose(fptr);
    return 0;
}