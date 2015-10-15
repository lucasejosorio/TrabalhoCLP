#include <stdio.h>

//O main cria as 2 strings
//transforma todos os caracteres dela em um
//espaco em branco para ficar mais facil
//manipular pelo fortran, então
//lê elas, faz a busca de ocorrencias (funcao fortran)
//e da um print dos resultados no final

int main(int argc, char const *argv[]){
	char a[100], b[1000];
	int i;
	for(i = 0; i < 100; i++) a[i] = ' '; 
	for(i = 0; i < 1000; i++) b[i] = ' '; 
	scanf("%s", a);
	scanf("%s", b);
	int total = src_(a, b);

	printf("%d\n", total);
	return 0;
}
