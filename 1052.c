#include <stdio.h>

int main(){
    int mes;
    scanf("%i", &mes);
    char month[][10] = {"January", "February", "March",
    "April", "May", "June", "July", "August", "September",
    "October", "November", "December"};
    printf("%s\n", month[mes-1]);
    return 0;
}
