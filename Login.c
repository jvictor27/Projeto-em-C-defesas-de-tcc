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
    

    /*password[] = "456789" -> senha correta para avançar pro menu principal. matusu = 998877 -> matrícula
    correta para avançar pro menu principal. tu -> tipo de usuário. matusud -> matrícula usuário a ser digitada e
     comparada com matusu = 998877. buffer[7] = {0} -> vai ler caracteres no primeiro login. buffer1[10] -> vai ler caracteres no cadastro aluno.
    buffer2[10] -> vai ler caracteres no cadastro professor. senhaaluno -> cadastrar senha aluno. senhaprof -> cadastrar senha professor.  */


    printf ("Usuário digite matrícula.\n");
    fflush(stdin);
    gets (matusud);

    do
    {
     printf ("\nEscolha que tipo de usuário você é:\n");
     printf ("\n(1)...Aluno\n");
	 printf ("\n(2)...Professor\n");
     scanf ("%d", &tu);
     
     switch (tu) {
        case 1:
            printf ("\nVocê é tipo aluno.\n");
            break;
        case 2:
            printf ("\nVocê é tipo professor.\n");
            break;
        default:
            printf("\nEscolha uma opção válida.\n");
    }
    }while ((tu<1)||(tu>2)); // Caso digite uma opção inválida retorna ao menu tipo de aluno.
    
    printf("\nDigite senha: ");

    do {
       c = getch();  //Vai ler o que o usuário digitar e armazenar na variável c sem mostrar.

        if( isprint(c)) //Analisa se o valor da variável c é imprimivel
        {
            buffer[ pos++ ] = c; // Se fo vai armazenar caractere armazendado em c no buffer de 1 após o outro.
            printf("%c", mascara); // Vai retornar ao usuário a senha digitada ja mascarada com *.
        }
        else if( c == 8  ) // O 8 é referente ao backspace do teclado, caso o usuário tecle backspace será limpado o útimo caractere por ele digitado
        {
            buffer[ pos-- ] = '\0';
            printf("%s", "\b \b"); //Apagando o caractere digitado
        }
    }while ( c != 13 ); //13 é o valor de ENTER na tabela ASCII
    
    if( !strcmp(buffer, password) && !strcmp(matusu, matusud) ) //Condição para avançar para o menu principal.
    {
        system("cls");
        menu_princ(tu);
    }
     else{
        printf ("\nMatrícula ou senha inválida.\n");
        printf ("\nRefaça o login.\n");
        getch();
        system("cls");
        main();
        } 
       
}   

