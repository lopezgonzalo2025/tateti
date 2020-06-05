#include <stdio.h>
#include <windows.h>

void loop (char c [3][3]);
void intro_primera (char c[3][3]);
void ren_tablero (char c[3][3]);

int main(){
    char c [3][3];

    loop(c);
    return 0;
}

void loop (char c [3][3]){
    intro_primera(c);
    ren_tablero(c);
}

void intro_primera (char c[3][3]){
    int i, j;
    char aux;
    aux = '1';

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            c[i][j] = aux++;
        }
    }
}

void ren_tablero (char c[3][3]){
    int i, j;

    for(i = 0; i < 3; i++){
        printf(" \n");
        for(j = 0; j < 3; j++){
            if (j < 2){
                printf(" %c |", c[i][j]);
            } else{
                printf(" %c ", c[i][j]);
            }
        }
        if (i < 2){
                printf("\n___ ___ ___\n");
            }
    }
    printf(" \n");
}