#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#define mascara '*'

void horario_banca()
{
     FILE*incluirdados;
     
     FILE*mostrardados;
     
     incluirdados=fopen("dados/horarios_defesa.txt","a");
     mostrardados=fopen("dados/horarios_defesa.txt","r");
     
      char periododef[100],cursodef[100], titulotrabHB[100], vazio[] = "\0";
      
                    printf ("\n===Gera��o dos Hor�rios de Defesa===\n");
                    
                    printf ("\nPer�odo.\n");
                    fflush(stdin);
                    gets(periododef);
                    fprintf(incluirdados," Periodo : %s\n",periododef);

                    printf ("\nDigite nome do curso.\n");
                    fflush(stdin);
                    gets(cursodef);
                    fprintf(incluirdados," Curso: %s\n\n",cursodef);
                     
                    fclose(incluirdados);
                    
                    printf ("\n*Informe o t�tulo do trabalho ou digite 0 para pular.\n");
                    fflush (stdin);
                    gets (titulotrabHB);
                    if(!strcmp(titulotrabHB, "0"))
                    {
                                         fprintf(incluirdados," T�tulo trabalho: %s\n",vazio);                                      
                    }
                    else
                    {
                                         fprintf(incluirdados," T�tulo trabalho: %s\n",titulotrabHB);                                     
                    }
                    

                    getch();
                    system("cls");
                    menu_princ();
}
