#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>


void relacao_al()
{  
     char frase[100];

     FILE*mostrardados;
     
     mostrardados=fopen("dados/cadastro_aluno.txt","r");
     
     printf ("\n===Relaçao de alunos cadastrados===\n");
     while(fgets(frase,100,mostrardados)!=NULL){
     
     printf("%s",frase);
      
     
    
     }
      fclose(mostrardados);
     
     
     
                 getch();
                 system("cls");
                 menu_princ();
}
