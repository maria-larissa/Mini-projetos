//Algoritmo para o maior de três numeros.
#include <stdio.h>
int maior;
int main()
{
    float x, y, z;
    char maior, maior1, res;
    printf("Digite tres numeros.\n");
    scanf("%f" "%f" "%f", &x, &y, &z );     //Armazenando os três numeros.

    //Fazendo a analise entre dois os dois primeiros números.
    if (x > y)      
    {
       maior1 = x;
    }
        else
        {
            maior1= y;
        }
    // Fazendo a analize do maior(entre os dois primeiros) com o terceiro numero.
    if ( z > maior1)        
    {
        maior == z;
    }
        else
         {
            maior == maior1;
         }

    printf("%c" " e o maior dos tres \n", maior);
    
    return 0;
}