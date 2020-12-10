readme.txt

Amanda Oliveira Nascimento; 5149
Thalita Mendonça Antico; 5141
Vinicius Hideyuki Ikehara; 5191

COMPILANDO E EXECUTANDO O CÓDIGO

Este projeto é utilizado para introduzir os conceitos de gerenciamento de memória, nesta pasta gerenciadorv3, estão incluídos os seguintes arquivos: vmm.c, anomaly.dat, gerador.c, Readme e o relatório em PDF.

Link para acesso ao projeto no git: https://github.com/mendoncathalitaa/Gerenciador-de-memoria

Como compilar e executar os códigos:
1º Passo: Abrir o terminal na pasta com todos os arquivos;
2º Passo: Escrever o código "gcc -Wall vmm.c -o vmm" e apertar Enter;
3º Passo: Para executar o código do algoritmo random, escrever o código "./vmm random 10 <anomaly.dat" e apertar Enter;
4º Passo: Para executar o código do algoritmo fifo, escrever o código "./vmm fifo 10 <anomaly.dat" e apertar Enter.
    
ADICIONANDO NOVOS ACESSOS

Como já foi dito na seção 1, o arquivo gerador.c desenvolvido pelos alunos, também está disponível, e este código será utilizado para criar um novo arquivo de anomalias, o grupo entrou em consenso de manter 10 páginas e 3 frames e aumentar apenas os acessos, então para compilar e executar o código gerador é necessário seguir os seguintes passos:

Como compilar e executar os códigos:
1º Passo: Abrir o terminal na pasta com todos os arquivos;
2º Passo: Escrever o código "gcc -Wall vmm.c -o vmm" e apertar Enter;
3º Passo: Escrever o código “gcc -Wall gerador.c -o gerador” e apertar Enter;
4º Passo: Para executar o gerador, escrever o código “./gerador” e apertar Enter;
5º Passo: O programa vai pedir para inserir o número de acessos, então insira o número de acessos e aperte Enter.
6º Passo: Para executar o código do algoritmo random, escrever o código "./vmm random 10 <anomalygerado.dat" e apertar Enter;
7º Passo: Para executar o código do algoritmo fifo, escrever o código "./vmm fifo 10 <anomalygerado.dat" e apertar Enter.

