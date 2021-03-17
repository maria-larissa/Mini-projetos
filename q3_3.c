//Algoritmo para calcular se um número é divisível por outro.
#include<stdio.h>

int main()
{
    float x, y;
    char div;

    printf("Digite dois numeros\n");
    scanf("%f" "%f",&x ,&y);            //Armazenando os dois números.

    div = ( x / y);                     // Armazenando o resto da divisão

    if(div == 0) 
    printf("%g" "eh divisivel por" "%g", x, y);

    else
    printf("%g" " nao eh divisivel por " "%g", x, y);

    return 0;
}