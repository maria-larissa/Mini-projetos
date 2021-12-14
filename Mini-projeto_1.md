#Mini-projeto-1

Você acabou de ser selecionado como Bolsista PAP da Pró-reitoria de Extensão da UFCA e precisa fazer um programa em C que vai ler os dados das ações de extensão executadas em um ano e vai imprimir um relatório com algumas métricas agregadas das ações. Considere que as ações de extensão podem acontecer em 3 municípios. São eles Barbalha, Crato e Juazeiro do Norte. Seu programa irá funcionar com um menu principal com duas opções: “Digite 1 para cadastrar dados de uma ação” e “Digite 2 para encerrar o cadastro e imprimir o relatório”. Se o usuário digitar algum número que não seja nem 1 e nem 2, imprima uma mensagem de erro e peça para que ele digite a opção novamente. Caso o usuário digite 1, o programa irá pedir os seguintes dados de uma ação:
O código da ação que é um número inteiro;
O município atendido pela ação representado pela primeira letra do nome do município (b para Barbalha, c para Crato e j para Juazeiro do Norte);
O número de pessoas beneficiadas pela ação.
Após ler os dados da ação, o programa exibe o menu principal novamente. Enquanto o usuário digitar a opção 1, o programa vai lendo os dados para cada ação. Quando o usuário digitar a opção 2, o programa irá imprimir o relatório com os dados agregados das ações. O relatório deverá conter os seguintes dados:
Número total de ações analisadas;
Para cada município, imprimir o número de ações e a quantidade de beneficiados pelas ações daquele município;
Imprimir a soma de beneficiados por todas as ações;
Imprimir a média de beneficiados por ação.
Por fim, o programa pergunta se o usuário deseja encerrar o programa ou voltar para o menu principal, onde mais ações poderão ser cadastradas e incluídas no relatório.
