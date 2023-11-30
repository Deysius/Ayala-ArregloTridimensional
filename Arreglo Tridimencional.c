#include<stdio.h>
int main(){
int filas, columnas,num;
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    printf("Numero de matrices: ");
    scanf("%d", &num);
    printf("Primera Matriz:\n");
    int matriz[filas][columnas][num];
    for (int k = 1; k< num; k++){
    //Mediante este for se imprime todas la matrices menos una, todas estas se llenaran con 0
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                matriz[i][j][k] = 0;
                printf("%d ", matriz[i][j][k]);
                }
                printf("\n");
                }
                }
    for (int k = num; k<= num; k++){
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                matriz[i][j][k] = 1;
                printf("%d ", matriz[i][j][k]);
                }
                printf("\n");
                }
                }
return 0;   
}