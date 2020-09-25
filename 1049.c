#include <stdio.h>
#include <string.h>

int main(){
    char vert[13], clas[13], alim[13];
    scanf("%s", vert);
    scanf("%s", clas);
    scanf("%s", alim);
    if(!strcmp(vert, "invertebrado")){
        if(!strcmp(clas, "inseto")){
            if(!strcmp(alim, "hematofago")){
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }else{
            if(!strcmp(alim, "hematofago")){
                printf("sanguessuga\n");
            }else{
                printf("minhoca\n");
            }
        }
    }else{
        if(!strcmp(clas, "ave")){
            if(!strcmp(alim, "carnivoro")){
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }else{
            if(!strcmp(alim, "onivoro")){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }
    return 0;
}
