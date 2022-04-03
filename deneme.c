#include <stdio.h>
#include <string.h>

int main () {

    char kaynak[30]="merhaba balikesir";
    char kopya[30]="";

    strcpy(kopya,kaynak);
    printf("%s",kopya);


    return 0;
}