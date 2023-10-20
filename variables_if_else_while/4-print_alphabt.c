#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, except for q and e
 *followed by a new line
 *return: 0
 */

int main(void)
{
      char ch = 'a';

      while (ch <= 'z')
      {
            if (ch != 'q' && ch != 'e')
            putchar(ch);
            ch= ch + 1;
      }
      putchar('\n');
      return (0);
}
