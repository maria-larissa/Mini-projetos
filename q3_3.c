//Algoritmo para calcular se um n�mero � divis�vel por outro.
#include<stdio.h>

int main()
{
    float x, y;
    char div;

    printf("Digite dois numeros\n");
    scanf("%f" "%f",&x ,&y);            //Armazenando os dois n�meros.

    div = ( x / y);                     // Armazenando o resto da divis�o

    if(div == 0) 
    printf("%g" "eh divisivel por" "%g", x, y);

    else
    printf("%g" " nao eh divisivel por " "%g", x, y);

    return 0;
}