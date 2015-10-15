#include <stdio.h>

extern "C"{
//OBS.: todas as passagens de parametros em fortran
//são feitas por referencia, por isso os parametros
//da funcao sao ponteiros e por isso a funcao é void
//pois os dados serao atualizados direto na variavel
//que foi passada por parametro
		
	void src_(char *a, char *b, int *final){
		//Declaração de variaveis
		//a variavel "first" ira armazenar em que lugar
		//cada ocorrencia de A em B ira comecar e a
		//variavel "count" ira armazenar o total de ocorrencias
		//que sera retornado para o fortran
		int first = 0, count = 0, i;
		//inicia um loop por todo a string B analizando cada
		//uma de suas letras procurando por uma possivel ocorrencia
		//ou seja, a primeira letra de A
		for(i = 0; i < 1000; i++){
			//Caso encontrada a primeira letra de A
			//é armazenado em "first" onde essa ocorrência
			//aconteceu e se comeca a comparar apartir dai
			//a palavra A com a subpalavra de B apartir daquele ponto
			if(b[i]==a[0]){
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
		//entao ele ALTERA o endereco de memoria passado pelo fortran
		*final = count;
	}
}