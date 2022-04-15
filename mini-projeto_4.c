#include <stdio.h>
#include <stdlib.h>
/*
*   O algoritmo calcula e printa a quantidade de pessoas que tomaram a 1ª dose da vacina, mas não tomaram a 2ª dose e 
*   printa o vetor dos códigos dessas pessoas.
*   Ademais, calcula e printa a média das pessoas que não se vacinaram.
*/

typedef struct vacinados{
    int codigo;
    int dose_1;
    int dose_2;
    int idade;
}Vacinados;

int pessoas_1_sim_2_nao(Vacinados *vetor, int tam);
float mediaNtomaramVacina(Vacinados* vetor, int tam);
int* tomara1_2nao(Vacinados* vetor, int tam);

int main(){
    int n;
    //Cria o vetor de pessoas
    printf("Digite a quantidade de pessoas: ");
    scanf(" %d", &n);
    Vacinados *vetor =(Vacinados*) malloc(n*sizeof(Vacinados));
    for(int i=0; i<n;i++){
        printf("\nPessoa[%d]", i+1);
        printf("\nDigite o código: ");
        scanf("%d", &vetor[i].codigo);
        printf("\nTomou a 1ª dose ? (1 - SIM, 2 - NÃO)\n");
        scanf("%d", &vetor[i].dose_1);
        printf("\nTomou a 2ª dose ? (1 - SIM, 2 - NÃO)\n");
        scanf("%d", &vetor[i].dose_2);
        printf("\nDigite sua idade: ");
        scanf("%d", &vetor[i].idade);
    }
    /*          Confirmar as informações inseridas
    *   Caso você precise confirmar as informações de cada pessoas use o seguinte trecho de código no "int main()"
    *    printf("\n\tVetor pessoas\n");
    *    for(int i=0; i<n;i++){
    *        printf("\nPessoa[%d]", i+1);
    *        printf("\n.codigo : %d", vetor[i].codigo);
    *        if(vetor[i].dose_1 == 1){
    *            printf("\ndose_1 : SIM");
    *        }else{
    *            printf("\ndose_1 : NÃO");
    *        }
    *        if(vetor[i].dose_2 == 1){
    *            printf("\ndose_2 : SIM");
    *        }else{
    *            printf("\ndose_2 : NÃO");
    *        }
    *        printf("\n.idade : %d", vetor[i].idade);
    *        printf("\n");
    *    }
    */
    
    //Printa a quantidade de pessoas que tomaram a 1ª dose da vacina, mas não tomaram a 2ª dose
    printf("\nQuantidade de pessoas 1ª-sim e 2ª-não = %d.\n", pessoas_1_sim_2_nao(vetor, n));
    
    //Printa a média das pessoas que não se vacinaram
    printf("\nA media das pessoas que não se vacinaram = %.2f.\n", mediaNtomaramVacina(vetor, n));
    
    //"-1" indica apenas a posição final do vetor
    printf("\nvetor dos códigos : [");
    int tam3 = (pessoas_1_sim_2_nao(vetor,n) ) + 1;
    for(int j=0; j< tam3; j++){
        int *p = tomara1_2nao(vetor, n);
        printf("  %d", *(p + j));
    }
    printf("  ]\n");
    return 0;
}

//Função para calcular a quantidade de pessoas que tomaram 1ª dose e não tomaram a 2ª
int pessoas_1_sim_2_nao(Vacinados *vetor, int tam){
    int cont=0;
    for(int i=0; i<tam ; i++){
        if(vetor[i].dose_1 == 1 && vetor[i].dose_2 == 2){
            cont++;
        }
    }
    return cont;
}

//Função para calcular a média das pessoas que não se vacinaram
float mediaNtomaramVacina(Vacinados* vetor, int tam){
    int cont=0;
    for(int i=0; i<tam; i++){
        if(vetor[i].dose_1 == 2 && vetor[i].dose_2 == 2){
            cont++;
        }
    }
    float media = (float)cont / tam;
    return media;
}

/*
*   Função recebe um vetor de pessoas e o seu tamanho e retorna um vetor de inteiros dos códigos das pessoas que tomaram a 
*   primeira dose e não tomaram a segunda. Além disso,coloca o valor -1 na última posição desse vetor.
*   Por exemplo, vetor = [4, 5, 10, -1], onde apenas 4, 5 e 10 são códigos.
*/
int* tomara1_2nao(Vacinados* vetor, int tam){
    int tam2 = (pessoas_1_sim_2_nao(vetor,tam)) + 1;
    int *vetor2= (int*)malloc(tam2*sizeof(int));
    for(int i=0; i<tam2 ; i++){
        if(vetor[i].dose_1 == 1 && vetor[i].dose_2 == 2){
            vetor2[i]= vetor[i].codigo;
        }if(i == (tam2-1) ){
            vetor2[i]= -1;
        }
    }
    return vetor2;
}
