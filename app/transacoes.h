void saldoCliente(){

  printf("\n\t__________________________ \n\t\t  Saldo: R$ %.2f " , saldo[numLogin]);
}

void saque(){

  float saqueValor;

  int nota100 = 0;
  int nota50 = 0;
  int nota20 = 0;
  int nota10 = 0;
  int nota5 = 0;
  int nota2 = 0;
  int nota1 = 0;

  printf("\n\t\t   SAQUE \n\t__________________________ \n\t\t Digite o valor: \n\t\t R$  ");
  scanf("%f" , &saqueValor);

  if(saqueValor > saldo[numLogin]){

    printf("\n\t__________________________ \n\t\tSaldo insuficiente ");
  }else{
    saldo[numLogin] = saldo[numLogin] - saqueValor;

    printf("\n\t__________________________ \n\t\t\tVocê sacou: \n\t\t\t R$ %.2f \n" , saqueValor);

    do{
      
      if(saqueValor >= 100){
        //nota de 100
        nota100++;
        saqueValor = saqueValor - 100;
      }else if(saqueValor >= 50 && saqueValor < 100){
        //nota de 50
        nota50++;
        saqueValor = saqueValor - 50;
      }else if(saqueValor >= 20 && saqueValor < 50){
        //nota de 20
        nota20++;
        saqueValor = saqueValor - 20;
      }else if(saqueValor >= 10 && saqueValor < 20){
        //nota de 10
        nota10++;
        saqueValor = saqueValor - 10;
      }else if(saqueValor >= 5 && saqueValor < 10){
        //nota de 5
        nota5++;
        saqueValor = saqueValor - 5;
      }else if(saqueValor >= 2 && saqueValor < 5){
        //nota de 2
        nota2++;
        saqueValor = saqueValor - 2;
      }else if(saqueValor >= 1 && saqueValor < 2){
        //nota de 1
        nota1++;
        saqueValor = saqueValor - 1;
      }
    }while(saqueValor > 0.99);
  
    //printf das notas
    if(nota100 > 0){
      printf("\n\t\t %d Nota(s) de 100 " , nota100);
    }

    if(nota50 > 0){
      printf("\n\t\t %d Nota(s) de 50 " , nota50);
    }

    if(nota20 > 0){
      printf("\n\t\t %d Nota(s) de 20 " , nota20);
    }

    if(nota10 > 0){
      printf("\n\t\t %d Nota(s) de 10 " , nota10);
    }

    if(nota5 > 0){
      printf("\n\t\t %d Nota(s) de 5 " , nota5);
    }

    if(nota2 > 0){
      printf("\n\t\t %d Nota(s) de 2 " , nota2);
    }

    if(nota1 ){
      printf("\n\t\t %d Moeda(s) de 1 " , nota1);
    }

    if(saqueValor > 0 && saqueValor < 1){
      printf("\n\t\t %.2f em moedas " , saqueValor);
    }
  }
}

void deposito(){

  int opDep;
  float depValor;
  int depConta;

  printf("\n\t\t   DEPOSITAR\n\t__________________________ \n\t   1 - Para sua conta \n\t   2 - Para outra conta \n");
  scanf("%d" , &opDep);

  switch(opDep){

    case 1:
      system("clear");

      printf("\n\t\t\t DEPÓSITO \n\t\t    Conta Nº %d \n\t__________________________" , conta[numLogin]);

      printf("\n\t\tValor do depósito: \n\t\t\t R$ ");
      scanf("%f" , &depValor);

      saldo[numLogin] = saldo[numLogin] + depValor;

      system("clear");
      printf("\n\t__________________________ \n\t\t Valor depositado \n\t\t\t R$ %.2f " , depValor);
    break;

    case 2:
      system("clear");

      printf("\n\t__________________________ \n\t\tDigite a conta para \n\t\t\tdepósito: ");
      scanf("%d" , &depConta);

      if(contAtiva[depConta] == 0){
        printf("\n\t__________________________ \n\t\t Conta inexistente ");
      }else{
        system("clear");

        printf("\n\t\t\t DEPÓSITO \n\t\t    Conta Nº %d \n\t__________________________" , conta[depConta]);

        printf("\n\t\tValor do depósito: \n\t\t\t R$ ");
        scanf("%f" , &depValor);

        saldo[depConta] = saldo[depConta] + depValor;

        system("clear");

        printf("\n\t__________________________ \n\t\t Valor depositado \n\t\t\t R$ %.2f " , depValor);
      }
    break;

    default:
      printf("\n\t\t Opção inválida ");
  }
}

void transferencia(){

  int contaTransfe;
  float valorTransfe;

  printf("\n\t__________________________ \n\t\t  TRANSFERENCIA \n\t__________________________ \n\t\t Digite a conta \n\t\t\t   ");
  scanf(" %d" , &contaTransfe);

  if(contAtiva[contaTransfe] == 0){
    system("clear");

    printf("\n\t__________________________ \n\t\t Conta inexistente ");
  }else{
    printf("\n\t__________________________ \n\t  Valor da transferencia: \n\t\t\t R$ ");
    scanf(" %f" , &valorTransfe);

    if(valorTransfe > saldo[numLogin]){
      system("clear");

      printf("\n\t__________________________ \n\t\tSaldo insuficiente ");
    }else{
      system("clear");

      saldo[numLogin] = saldo[numLogin] - valorTransfe;

      saldo[contaTransfe] = saldo[contaTransfe] + valorTransfe;

      printf("\n\t__________________________ \n\t\tValor trasferido: \n\t\t\t R$ %.2f" , valorTransfe);
    }
  }
}