int i;
int contasAtivas;

void quantClientes(){

  contasAtivas = 0;

  for(i=1; i<=contasTotal; i++){

    if(contAtiva[i] == 1){
      contasAtivas++;
    }
  }
    printf("\n\t__________________________ \n\t   Clientes cadastrados: \n\t\t\t\t%d" , contasAtivas);
}

void saldoMedio(){

  float saldoTotal;
  float saldoMedia;

  for(i=1; i<=contasTotal; i++){

    if(contAtiva[i] == 1){
      saldoTotal = saldoTotal + saldo[i];
    }
  }

    quantClientes();
    saldoMedia = saldoTotal / contasAtivas;

    printf("\n\t__________________________ \n\t\t   Saldo Médio: \n\t\t\tR$ %.2f " , saldoMedia);
}

void valorTotalDep(){

  float valorEmDeposito = 0;

  for(i=1; i<=contasTotal; i++){
    
    if(contAtiva[i] == 1){
      valorEmDeposito = valorEmDeposito + saldo[i];
    }
  }

  printf("\n\t__________________________\n\t Valor total em deposito: \n\t\t\tR$ %.2f" , valorEmDeposito);
}


void todasContas(){

  int opMostrar;

  printf("\n\t\t\t  Opções \n\t__________________________\n\t\t1 - Escolher conta \n\t\t2 - Mostrar todas \n");
  scanf(" %d" , &opMostrar);

  system("clear");

  switch(opMostrar){

    case 1:   //Escolher conta
      printf("\n\t__________________________\n\t\t Digite o número \n\t\t\tda conta: \n\t\t\t\t");
      scanf(" %d" , &i);

      if(contAtiva[i] == 1){
        printf("\n\t__________________________");
        printf("\n\t\t   Conta: %d " , conta[i]);
        printf("\n\t\t   Nome: %s " , nome[i]);
        printf("\n\t\t   Senha: %s " , senha[i]);    
        printf("\n\t\t   Saldo: R$ %.2f " , saldo[i]);
        printf("\n\t\t   Limite: R$ %.2f " , limite[i]);
        printf("\n\t__________________________");
      }else{
        printf("\n\t__________________________ \n\t\t Conta inexistente ");
      }
    break;

    case 2:   //Mostrar todas as contas

      quantClientes();

      for(i=1; i<=contasTotal; i++){

        if(contAtiva[i] == 1){
        printf("\n\t__________________________");
        printf("\n\t\t   Conta: %d " , conta[i]);
        printf("\n\t\t   Nome: %s " , nome[i]);
        printf("\n\t\t   Senha: %s " , senha[i]);    
        printf("\n\t\t   Saldo: R$ %.2f " , saldo[i]);
        printf("\n\t\t   Limite: R$ %.2f " , limite[i]);
        printf("\n\t__________________________");
        }
      } 
    break;

    default:
      printf("\n\t Opção inválida ");
  }
}