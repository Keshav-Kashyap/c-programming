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
        fprintf(fp,"%d ",num);
    }
    fclose(fp);
    fp=fopen("number.txt","r");
    fo=fopen("odd.txt","r");
    fe=fopen("even.txt","r");
    while((num=fscanf(fp,"%d",num))!=EOF){
        if(num%2==0) 
            fprintf(fe,"%d ",num);
        else  
            fprintf(fo,"%d ",num);
    }
    fclose(fp);
    fclose(fo);
    fclose(fe);
    printf("\nContnets Of Odd Number File...\n");
    while((num=num=fscanf(fo,"%d",num))!=EOF) 
    printf("%d\t,num");
    printf("\nContnets Of Even Number File...\n");
    while((num=num=fscanf(fe,"%d",num))!=EOF) 
    printf("%d\t,num");

    fclose(fo);
    fclose(fe);
    return 0;
}