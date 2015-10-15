#include <stdio.h>
	//inicio do programa...
	//função que le 2 strings A e B e retorna quantas vezes (A c B)
int src(char a[100], char b[1000]){

		//Declaração de variaveis
		//a variavel "first" ira armazenar em que lugar
		//cada ocorrencia de A em B ira comecar e a
		//variavel "count" ira armazenar o total de ocorrencias
	int first = 0, count = 0, i;
		//inicia um loop por todo a string B analizando cada
		//uma de suas letras procurando por uma possivel ocorrencia
		//ou seja, a primeira letra de A
	for(i = 0; i < 1000; i++){
		if(b[i]==a[0]){
				//Caso encontrada a primeira letra de A
				//é armazenado em "first" onde essa ocorrência
				//aconteceu e se comeca a comparar apartir dai
				//a palavra A com a subpalavra de B apartir daquele ponto
			first = i;
			int j = 0;
				//Enquanto não terminar a palavra A será testado se a
				//subpalavra de B é igual a A, ou se 
				//ja chegou ao fim da palavra B
			while(a[j] != '\0' ){
				if(b[i] == a[j] && b[i] != '\0'){
					i++;
					j++;
				}else{
						//Caso as palavras não sejam iguais count será
						//decrementado, pois em nosso algoritmo, ao final
						//da verificacao de cada subpalavra de B (sendo
						// ela igual a A ou não) Ele é incrementado.
					count--;
					break;
				}
			}
				//Define-se que o programa volta para a posicao onde
				//ele comecou a palavra, pois assim ele irá pular 1
				//posicao no inicio do loop e testara a subpalavra
				//seguinte. Aqui também é incrementado o count,
				//pois caso a palavra foi encontrada count = count+1
				// e caso ela nao foi encontrada, fica count = count-1+1
				//ou seja ele não se altera.
			i = first;
			count++;
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	//O main cria as 2 strings
	//lê elas, faz a busca de ocorrencias
	//e da um print dos resultados no final
	char a[100], b[1000];
	scanf("%s", &a);
	scanf("%s", &b);
	int total = src(a, b);
	printf("%d\n", total);
	return 0;
}