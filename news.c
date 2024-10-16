#include<stdio.h>
#include<dos.h>
int main () {
int i;
for(i=0;i<1000;i++){
    sound(50);
    // textcolor(WHITE);
    printf("%d",i);
    delay(50);

}
// nosound();
    return 0;
}