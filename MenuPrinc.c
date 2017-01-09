#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#define mascara '*'

void menu_princ()
{
     extern int tu;
    int menuprinc=0;


        printf ("\n|============================CADASTRO BÁSICO============================|\n");
        printf ("|                                                                       |\n");
        printf ("|   (1).PROFESSOR.                                                      |\n");
        printf ("|   (2).CURSO.                                                          |\n");
        printf ("|   (3).ALUNO.                                                          |\n");
        printf ("|                                                                       |\n");
        printf ("|=======================================================================|\n");

        printf ("\n|================================DEFESAS================================|\n");
        printf ("|                                                                       |\n");
        printf ("|   (4).CADASTRO PREVISÃO DE DEFESAS.                                   |\n");
        printf ("|   (5).REGISTRAR INTERESSE EM DEFENDER ESTÁGIO.                        |\n");
        printf ("|   (6).GERAR HORÁRIO DAS BANCAS.                                       |\n");
        printf ("|                                                                       |\n");
        printf ("|=======================================================================|\n");

        printf ("\n|===============================RELATÓRIOS==============================|\n");
        printf ("|                                                                       |\n");
        printf ("|   (7).RELAÇÃO DE ALUNOS CADASTRADOS.                                  |\n");
        printf ("|   (8).RELAÇÃO DE PROFESSORES CADASTRADOS.                             |\n");
        printf ("|   (9).RELAÇÃO DE CURSOS CADASTRADOS.                                  |\n");
        printf ("|  (10).RELAÇÃO DE ALUNOS QUE REGISTRAM ITERESSE EM DEFENDER O ESTÁGIO. |\n");
        printf ("|  (11).RELAÇÃO DE DEFESAS DE UM DETERMINADO PERÍODO.                   |\n");
        printf ("|  (12).RELAÇÃO DE DEFESAS ORIENTADAS POR UM PROFESSOR.                 |\n");
        printf ("|  (13).RELAÇÃO DAS DEFESAS QUE UM PROFESSOR PARTICIPOU NA BANCA.       |\n");
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
                   if(tu == 2)//Esse if faz com que essa opção apenas seja acessada por usuário do tipo professor.
                   {
                         professor();
                   }
                   else{
                         printf ("\nVocê é usuário do tipo aluno e esta opção é apenas para professores.Tecle qualquer tecla para voltar ao menu principal.\n");
                  
                  printf ("Digite enter para voltar ao menu principal.");
                  getch();
                  system("cls");
                  menu_princ();
                  }
                  break; 
                          
             case 2:
                  system("cls");
                   if(tu == 2)//Esse if faz com que essa opção apenas seja acessada por usuário do tipo professor.
                   {
                         aluno();
                   }
                   else{
                         printf ("\nVocê é usuário do tipo aluno e esta opção é apenas para professores.Tecle qualquer tecla para voltar ao menu principal.\n");
                  
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
                 if(tu == 2)//Esse if faz com que essa opção apenas seja acessada por usuário do tipo professor.
                 {
                       cadastro_defesa();
                 }
                 else{
                     printf ("\nVocê é usuário do tipo aluno e esta opção é apenas para professores.Tecle qualquer tecla para voltar ao menu principal.\n");
                 
                 printf ("Digite enter para voltar ao menu principal.");
                 getch();
                 system("cls");
                 menu_princ();
                 }
                break;
                
             case 5:
                 system("cls");
                 if(tu == 1) //Esse if faz com que essa opção apenas seja acessada por usuário do tipo aluno.
                 {
                       defesa_estagio();
                 }   
                 else
                 {
                     printf ("\nVocê é usuário do tipo professor e esta opção é apenas para alunos, ou a data limite da documentação foi ultrapassada.Tecle qualquer tecla para voltar ao menu principal.\n");
                
                printf ("Digite enter para voltar ao menu principal.");
                getch();
                system("cls");
                menu_princ();
                }
                break; 
                           
             case 6:
                system("cls");
                if(tu == 2)//Esse if faz com que essa opção apenas seja acessada por usuário do tipo professor.
                {
                      horario_banca();
                }
                else
                {
                    printf ("\nVocê é usuário do tipo aluno e esta opção é apenas para professores.\n");
                
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
                   if(tu == 2)//Esse if faz com que essa opção apenas seja acessada por usuário do tipo professor.
                   {
                         relacao_prof();
                   }
                   else{
                         printf ("\nVocê é usuário do tipo aluno e esta opção é apenas para professores.Tecle qualquer tecla para voltar ao menu principal.\n");
                  
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




