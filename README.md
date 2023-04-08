# Ordenacao-Blocos-de-Rua
Este é um código em C que realiza a ordenação de um conjunto de estruturas de dados contendo informações sobre desfiles de carnaval de rua em um arquivo binário. O programa utiliza o algoritmo de ordenação Insertion Sort para ordenar as estruturas com base no nome do bloco de carnaval.

O resultado final é escrito em um arquivo de texto chamado "desfile.txt", contendo apenas o nome do bloco de carnaval, a data e hora de início.

## Funcionamento
O código implementa o algoritmo "insertion sort" para ordenar um array de "Blocos" contendo informações sobre desfiles de carnaval, como nome, bairro e data. O objetivo é ler o arquivo binário "BlocosdeRua_2016.bin", armazenar as informações, ordenar alfabeticamente pelo nome do bloco e escrever em um arquivo de texto chamado "desfile.txt". O programa verifica se o arquivo binário pode ser aberto, determina o tamanho do arquivo e aloca a memória necessária para armazenar os dados. Em seguida, chama a função "insertionSort" para ordenar o array e escreve as informações no arquivo de texto. Por fim, o programa imprime na tela a quantidade de registros processados e libera a memória alocada.

## Execução
Para executar o código, basta clonar este repositório em sua máquina e compilar o código utilizando um compilador de C. Certifique-se de que os arquivos "BlocosdeRua_2016.bin" esteja no mesmo diretório que o arquivo executável, ao ser executado o programa irá exibir uma mensagem de sucesso e a quantidade de registros processados. Após executar o programa verifique o arquivo de texto "desfile.txt" criado no mesmo diretório do código fonte, que contém as informações dos desfiles ordenados pelo nome do bloco.
