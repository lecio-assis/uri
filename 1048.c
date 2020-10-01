#include<stdio.h>

int main(){
    double sal, nvsal, dif, perc;
    scanf("%lf", &sal);
    if(sal <= 400.00){
        perc = 15.00;
        nvsal = sal + sal * perc/100;
        dif = nvsal - sal;
    }else if(sal >= 400.01 && sal <= 800.00){
        perc = 12.00;
        nvsal = sal + sal * perc/100;
        dif = nvsal - sal;
    }else if(sal >= 800.01 && sal <= 1200.00){
        perc = 10.00;
        nvsal = sal + sal * perc/100;
        dif = nvsal - sal;
    }else if(sal >= 1200.01 && sal <= 2000.00){
        perc = 7.00;
        nvsal = sal + sal * perc/100;
        dif = nvsal - sal;
    }else if(sal >= 2000.00){
        perc = 4.00;
        nvsal = sal + sal * perc/100;
        dif = nvsal - sal;
    }
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %i %\n", nvsal, dif, (int)perc);
    return 0;
}
