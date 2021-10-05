#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  pid_t pid;
  int i;
  FILE *fich = NULL;

  fich = fopen("nombres.txt", "a");
  pid = fork();

  if (pid == 0){
    for (size_t i = 0; i < 6; i++) {
      fprintf(fich , "%d" ,i );
    }
    exit(0);
  }
  for (size_t i = 6; i < 10; i++) {
    fprintf(fich, "%d",i );
  }
  exit(0);

}



5445
