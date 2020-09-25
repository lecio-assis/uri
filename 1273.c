#include <stdio.h>
#include <string.h>

int main(){
    int N = 1, i, len, off = 0;
    scanf("%i", &N);
    while(N != 0){
        char frase[N][51];
        i = 0;
        for(N; N > 0; N--){
            scanf("%s", frase[i]);
            i++;
        }
        N = i;
        for(i; i >= 0; i--){
            len = strlen(frase[i]);
            if(len > off){
                off = len;
            }
        }
        i++;
        for(i; i < N ; i++){
            printf("%*s\n", off, frase[i]);
        }
        scanf("%i", &N);
        off = 0;
    }
    return 0;
}
