#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#define mascara '*'

typedef struct aluno_cad{
       char matricula[50],nome[50],curso[50], email[50], orientador[50], rua[50], bairro[50], cep[15], celular[15], matriculax[50],nomex[50],cursox[50], emailx[50], orientadorx[50], ruax[50], bairrox[50], cepx[15], celularx[15];       
};

void aluno()
{
     
     FILE*incluirdados;
     
     FILE*mostrardados;
     
     incluirdados=fopen("dados/cadastro_aluno.txt","a");
     mostrardados=fopen("dados/cadastro_aluno.txt","r");
     
     char buffer1[10], senhaaluno,cursoal[50],nomeal[50],matal[50],emailal[50], ruaaluno[50], matalcons [50]; 
     char bairroaluno[50],orientador[50], cepaluno[15], celularaluno[15], vazio[] = "\0";
     char d[50], d1[50], d2[50], d3[50], d4[50], d5[50], d6[50], d7[50], d8[50];
     char d9[50], d10[50], d11[50], d12[50], d13[50], d14[50], d15[50], d16[50], d17[50];
     int pos1 = 0,dig, registro = 0, i=0, opc;
     
     struct aluno_cad vetor[30];
              
                 printf("\nDigite (0) para fazer o  cadastro e (1) para consulta\n");
                 scanf("%d",&dig);
                 
                if (dig==0) 
                {
                             printf ("\n===Cadastramento Aluno===\n");
                             printf ("\nMarcado com * é opcional.\n");

                             printf ("\nDigite nome do curso.\n");
                             fflush(stdin);
                             gets (cursoal);
                             fprintf(incluirdados," Curso: %s\n",cursoal);

                             printf ("\nAluno digite seu nome.\n");
                             fflush(stdin);
                             gets (nomeal);
                             fprintf(incluirdados," Nome: %s\n",nomeal);

                             printf ("\nAluno digite sua matrícula.\n");
                             fflush(stdin);
                             gets (matal);
                             fprintf(incluirdados," Matrícula: %s\n",matal);

                             printf ("\nAluno digite seu email.\n");
                             fflush(stdin);
                             gets (emailal);
                             fprintf(incluirdados," Email: %s\n\n",emailal);

                             printf ("\nAluno digite uma senha com 6 digitos.\n");
                             
                             do 
                             {
                                    senhaaluno = getch();

                                    if( isprint(senhaaluno))
                                    {
                                          buffer1[ pos1++ ] = senhaaluno;
                                          printf("%c", mascara);
                                    }
                                   else if( senhaaluno == 8  )
                                   {
                                         buffer1[ pos1-- ] = '\0';
                                         printf("\b \b");
                                   }
                            }while(senhaaluno !=13);
                            buffer1[pos1]='\0';

                            printf ("\n*Informe rua ou digite 0 para pular.\n");
                            fflush (stdin);
                            gets (ruaaluno);
                 
                            if(!strcmp(ruaaluno, "0"))
                            {
                                      fprintf(incluirdados,"\nRua: %s",vazio);                                                                          
                            }
                            else
                            {
                                      fprintf(incluirdados,"\nRua: %s\n",ruaaluno);                                       
                            }

                             printf ("\n*Informe bairro ou digite 0 para pular.\n");
                             fflush (stdin);
                             gets (bairroaluno);
                 
                             if(!strcmp(bairroaluno, "0"))
                             {
                                      fprintf(incluirdados,"\nBairro: %s",vazio);                                     
                             }
                             else
                             {
                                      fprintf(incluirdados,"\nBairro: %s\n",bairroaluno);                                     
                             }

                              printf ("\n*Informe cep ou digite 0 para pular.\n");
                              fflush (stdin);
                              gets (cepaluno);
                 
                              if(!strcmp(cepaluno, "0"))
                              {
                                      fprintf(incluirdados,"\nCep: %s",vazio);                                     
                              }
                              else
                              {
                                      fprintf(incluirdados,"\nCep: %s\n",cepaluno);                                     
                              }
                

                               printf ("\n*Informe telefone apenas digitos ou digite 0 para pular.\n");
                               fflush (stdin);
                               gets (celularaluno);
                 
                               if(!strcmp(celularaluno, "0"))
                               {
                                      fprintf(incluirdados,"\nCelular: %s",vazio);                                     
                               }
                               else
                               {
                                      fprintf(incluirdados,"\nCelular: %s\n",celularaluno);                                     
                               }

                               printf ("\n*Informe orientador ou digite 0 para pular.\n");
                               fflush (stdin);
                               gets (orientador);
                 
                               if(!strcmp(orientador, "0"))
                               {
                                      fprintf(incluirdados," \nOrientador: %s",vazio);                                      
                               }
                               else
                               {
                                      fprintf(incluirdados,"\nOrientador: %s\n",orientador);                                      
                               }
                 
                               fclose(incluirdados);
               
                               printf("\nCadastro efetuado com sucesso!");
                               printf ("\nDigite enter para voltar ao menu principal.");
                
                               getch();
                 }
                 
                 if (dig==1)
                 {        
                          
                         printf ("\n===Consulta Aluno===\n");
                          
                         while(fscanf(mostrardados,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s",&d ,&d1 ,&d2 ,&d3 , &d4, &d5, &d6, &d7, &d8, &d9,&d10 ,&d11 ,&d12 , &d13, &d14, &d15, &d16, &d17) != EOF)
                          {
                                    strcpy(vetor[i].curso,d); 
		                            strcpy(vetor[i].cursox, d1);
		                            strcpy(vetor[i].nome,d2);
		                            strcpy(vetor[i].nomex,d3);
		                            strcpy(vetor[i].matricula,d4);
		                            strcpy(vetor[i].matriculax,d5);
		                            strcpy(vetor[i].email,d6);
		                            strcpy(vetor[i].emailx,d7);
		                            strcpy(vetor[i].rua,d8);
		                            strcpy(vetor[i].ruax,d9);
		                            strcpy(vetor[i].bairro,d10);
		                            strcpy(vetor[i].bairrox,d11);
		                            strcpy(vetor[i].cep,d12);
		                            strcpy(vetor[i].cepx,d13);
                                    strcpy(vetor[i].celular,d14);
		                            strcpy(vetor[i].celularx,d15);
		                            strcpy(vetor[i].orientador,d16);
		                            strcpy(vetor[i].orientadorx, d17);
		                  
                                    i++;
                          }
                          
                          fclose(mostrardados);
                          
                          do
		                  {	
	                              	printf("\nDigite a matricula para consultar: ");
	                            	fflush(stdin);
		                           	gets(matalcons);
	                                printf("\n");
 	                  
		                        	for(registro=0; registro<i ;registro++)
			                        {
	                                    	if(strcmp(vetor[registro].matriculax, matalcons) == 0) //se forem iguais
                                            	
				                                   	printf("%s %s\n %s %s\n %s %s\n %s %s\n %s %s\n %s %s\n %s %s\n %s %s \n %s %s\n", vetor[registro].curso, vetor[registro].cursox, vetor[registro].nome, vetor[registro].nomex, vetor[registro].matricula, vetor[registro].matriculax, vetor[registro].email, vetor[registro].emailx, vetor[registro].rua, vetor[registro].ruax, vetor[registro].bairro, vetor[registro].bairrox, vetor[registro].cep, vetor[registro].cepx, vetor[registro].celular, vetor[registro].celularx,  vetor[registro].orientador, vetor[registro].orientadorx );
					                                
                                            else 
                                                 printf("Matrícula inválida.\n");  
    	                        	}
                              
                                    printf("\n");
		                          	printf("[1]consultar / [0]sair: ");
		                          	scanf("%d", &opc);
		                           	system("cls");
			
	                   	}while(opc!=0);
                                                                                      
                 }     
                 system("cls");
                
                 menu_princ();
                
}

