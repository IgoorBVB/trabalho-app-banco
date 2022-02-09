void menuInicio(){

  printf("\n\t__________________________\n\t\tOpções de entrada \n\t__________________________ ");
  printf("\n\t\t  1 - Cadastro \n\t\t  2 - Entrar \n");
}

void voltar(){

  printf("\n\t__________________________ \n\t\t    1 - Voltar \n\t__________________________  \n");
}

void menuCliente(){

  printf("\n\n\t   Serviços disponíveis:");
  printf("\n\t__________________________");
  printf("\n\t\t 1 - Saldo \n\t\t 2 - Saque \n\t\t 3 - Depósito \n\t\t 4 - Transferencia \n\t\t 5 - Encerrar conta \n\t\t 6 - Sair \n");

  if(funcionario[numLogin] == 1){
            
    printf("\t\t 7 - OPÇÕES DE FUNCIONÁRIO \n");
  }
}

void menuFuncionario(){

  printf("\n\t__________________________ \n\t   Opções de funcionário \n\t__________________________");
  
  printf("\n\t1 - Saldo médio das contas \n\t2 - Valor total depositado  \n\t3 - Quantidade de clientes \n\t4 - Mostrar todas as contas \n");
}