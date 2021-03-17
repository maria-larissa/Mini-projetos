    /*Algoritmo para calcular o IMC de uma pessoa e encaixá-la em uma das categorias a seguir:
    IMC <= 20, categoria abaixo do peso.        20 < IMC <= 25, categoria peso normal.
    25 < IMC <= 30, categoria sobrepeso.        30 < IMC <= 40, categoria obesidade.
    IMC > 40, categoria obesidade morbida.*/
#include <stdio.h>
int main()
{
    float x, y, m, a, imc;

    printf("digite a sua altura.\n");
    scanf("%f",&x);
    printf("Digite a sua massa.\n");
    scanf("%f",&y);

    m = y;
    a = (x*x);
    imc = (m / a);

    printf(" O seu IMC eh "" %3.1f\n", imc );
    
    if (imc <= 20)
    { printf("voce esta na categoria abaixo do peso.\n");
    } else {
        if (20 < imc && imc <= 25)
        { printf("voce esta na categoria peso normal.\n");
        } else {
            if (25 < imc && imc <= 30)
            { printf("voce esta na categoria sobrepeso.\n" );
            } else {
                if (30 < imc && imc <= 40 )
                { printf("voce esta na categoria obesidade.\n" );
                } else { 
                    if (imc > 40 )
                    { printf("voce esta na categoria obesidade morbida.\n" ); 
                    } 
                }
            }
        }
    }
    return 0;
}