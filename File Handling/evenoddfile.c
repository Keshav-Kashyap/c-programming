#include<stdio.h>
#include<stdlib.h>
int main () {
    FILE*fp,*fo,*fe;
    int i, num;
    printf("Enter Series Of Numbers...\n");
    fp=fopen("number.txt","w");
    if(fp==NULL){
        printf("Unable to open file..\n");
        exit(0);
    }
    for(i=0;i<10;i++){
        scanf("%d",&num);
        putw(num,fp);
    }
    fclose(fp);
    fp=fopen("number.txt","r");
    fo=fopen("odd.txt","w+");
    fe=fopen("even.txt","w+");
    while((num=getw(fp))!=EOF){
        if(num%2==0) 
          putw(num,fe);
        else  
            putw(num,fo);
    }
    fclose(fp);
    rewind(fo);
    rewind(fe);
    printf("\nContnets Of Odd Number File...\n");
    while((num=getw(fo))!=EOF) 
    printf("%d\t",num);

    printf("\nContnets Of Even Number File...\n");
    
    while((num=getw(fe))!=EOF) 
    printf("%d\t",num);

    fclose(fo);
    fclose(fe);
    return 0;
}