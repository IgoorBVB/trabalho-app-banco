int contasTotal;
int linha;

void cadastro(){

  linha++;
  contasTotal++;

  printf("\n\t\t   Criar conta: \n\t__________________________");

  printf("\n\n\t  Digite o nome: ");
  scanf(" %s" , nome[linha]);

  printf("\n\t  Digite a senha: ");
  scanf("%s" , senha[linha]);

  printf("\n\t  Criar como funcionário \n\t\t1 - SIM || 2 - NÃO \n");
  scanf(" %d" , &funcionario[linha]);

  conta[linha] = linha;
  contAtiva[linha] = 1;

  //INFOS DA CONTA
  printf("\n\t__________________________");
  printf("\n\t\t   Conta: %d " , conta[linha]);
  printf("\n\t\t   Nome: %s " , nome[linha]);
  printf("\n\t\t   Senha: %s " , senha[linha]);
  printf("\n\t\t   Funcionário: %d " , funcionario[linha]);
  printf("\n\t__________________________"); 
}

//login
int logado = 0;        //validação / 1 = logado
char senhaConf[L] [50];  //temporario pra senha
int numLogin;

void login(){

  do{
    printf("\n\n\t\t\t   Login \n\t___________________________");

    printf("\n\nDigite a número da conta: ");
    scanf("%d" , &numLogin);

    printf("\nDigite a senha: ");
    scanf(" %s" , senhaConf[numLogin]);
  
    if(numLogin == conta[numLogin] && strcmp(senhaConf[numLogin], senha[numLogin]) == 0 && contAtiva[numLogin] == 1){

      system("clear");

      printf("\n\t\t\t LOGADO!" );
      logado = 1;
    }else{

      system("clear");

      printf("\n\t___________________________ \n\t  CONTA ou SENHA incorreta \n\t___________________________ ");
    }
  }while(logado == 0);
}

void encerrarConta(){

  contAtiva[numLogin] = 0;

}