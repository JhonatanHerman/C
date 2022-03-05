#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>




void type_text(char *s, unsigned ms_delay)  //FUNÇÃO PARA LETRAS DIGITADAS
{
   unsigned usecs = ms_delay * 1000; /* 1000 microseconds per ms */

   for (; *s; s++) {
      putchar(*s);
      fflush(stdout); /* alternatively, do once: setbuf(stdout, NULL); */
      usleep(usecs);
   }
}

void clear(){ //FUNÇÃO PARA LIMPAR O QUADRO
  printf("\n\n\n\n\n");
  system("pause");
  system("cls");
  
  
  
}