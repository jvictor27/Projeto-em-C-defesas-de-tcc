#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>


void relacao_prof()
{    
     char fraseprof[100];

     FILE*mostrardados;
     
     mostrardados=fopen("dados/cadastro_prof.txt","r");
     printf ("\n===Relaçao de professores cadastrados===\n");
     
     while(fgets(fraseprof,100,mostrardados)!=NULL){
     
     printf("%s",fraseprof);
      
     
    
     }
      fclose(mostrardados);
     
     
     
     
                 getch();
                 system("cls");
                 menu_princ();
}
     
     
     
