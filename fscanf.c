#include<stdio.h>
#include<stdlib.h>
int main () {
FILE*fptr;
char str1[50];
fptr=fopen("keshav.txt","r");
while(fscanf(fptr,"%s",str1)!=EOF){
    printf("%s ",str1);

}
fclose(fptr);
    return 0;
}