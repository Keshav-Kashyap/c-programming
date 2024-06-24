#include<stdio.h>
int main () {
FILE*fptr;
char text[300];

fptr=fopen("keshav.txt","r");
while(fgets(text,300,fptr)!=NULL){
    printf("%s ",text);
}
    return 0;
}