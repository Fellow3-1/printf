#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * @brief 
 * _printf - prints a string in a formated way
 * @param formart: string to print (char *) 
 * @param ... 
 * @return number of characters printed 
 */

int _printf(const char *format, ...){
  int count = 0, i;
  
  va_list data;
  va_start(data, format);

  // _printf("%s", 'String')
  
  for (i = 0; format[i] != '\0'; ){
    
    /* count the number of characters and print to the screen each character counted */
    if (format[i] != '%'){
      count += _putchar(format[i]);
      i++;
    }
    else if (format[i] == '%' && format[i+1] !=' '){
      switch (format[i + 1]){
        case 'c':
            /* print the character from the variadic_arguments */
            count += _putchar(va_arg(data, int));
            break;
        case 's':
            count += print_string(va_arg(data, char *));
            break;
        case '%':
            /* print the character from the variadic_arguments */
            count += _putchar('%');
            break;
        default:
            break;
      }
      
      i += 2;
    }
    
    
  }
  

  return (count);
}