#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#define mascara '*'

typedef struct defesa_cad{
       char defesap[20], resumop[300], periodop[20], orientadorp[20],cursop[20], defesapx[20],resumopx[300], periodopx[20], orientadorpx[20], cursopx[20];       
};

void defesa_estagio()
{
     
     FILE*incluirdados;
     
     FILE*mostrardados;
     
     incluirdados=fopen("dados/interese_defesa.txt","a");
     mostrardados=fopen("dados/interese_defesa.txt","r");
     
     char defesa[100],resumo[300], titulotrab[100], periodo[20], orientador[20], curso[20], cursocons[20], vazio[] = "\0";
     char d[20], d1[20], d2[300], d3[300], d4[20], d5[20], d6[20], d7[20], d8[20], d9[20];
     int dig, i = 0, registro = 0, opc;
     
     struct defesa_cad vetor[30];

                 printf("\nDigite (0) para fazer o  cadastro e (1) para consulta\n");
                 scanf("%d",&dig);
                 
                 if (dig==0) 
                 {                  
                        printf ("\n===Registro de Interesse em Defender Trabalho===\n");
                        printf ("\nMarcado com * é opcionall.\n");
                        
                        printf ("\nDigite nome do curso.\n");
                        fflush(stdin);
                        gets (curso);
                        fprintf(incluirdados," Curso: %s\n",curso);

                        printf ("\nDigite turno do periodo.\n");
                        fflush(stdin);
                        gets (periodo);
                        fprintf(incluirdados," Período: %s\n",periodo);
                        
                        printf ("Diga se sua defesa é 'Estágio', ou 'Projeto de pesquisa'.\n");
                        fflush(stdin);
                        gets(defesa);
                        fprintf(incluirdados," Defesa(estágio ou projeto): %s\n",defesa);

                        printf ("Digite resumo sobre trabalho. (Máx. 300 caracteres.)\n");
                        fflush(stdin);
                        gets(resumo);
                        fprintf(incluirdados," Resumo: %s\n\n",resumo);
                        
                        printf ("\n*Informe orientador.\n");
                        fflush (stdin);
                        gets (orientador);
                        fprintf(incluirdados," Orientador: %s\n",orientador);

                        printf ("\n*Informe o título do trabalho ou digite 0 para pular.\n");
                        fflush (stdin);
                        gets (titulotrab);
                        if(!strcmp(titulotrab, "0"))
                        {
                                             fprintf(incluirdados," Título trabalho: %s\n",vazio);                                     
                        }
                        else
                        {
                                             fprintf(incluirdados," Título trabalho: %s\n",titulotrab);                                     
                        }
                        
                
                         fclose(incluirdados); 
                       
                         printf("\nCadastro efetuado com sucesso!");
                         printf ("\nDigite enter para voltar ao menu principal.");
                
                          getch();
            }
            
            if (dig==1)
                 {        
                          printf ("\n===Consulta Defesa===\n");
                          
                         while(fscanf(mostrardados,"%s %s %s %s %s %s %s %s %s %s %s %S\n",&d ,&d1 ,&d2 ,&d3 , &d4, &d5, &d6, &d7, &d8, &d9) != EOF)
                          {
                          
		                            strcpy(vetor[i].defesap,d);
		                            strcpy(vetor[i].defesapx,d1);
		                            strcpy(vetor[i].resumop,d2);
		                            strcpy(vetor[i].resumopx,d3);
		                            strcpy(vetor[i].periodop,d4);
		                            strcpy(vetor[i].periodopx,d5);
                                    strcpy(vetor[i].orientadorp,d6);
		                            strcpy(vetor[i].orientadorpx,d7);
		                            strcpy(vetor[i].cursop,d8);
		                            strcpy(vetor[i].cursopx,d9);
		                  
                                    i++;
                          }
                          
                          fclose(mostrardados);
                          
                          do
		                  {	
	                              	printf("\nDigite a matricula para consultar: ");
	                            	fflush(stdin);
		                           	gets(cursocons);
	                                printf("\n");
 	                  
		                        	for(registro=0; registro<i ;registro++)
			                        {
	                                    	if(strcmp(vetor[registro].cursopx, cursocons) == 0) //se forem iguais
                                            	
				                                   	printf("%s %s\n %s %s\n %s %s\n %s %s\n %s %s\n",vetor[registro].defesap, vetor[registro].defesapx, vetor[registro].resumop, vetor[registro].resumopx, vetor[registro].periodop, vetor[registro].periodopx, vetor[registro].orientadorp, vetor[registro].orientadorpx ,vetor[registro].cursop, vetor[registro].cursopx);
					                                
                                            else 
                                                 printf("Defesa inválido.\n"); 
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
