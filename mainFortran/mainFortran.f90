!Esse programa le 2 strings A e B e 
!retorna quantas vezes (A c B)
!utilizando uma funcao externa em C

PROGRAM trabalhoCLP

!Declaração de variaveis. a
!variavel "icnt" ira armazenar o total de ocorrencias
!da string A em B que retornara da funcao C

	INTEGER icnt
	CHARACTER*100 a
	CHARACTER*1000 b
	read (*,*) a
	read (*,*) b

!Nessas 2 linhas o programa coloca um '\0' no final
!de cada string, para ficar compativel com C

	a = a(1:len_trim(a))//char(0)
	b = b(1:len_trim(b))//char(0)
	icnt = 0

!Chamada a funcao C e escrevendo o valor final

	call src(a, b, icnt)
	write (*,*) icnt
END PROGRAM
