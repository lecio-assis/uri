#include<stdio.h>

int quad(int *);

int teste();

int main(){
    int k = 0, l = 0;
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

int quad(int *sudoku){
    int x = 0, y = 0;
    int quad[] = {*sudoku, *(sudoku+1), *(sudoku+2),
                  *(sudoku+9), *(sudoku+10), *(sudoku+11),
                  *(sudoku+18), *(sudoku+19), *(sudoku+20)};
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
    int x = 0, y = 0, z = 0, sudoku[9][9];

    //scanf do sudoku

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
