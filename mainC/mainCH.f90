!Essa função recebe 2 strings A e B e 
!retorna quantas vezes (A c B)
!OBS.: em todo código não é analisado
!o último caracter da string lida em C
!pois as strings em C terminam com '\0'
!ou seja, se eu ler o tamanho total da palavra
!"casa" no fortran e ela foi lida em C
!resultaria em 5 caracteres

function src(a, b)


!Declaração de variaveis. a
!variavel "icnt" ira armazenar o total de ocorrencias
!da string A em B

    INTEGER icnt
    CHARACTER*100 a
	CHARACTER*1000 b

!Iniciando o contador em 0
!O programa ira analizar todas subpalavras de B
!que são iguais a palavra A e armazenando o total
!em icnt

    icnt = 0
    DO i = 1 , len_trim(b)-len_trim(a)+1

        IF (b(i:i+len_trim(a)-2).EQ.a(1:len_trim(a)-1)) THEN
            icnt = icnt + 1
        END IF
    END DO

!Apos encontrar todas as ocorrencias,
!O programa imprime o valor total
!o trecho a seguir serve apenas para a funcao
!retornar icnt ("meu codigo funciona, 
!n me pergunte porque")

    write(*,*) icnt
    icnt = icnt
    return

end
