#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#define mascara '*'

typedef struct prof_cad{
       char bufferp[10], matriculap[50],nomep[50], emailp[50], celularp[15], bufferpx[10], matriculapx[50],nomepx[50], emailpx[50], celularpx[15];       
};

void professor()
{
     FILE*incluirdados;
     
     FILE*mostrardados;
     
     incluirdados=fopen("dados/cadastro_prof.txt","a");
     mostrardados=fopen("dados/cadastro_prof.txt","r");
     
     char buffer2[10], senhaprof, nomeprof[50],matprof[50],emailprof[50], celular[15], matprofcons[50], vazionum[] = "\0";
     char d[50], d1[50], d2[50], d3[50];
     char d4[50], d5[50], d6[50], d7[50], d8[50], d9[50];
     int pos2 = 0, dig, i = 0, registro = 0, opc; 
     
     struct prof_cad vetor[30];    
         
                 printf("\nDigite (0) para fazer o  cadastro e (1) para consulta\n");
                 scanf("%d",&dig);
                 
                if (dig==0) 
                {
                    printf ("\n===Cadastramento Professor===\n");
                    printf ("\nMarcado com * é opcionall.\n");

                    printf ("\nProfessor digite seu nome.\n");
                    fflush(stdin);
                    gets (nomeprof);
                    fprintf(incluirdados," Nome: %s\n",nomeprof);

                    printf ("\nProfessor digite sua matrícula.\n");
                    fflush(stdin);
                    gets (matprof);
                    fprintf(incluirdados," Matricula: %s\n",matprof); 

                    printf ("\nProfessor digite seu email.\n");
                    fflush(stdin);
                    gets (emailprof);
                    fprintf(incluirdados," Email: %s\n",emailprof);
                    

                    printf ("\nProfessor digite uma senha com 6 digitos.\n");
                    do {
                        senhaprof = getch();

                        if( isprint(senhaprof))
                        {
                            buffer2[ pos2++ ] = senhaprof;
                            printf("%c", mascara);
                        }
                        else if( senhaprof == 8  )
                        {
                            buffer2[ pos2-- ] = '\0';
                            printf("\b \b");
                        }
                    }while(senhaprof !=13);
                        
                        buffer2[pos2]='\0';
                    fprintf(incluirdados," Senha: %c%c%c%c%c%c\n", mascara,mascara,mascara,mascara,mascara,mascara);    

                   printf ("\n*Informe celular ou digite enter para pular.\n");
                   fflush (stdin);
                   gets (celular);
                   if(!strcmp(celular, "0"))
                 {
                                      fprintf(incluirdados," Celular: %s\n", strcpy(celular,vazionum));                                     
                 }
                 else
                 {
                                      fprintf(incluirdados," Celular: %s\n", celular);                                     
                 }                                    
                 

                  fclose(incluirdados); 
                       
                 printf("\nCadastro efetuado com sucesso!");
                 printf ("\nDigite enter para voltar ao menu principal.");
                
                 getch();
            }
                
                  
            if (dig==1)
                 {        
                          printf ("\n===Consulta Professor===\n");
                         
                         while(fscanf(mostrardados,"%s %s %s %s %s %s %s %s %s %s\n",&d ,&d1 ,&d2 ,&d3 , &d4, &d5, &d6, &d7, &d8, &d9) != EOF)
                          {
                          
		                            strcpy(vetor[i].nomep,d);
		                            strcpy(vetor[i].nomepx,d1);
		                            strcpy(vetor[i].matriculap,d2);
		                            strcpy(vetor[i].matriculapx,d3);
		                            strcpy(vetor[i].emailp,d4);
		                            strcpy(vetor[i].emailpx,d5);
                                    strcpy(vetor[i].celularp,d6);
		                            strcpy(vetor[i].celularpx,d7);
		                            strcpy(vetor[i].bufferp,d8);
		                            strcpy(vetor[i].bufferpx,d9);
		                            
                                    i++;
                          }
                          
                          fclose(mostrardados);
                          
                          do
		                  {	
	                              	printf("\nDigite a matricula para consultar: ");
	                            	fflush(stdin);
		                           	gets(matprofcons);
	                                printf("\n");
 	                  
		                        	for(registro=0; registro<i ;registro++)
			                        {
	                                    	if(strcmp(vetor[registro].matriculapx, matprofcons) == 0) //se forem iguais
                                            	
				                                   	printf("%s %s\n %s %s\n %s %s\n %s %s\n %s %s",vetor[registro].nomep, vetor[registro].nomepx, vetor[registro].matriculap, vetor[registro].matriculapx, vetor[registro].emailp, vetor[registro].emailpx, vetor[registro].celularp, vetor[registro].celularpx, vetor[registro].bufferp, vetor[registro].bufferpx);
					                                
                                     
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
