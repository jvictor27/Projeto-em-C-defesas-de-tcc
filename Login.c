#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#define mascara '*'



int tu;

void main()
{
    setlocale (LC_ALL,"portuguese");

    char  buffer[10] = {0} ,  password[] = "456789", matusu[] = "998877", matusud[7], c;
    int pos = 0;
    

    /*password[] = "456789" -> senha correta para avan�ar pro menu principal. matusu = 998877 -> matr�cula
    correta para avan�ar pro menu principal. tu -> tipo de usu�rio. matusud -> matr�cula usu�rio a ser digitada e
     comparada com matusu = 998877. buffer[7] = {0} -> vai ler caracteres no primeiro login. buffer1[10] -> vai ler caracteres no cadastro aluno.
    buffer2[10] -> vai ler caracteres no cadastro professor. senhaaluno -> cadastrar senha aluno. senhaprof -> cadastrar senha professor.  */


    printf ("Usu�rio digite matr�cula.\n");
    fflush(stdin);
    gets (matusud);

    do
    {
     printf ("\nEscolha que tipo de usu�rio voc� �:\n");
     printf ("\n(1)...Aluno\n");
	 printf ("\n(2)...Professor\n");
     scanf ("%d", &tu);
     
     switch (tu) {
        case 1:
            printf ("\nVoc� � tipo aluno.\n");
            break;
        case 2:
            printf ("\nVoc� � tipo professor.\n");
            break;
        default:
            printf("\nEscolha uma op��o v�lida.\n");
    }
    }while ((tu<1)||(tu>2)); // Caso digite uma op��o inv�lida retorna ao menu tipo de aluno.
    
    printf("\nDigite senha: ");

    do {
       c = getch();  //Vai ler o que o usu�rio digitar e armazenar na vari�vel c sem mostrar.

        if( isprint(c)) //Analisa se o valor da vari�vel c � imprimivel
        {
            buffer[ pos++ ] = c; // Se fo vai armazenar caractere armazendado em c no buffer de 1 ap�s o outro.
            printf("%c", mascara); // Vai retornar ao usu�rio a senha digitada ja mascarada com *.
        }
        else if( c == 8  ) // O 8 � referente ao backspace do teclado, caso o usu�rio tecle backspace ser� limpado o �timo caractere por ele digitado
        {
            buffer[ pos-- ] = '\0';
            printf("%s", "\b \b"); //Apagando o caractere digitado
        }
    }while ( c != 13 ); //13 � o valor de ENTER na tabela ASCII
    
    if( !strcmp(buffer, password) && !strcmp(matusu, matusud) ) //Condi��o para avan�ar para o menu principal.
    {
        system("cls");
        menu_princ(tu);
    }
     else{
        printf ("\nMatr�cula ou senha inv�lida.\n");
        printf ("\nRefa�a o login.\n");
        getch();
        system("cls");
        main();
        } 
       
}   

