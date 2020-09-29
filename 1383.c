#include<stdio.h>

int quad(int *matriz);

int teste();

int main(){
    int k, l, test;
    scanf("%i", &k);
    while(l!=k){
        l++;
        if(teste()){
            printf("Instancia %i\nNAO\n\n", l);
        }else{
            printf("Instancia %i\nSIM\n\n", l);
        }
    }
    return 0;
}

int quad(int *matriz){
    int x, y;
    int quad[] = {*matriz, *(matriz+1), *(matriz+2),
                  *(matriz+9), *(matriz+10), *(matriz+11),
                  *(matriz+18), *(matriz+19), *(matriz+20)};
    for(x = 0; x < 9; x++){
        for(y = 0; y < 9; y++){
            if(x != y && quad[x] == quad[y]){
                return 1; 
            }
        }
    }
    return 0;
}

int teste(){
    int x, y, z, sudoku[9][9];

    //scanf da matriz

    for(x = 0; x < 9; x++){
        for(y = 0; y < 9; y++){
            scanf("%i", &sudoku[x][y]);
        }
    }

    //teste linhas e colunas

    for(z = 0; z < 9; z++){
        for(x = 0; x < 9; x++){
            for(y = 0; y < 9; y++){
                if(x != y){
                    if(sudoku[z][y] == sudoku[z][x]){
                        return 1;
                    }
                    if(sudoku[y][z] == sudoku[x][z]){
                        return 1;
                    }
                }
            }
        }
    }

    //teste dos quadrantes

    for(x = 0; x <= 6; x+=3){
        for(y = 0; y <= 6; y+=3){
            if(quad(&sudoku[x][y])){
                return 1;
            }
        }
    }
    return 0;
}
