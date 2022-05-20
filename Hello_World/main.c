#include <stdio.h>
#include <stdlib.h>

int main()
{
  int hora_cinema = 30;
  int hora_atual = 30;

  if(hora_atual > hora_cinema + 30){
        printf("Passou do tempo limite! Nao pode entrar!");
  }else if (hora_atual < hora_cinema - 30){
        printf("Nem abriu a porta do cinema");
  }else{
      printf("O horario está certo! Pode entrar!");
  }



  return 0;
}
