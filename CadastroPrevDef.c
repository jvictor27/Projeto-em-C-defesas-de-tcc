#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

void cadastro_defesa()
{
     FILE*incluirdados;
     
     FILE*mostrardados;
     
     incluirdados=fopen("dados/previsao_defesa.txt","a");
     mostrardados=fopen("dados/previsao_defesa.txt","r");
     
     char periodo[100],perinscricao[100],datamaxvia[100], cursodefesa[100];

                    printf ("\n===Cadastro Previs�o de Defesas===\n");

                    printf ("\nPer�odo de apresenta��o: 20.06 � 21.06\n");
                    fflush(stdin);
                    gets(periodo);
                    fprintf(incluirdados," Periodo de apresenta��o: %s\n",periodo);
                    

                    printf ("\nPer�odo de inscri��o: 20.04 � 10.06\n");
                    fflush(stdin);
                    gets(perinscricao);
                    fprintf(incluirdados," Periodo de inscri��o: %s\n",perinscricao);

                    printf ("\nData m�xima para levar as 3 vias impressas: 10/06\n");
                    fflush(stdin);
                    gets (datamaxvia);
                    fprintf(incluirdados," Data das vias: %s\n\n",datamaxvia);
                    
                    printf ("\nInforme o curso\n");
                    fflush(stdin);
                    gets(cursodefesa);
                    fprintf(incluirdados," Curso: %s\n",cursodefesa);
                    
                    fclose(incluirdados);
                    
                    
                
                 getch();
                 system("cls");
                 menu_princ();
}
