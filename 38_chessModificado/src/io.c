#include "io.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <error.h>
#include <errno.h>

const char *good_chars = "TCAKQP-";

void
print_usage (FILE * output)
{
  fprintf (output, USAGE, program_invocation_short_name);
}

void
error_ocurred ()
{
  print_usage (stderr);
  error (-errno, errno, "%s\n", strerror (errno));
}

int
repeat (void)
{
  int eleccion;
  printf("¿Quieres repetir? (0=NO, 1=SI): /n");
  scanf(" %i", &eleccion);
    return eleccion;
    /* char answer;
     * printf("Otra vez (S/N): ")
     * scanf(" %c %*[^\n]\n", &answer); %*[^\n] lee todo menos lo que este  entre corchetes y guarda la primera letra
     * if (tolower(answer) == 's') Para asegurar que meten minuscula
     *  return 1;
     *
     *return 0;

     otra opcion es return tolower(answer) == 's' ? 1: 0;
     */
}

char
transform (char c)
{
   c = toupper (c);
   if (!strchr(good_chars, c))
       c = '\0';
   if (c == '-')
       c = ' ';
   return c;
}

void

load (const char *filename, char storage[SIZE][SIZE])
{
  FILE *pf;
  char c;
  int row = 0, col = 0;

  memset(storage, ' ', SIZE*SIZE);

  pf = fopen (filename, "r");
  if (!pf)
    error_ocurred ();

  while (!feof (pf) )
  {
      c = fgetc (pf);
      if (c == '\n'){
          col = 0;
          row++;
      }
      c = transform (c);

      if (c)
          storage[row][col] = c;
      col++;

  }

  fclose (pf);
}

void
dump (char board[SIZE][SIZE])
{
  ;
}

void
ask_coordinates (int *y, int *x, const char *name)
{
        printf("%s: Posicion: ", name);
        //puts es como un printf pero con un /n al final
        //no se puede poner %s ni nada solo cadenas de caracteres
        printf("fila:");
        scanf(" %i", y);
}
