#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#define mascara '*'

void menu_princ()
{
     extern int tu;
    int menuprinc=0;


        printf ("\n|============================CADASTRO B�SICO============================|\n");
        printf ("|                                                                       |\n");
        printf ("|   (1).PROFESSOR.                                                      |\n");
        printf ("|   (2).CURSO.                                                          |\n");
        printf ("|   (3).ALUNO.                                                          |\n");
        printf ("|                                                                       |\n");
        printf ("|=======================================================================|\n");

        printf ("\n|================================DEFESAS================================|\n");
        printf ("|                                                                       |\n");
        printf ("|   (4).CADASTRO PREVIS�O DE DEFESAS.                                   |\n");
        printf ("|   (5).REGISTRAR INTERESSE EM DEFENDER EST�GIO.                        |\n");
        printf ("|   (6).GERAR HOR�RIO DAS BANCAS.                                       |\n");
        printf ("|                                                                       |\n");
        printf ("|=======================================================================|\n");

        printf ("\n|===============================RELAT�RIOS==============================|\n");
        printf ("|                                                                       |\n");
        printf ("|   (7).RELA��O DE ALUNOS CADASTRADOS.                                  |\n");
        printf ("|   (8).RELA��O DE PROFESSORES CADASTRADOS.                             |\n");
        printf ("|   (9).RELA��O DE CURSOS CADASTRADOS.                                  |\n");
        printf ("|  (10).RELA��O DE ALUNOS QUE REGISTRAM ITERESSE EM DEFENDER O EST�GIO. |\n");
        printf ("|  (11).RELA��O DE DEFESAS DE UM DETERMINADO PER�ODO.                   |\n");
        printf ("|  (12).RELA��O DE DEFESAS ORIENTADAS POR UM PROFESSOR.                 |\n");
        printf ("|  (13).RELA��O DAS DEFESAS QUE UM PROFESSOR PARTICIPOU NA BANCA.       |\n");
        printf ("|  (14).VOLTAR AO LOGIN.                                                |\n");
        printf ("|  (0).SAIR DO PROGRAMA.                                                |\n");
        printf ("|                                                                       |\n");
        printf ("|=======================================================================|\n");

        printf("\nInforme a opcao desejada: ");
        scanf("%d", &menuprinc);
        system("cls");

           switch (menuprinc)
           {
              case 1:
                   system("cls");
                   if(tu == 2)//Esse if faz com que essa op��o apenas seja acessada por usu�rio do tipo professor.
                   {
                         professor();
                   }
                   else{
                         printf ("\nVoc� � usu�rio do tipo aluno e esta op��o � apenas para professores.Tecle qualquer tecla para voltar ao menu principal.\n");
                  
                  printf ("Digite enter para voltar ao menu principal.");
                  getch();
                  system("cls");
                  menu_princ();
                  }
                  break; 
                          
             case 2:
                  system("cls");
                   if(tu == 2)//Esse if faz com que essa op��o apenas seja acessada por usu�rio do tipo professor.
                   {
                         aluno();
                   }
                   else{
                         printf ("\nVoc� � usu�rio do tipo aluno e esta op��o � apenas para professores.Tecle qualquer tecla para voltar ao menu principal.\n");
                  
                  printf ("Digite enter para voltar ao menu principal.");
                  getch();
                  system("cls");
                  menu_princ();
                  }
                  break; 
                                
             case 3:
                  system("cls");
                  aluno();
                  break;  
                          
             case 4:
                 system("cls");
                 if(tu == 2)//Esse if faz com que essa op��o apenas seja acessada por usu�rio do tipo professor.
                 {
                       cadastro_defesa();
                 }
                 else{
                     printf ("\nVoc� � usu�rio do tipo aluno e esta op��o � apenas para professores.Tecle qualquer tecla para voltar ao menu principal.\n");
                 
                 printf ("Digite enter para voltar ao menu principal.");
                 getch();
                 system("cls");
                 menu_princ();
                 }
                break;
                
             case 5:
                 system("cls");
                 if(tu == 1) //Esse if faz com que essa op��o apenas seja acessada por usu�rio do tipo aluno.
                 {
                       defesa_estagio();
                 }   
                 else
                 {
                     printf ("\nVoc� � usu�rio do tipo professor e esta op��o � apenas para alunos, ou a data limite da documenta��o foi ultrapassada.Tecle qualquer tecla para voltar ao menu principal.\n");
                
                printf ("Digite enter para voltar ao menu principal.");
                getch();
                system("cls");
                menu_princ();
                }
                break; 
                           
             case 6:
                system("cls");
                if(tu == 2)//Esse if faz com que essa op��o apenas seja acessada por usu�rio do tipo professor.
                {
                      horario_banca();
                }
                else
                {
                    printf ("\nVoc� � usu�rio do tipo aluno e esta op��o � apenas para professores.\n");
                
                printf ("Digite enter para voltar ao menu principal.");
                getch();
                system("cls");
                menu_princ();
                }
                break;
                
             case 7:
                system("cls");
                relacao_al();
                break; 
             case 8:
             	 system("cls");
                   if(tu == 2)//Esse if faz com que essa op��o apenas seja acessada por usu�rio do tipo professor.
                   {
                         relacao_prof();
                   }
                   else{
                         printf ("\nVoc� � usu�rio do tipo aluno e esta op��o � apenas para professores.Tecle qualquer tecla para voltar ao menu principal.\n");
                  
                  printf ("Digite enter para voltar ao menu principal.");
                  getch();
                  system("cls");
                  menu_princ();
                  }
                  break; 
              case 9:
                   
                system("cls");
                relacao_curso();
                break; 
                
              case 14: 
                system("cls");      
                main();   
                break; 
                
              case 0:
				system("cls");
				break;      
           }
}




