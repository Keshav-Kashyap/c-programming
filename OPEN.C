#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main () {
FILE*fp;
char ch;
printf("Write data into file---\n");
fp=fopen("file.txt","w");
if(fp==NULL){
printf("Unable To open file\n");
exit(0);
}
while((ch=getchar())!='\n'){
fputc(ch,fp);
}
fclose(fp);
printf("Contents of file are----\n");
while((ch=getc(fp))!=EOF)
printf("%c",ch);
fclose(fp);


getch();
}
