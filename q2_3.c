//Algoritmo para calcular se um numero é par ou impar.
#include <stdio.h>


int main(){
    int n1, res;

    printf("Digite um numero inteiro.\n");
    scanf("%d", &n1);           //armazenando o número inserido

    res = (n1 % 2);             //Armazenando o resto da divisão do numero por 2

    if(res == 0)
    printf("%d e par", n1);

    else
    printf("%d e impar", n1);
    return 0;
}