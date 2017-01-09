#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#define mascara '*'

typedef struct curso_cad{
       char nomecurso[20], turnocurso[20], nomecursox[20], turnocursox[20];       
};

void curso()
{
     
     FILE*incluirdados;
     
     FILE*mostrardados;
     
     incluirdados=fopen("dados/cadastro_curso.txt","a");
     mostrardados=fopen("dados/cadastro_curso.txt","r");
     
     char curso[20],turno[20], coordenador[20], vazio[] = "\0", cursocons[20];
     char d[20], d1[20], d2[20], d3[20];
     int dig, i = 0, registro = 0, opc;
     
     struct curso_cad vetor[30];
     
     
                printf("\nDigite (0) para fazer o  cadastro e (1) para consulta\n");
                scanf("%d",&dig);
                 
                if (dig==0) 
                {
     
                            printf("\n===Cadastramento Curso===\n");
                 
                            printf ("\nMarcado com * é opcionall.\n");

                            printf ("\nDigite nome do curso.\n");
                            fflush(stdin);
                            gets (curso);
                            fprintf(incluirdados," Curso: %s\n",curso);

                            printf ("\nDigite turno do curso.\n");
                            fflush(stdin);
                            gets (turno);
                            fprintf(incluirdados," Turno: %s\n\n",turno);
                 
                            printf ("\n*Informe coordenador do curso ou digite 0 enter para pular.\n");
                            fflush (stdin);
                            gets (coordenador);
                            if(!strcmp(coordenador, "0"))
                            {
                                      fprintf(incluirdados," coordenador: %s\n",vazio);                                      
                            }
                            else
                            {
                                      fprintf(incluirdados," coordenador: %s\n",coordenador);                                     
                            }
                            
                            fclose(incluirdados);

                            printf ("Digite enter para voltar ao menu principal.");
                            getch();
               }    
               
               if (dig==1)
                 {        
                          printf ("\n===Consulta curso===\n");
                          
                         while(fscanf(mostrardados,"%s %s %s %s\n",&d ,&d1 ,&d2 ,&d3) != EOF)
                          {
                          
		                            strcpy(vetor[i].nomecurso,d);
		                            strcpy(vetor[i].nomecursox,d1);
		                            strcpy(vetor[i].turnocurso,d2);
		                            strcpy(vetor[i].turnocursox,d3);
                 
                                    i++;
                          }
                          
                          fclose(mostrardados);
                          
                          do
		                  {	
	                              	printf("\nDigite o nome do curso para consultar: ");
	                            	fflush(stdin);
		                           	gets(cursocons);
	                                printf("\n");
 	                  
		                        	for(registro=0; registro<i ;registro++)
			                        {
	                                    	if(strcmp(vetor[registro].nomecursox, cursocons) == 0) //se forem iguais
                                            	
				                                   	printf("%s %s\n %s %s\n",vetor[registro].nomecurso, vetor[registro].nomecursox, vetor[registro].turnocurso, vetor[registro].turnocursox);
					                                
                                             
    	                        	}
                              
                                    printf("\n");
		                          	printf("\n[1]consultar / [0]sair: ");
		                          	scanf("%d", &opc);
		                           	system("cls");
			
	                   	}while(opc!=0);
                                                                                      
                 }     
                 system("cls");
                
                 menu_princ();
                
}
