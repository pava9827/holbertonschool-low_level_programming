#include "holberton.h"
/**
 *
 *
 *
 *
 */
void more_numbers(void)
{
  int number, can;

    {
      number = 0;
      while (can  < 10)
        {
          for (number = 0; number <= 14; number++)
            {
              if (number > 9)
                {
                  _putchar(number / 10+'0');
                  _putchar(number % 10 + '0');
                }
            }
          can ++;
          _putchar('\n');
        }
    }
}
