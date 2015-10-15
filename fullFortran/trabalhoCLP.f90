!Esse programa le 2 strings A e B e 
!retorna quantas vezes (A c B)

PROGRAM trabalhoCLP

!Declaração de variaveis. a
!variavel "icnt" ira armazenar o total de ocorrencias
!da string A em B

	INTEGER icnt
	CHARACTER*100 a
	CHARACTER*1000 b

!Apos isso o programa ira ler as 2 strings

	read (*,*) a
	read (*,*) b

!Iniciando o contador em 0
!O programa ira analizar todas subpalavras de B
!que são iguais a palavra A e armazenando o total
!em icnt

	icnt = 0
	DO i = 1 , len_trim(b)
		IF (b(i:i+len_trim(a)-1).EQ.a) THEN
			icnt = icnt + 1
		END IF
	END DO

!Apos encontrar todas as ocorrencias,
!O programa imprime o valor total

	write (*,*) icnt
END PROGRAM


