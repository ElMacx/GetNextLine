#include <stdlib.h>

int main()
{
  char *s;
  int a;

  while ((s = get_next_line(0)))
    {
            printf("%s\n", s);
      free(s);
    }
}
