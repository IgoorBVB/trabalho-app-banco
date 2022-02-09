#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "infoContas.h"
#include "cadastroLogin.h"
#include "menus.h"
#include "transacoes.h"
#include "opcoesFuncionario.h"

int main() {

  //menu inicial
  int opEntrada = 0;  
  int voltarMenu;

  //menu login
  int menuUsuario;
  int opUsuario;
  int opFuncionario;
  int opSair;
  
  //repetição do menu de inicio
  do{
    system("clear");
    menuInicio();
    scanf(" %d" , &opEntrada);

    switch(opEntrada){
      
      case 1: //cadastro
        system("clear");
        cadastro();

        printf("\n\t__________________________ \n\t\t 1 - continuar \n\t__________________________  \n");
        scanf(" %d" , &voltarMenu);
      break;  //fim cadastro

      case 2: //login
        system("clear");
        login();

        do{
          system("clear");

          limite[numLogin] = 1000;

          printf("\n\t__________________________");
          printf("\n\t\t   Conta: %d " , conta[numLogin]);
          printf("\n\t\t   Nome: %s " , nome[numLogin]);
          printf("\n\t\t   Senha: %s " , senha[numLogin]);
          printf("\n\t\t   Saldo: R$ %.2f " , saldo[numLogin]);
          printf("\n\t\t   Limite: R$ %.2f " , limite[numLogin]);
          printf("\n\t__________________________");

          menuCliente();
          scanf(" %d" , &opUsuario);

          switch(opUsuario){

            case 1: //saldo
              system("clear");

              saldoCliente();

              voltar();
              scanf(" %d" , &menuUsuario);
            break;

            case 2: //saque
              system("clear");

              saque();

              voltar();
              scanf(" %d" , &menuUsuario);
            break;

            case 3: //deposito
              system("clear");

              deposito();

              voltar();
              scanf(" %d" , &menuUsuario);
            break;

            case 4: //transferencia
              system("clear");

              transferencia();

              voltar();
              scanf(" %d" , &menuUsuario);
            break;

            case 5: //encerrar conta
              system("clear");

              if(saldo[numLogin] > 0){

                printf("\n\t__________________________ \n\t O saldo deve ser de R$ 0\n\t  para encerrar a conta ");

                printf("\n\t__________________________ \n\t\t\t1 - Voltar \n\t__________________________  \n");
                scanf(" %d" , &menuUsuario);
              
              }else{

                printf("\n\t__________________________ \n\t\t  1 - confirmar \n\t\t  2 - cancelar \n");
                scanf(" %d" , &opSair);

                if(opSair == 1){
                  encerrarConta();
                  logado = 0;
                  voltarMenu = 1;
                  menuUsuario = -1;
                }else{
                  menuUsuario = 1;
                }
              }
            break;

            case 6: //sair
              printf("\n\t Deseja sair? \n\t 1 - Sair \n\t 2 - Voltar \n ");
              scanf(" %d" , &opSair);

              if(opSair == 1){ 
                logado = 0;
                voltarMenu = 1;
                menuUsuario = -1;
              }else{
                menuUsuario = 1;
              }
            break;

            case 7: //opções funcionario
              menuFuncionario();
              scanf(" %d" , &opFuncionario);

              switch(opFuncionario){
                
                case 1: //saldo medio
                  system("clear");

                  saldoMedio();

                  voltar();
                  scanf(" %d" , &menuUsuario);
                break;

                case 2: //valor total depositado
                  system("clear");

                  valorTotalDep();

                  voltar();
                  scanf(" %d" , &menuUsuario);
                break;

                case 3: //quantidade de clientes
                  system("clear");

                  quantClientes();

                  voltar();
                  scanf(" %d" , &menuUsuario);
                break;

                case 4: //todas as contas
                  system("clear");

                  todasContas();

                  voltar();
                  scanf(" %d" , &menuUsuario);
                break;

                default:
                  printf("\n\t\t Opção inválida ");
              }
            break;

            default:
              system("clear");
              printf("\n\t\t Opção inválida ");
          }
        }while(menuUsuario >= 0);
      break;  //fim login

      default:
        printf("\n\t\t Opção inválida ");
    }
  }while(voltarMenu >= 0);    //fim do menu de inicio
  
  return 0;
}