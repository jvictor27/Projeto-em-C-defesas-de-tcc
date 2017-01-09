#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>


void relacao_curso()
{
     char frasecurso[100];
     
     FILE*mostrardados;
      mostrardados=fopen("dados/cadastro_curso.txt","r");
     printf ("\n===Relaçao de cursos cadastrados===\n");
     while(fgets(frasecurso,100,mostrardados)!=NULL){//vai pegar o que em cadastro_curso,enviara pra frase curso no maximo 100 caracteres até ques ser 
                                                     //lido um valor nulo.
     
     printf("%s",frasecurso);
      
     
    
     }
      fclose(mostrardados);
     
     
     
     
     
                 getch();
                 system("cls");
                 menu_princ();
}
