#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char nome [50];
	char bairro[20];
	char regiao[15];
	char data[10] ;
	char dataRelativa[55];
	char inicio[7];
	char local[91];
	int publico;
	int anoPrimeiro;
} Bloco;

void insertionSort(Bloco *b, int tamanho){
	int i, j;
	Bloco temp;
	for (i = 1; i < tamanho; i++){
		temp = b[i];
		j = i - 1;
		while (j >= 0 && strcmp(b[j].nome, temp.nome) > 0){
			b[j+1] = b[j];
			j--;
		}
		b[j+1] = temp;
	}
}

int main(){
	Bloco *b;
	FILE *arq;
	arq = fopen("BlocosdeRua_2016.bin", "rb");
	if (arq == NULL){
		printf("Erro ao abrir o arquivo BlocosdeRua_2016.bin");
		return 1;
	}
	
	int quantidade, tamanho, i;
	fseek(arq, 0,SEEK_END);
	tamanho = ftell(arq);
	b = (Bloco*) malloc(tamanho);
	quantidade = tamanho/sizeof(Bloco);
	fseek(arq, 0, SEEK_SET);
	fread(b, sizeof(Bloco), quantidade, arq);
	fclose(arq);
	
	insertionSort(b, quantidade);
	
	FILE *arqTxt = fopen("desfile.txt", "w");
    if (arqTxt == NULL) {
        printf("Erro ao abrir o arquivo de texto.\n");
        free(b);
        return 1;
    }
    for (i = 0; i < quantidade; i++) {
        fprintf(arqTxt, "%s - %s - %s\n", b[i].nome, b[i].data, b[i].inicio);
    }
	printf("%d registros foram processados.", quantidade);
    fclose(arqTxt);
    free(b);

    return 0;
}
