 #include <stdio.h>
 /*
 O gerente de uma loja resolveu premiar seu melhor cliente no final do ano com um vale de R$1.000,00 em compras.
 Para isso, ele precisa identificar seu cliente mais fiel como sendo aquele que mais gastou na loja durante o ano. 
 Para identificar o cliente mais fiel, o programa deverá funcionar da seguinte forma:

 a)Ler um arquivo que contém dados de todas as vendas feitas pela loja naquele ano. 
 Cada linha do arquivo corresponde aos dados de uma venda e contém o cpf do comprador e o valor daquela venda;

b)Definir uma struct cliente contendo dois campos: cpf e somatório do valor das suas compras;

c) Definir um vetor de struct cliente. Considere que o número de clientes diferentes na loja naquele ano foi 100;

d)Para cada venda lida do arquivo, é necessário percorrer o vetor de struct cliente para verificar 
se aquele cliente já está no vetor. 
Se estiver, atualize o somatório das compras daquele cliente somando o valor que acabou de ser lido do arquivo. 
Caso ainda não exista um cliente com aquele cpf no vetor, adicione um novo cliente na primeira posição vazia do vetor;

e)Ao final da leitura do arquivo, é preciso identificar qual cliente gastou mais e é, portanto, o cliente mais fiel.
Imprima os dados desse cliente na tela, junto com uma mensagem de parabéns por ter ganho um vale compras de R$1000,00;

f)Estruture o programa com definição de funções do jeito que achar melhor, contato que você defina pelo menos
 duas funções além da função main.
*/

typedef struct cliente{
  int cpf;
  float total_compras;
}Cliente;

Cliente* clientes(FILE *p, Cliente *vetor, int tam, int* cont){
  int i=0, cont2=0;
  if(p == NULL){
    printf("\nErro na leitura!\n");
  }else{
    int cpf_cliente=0;
    float valor_compra=0;
    //Teste se lê o dado do arquivo
    while((fscanf(p,"%d %f", &cpf_cliente, &valor_compra)==2 && i<100)){
      vetor[i].cpf = 0;
      vetor[i].total_compras = 0;
      //Caso base
      if(i==0){
        vetor[i].cpf = cpf_cliente;
        vetor[i].total_compras = valor_compra;
        cont2++;
       *(cont)+=1;
      }else{
         int j=0;
        //Teste se o CPF do cliente já está no arquivo
        while(j<=cont2){
          //Caso esteja e somado o valor da compra feita ao total já existente
          if(cpf_cliente == vetor[j].cpf){
            vetor[j].total_compras += valor_compra;
            i-=1;
            break;
          }else if(j==cont2){
            //Caso seja novo cliente e adicionado ao vetor de clientes
            vetor[i].cpf = cpf_cliente;
            vetor[i].total_compras = valor_compra;
            cont2++;
            *(cont)+=1;
            break;
          }  
          j++;
        }
      }
      i++;
    }
  }
  // printf("\ncont = %d\ncont2 = %d\n",*(cont),cont2);
  return vetor;
}

Cliente melhor_cliente(Cliente* vetor, int tam_preenchido){
  Cliente melhorCliente;
  // while(fscanf(p,"%d %f", &cpf, &maior_valor)==2){
    for(int i=0; i<tam_preenchido; i++){
      //Comparação para saber qual é o maior valor de compra e o CPF do cliente.
      if(i==0){
        melhorCliente.total_compras = vetor[i].total_compras;
        melhorCliente.cpf= vetor[i].cpf;
      }else if(vetor[i].total_compras > melhorCliente.total_compras){
        melhorCliente.total_compras = vetor[i].total_compras;
        melhorCliente.cpf = vetor[i].cpf;
        break;
      }
    // }
  }
  return melhorCliente;
}

int main(){
  //vetor struct cliente
  Cliente vetor[100];
  int cpf=0, cont=0;
  float compra=0;
  FILE *p = fopen("venda.txt","r");
  clientes(p, vetor, 100, &cont);
  printf("\n\tVetor dados dos clientes\n");
  for(int i=0;  i<cont ; i++){
    printf("posição[%d]:\tCPF = %d\t\tValor compras = %.2f\n", i+1, vetor[i].cpf, vetor[i].total_compras);
  }

  printf("\n\n\tDados melhor cliente da loja\n");
  printf("CPF : %d\n", (melhor_cliente(vetor, cont)).cpf);
  printf("Valor total de compras : %.2f\n", (melhor_cliente(vetor,cont)).total_compras);
  printf("Parabéns você ganhou um vale compra de R$1000,00!\n");
  return 0;
}