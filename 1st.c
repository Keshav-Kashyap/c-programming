#include<stdio.h>

int main() {

// FILE* ptr =fopen("hello.txt","r");
// char str[100];
// while(fgets(str,100,ptr)!=NULL)
// printf("%s",str);
FILE* ptr =fopen("bnew.txt","w");
    char str[]="keshav is a noob boy";
    fputs(str,ptr);
    fclose(ptr);
}