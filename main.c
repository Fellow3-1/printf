#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * @file main.c
 * @author your name ()
 * @brief Program starts from here
 * @version 0.1
 * @date 2022-07-11
 * Return : 0
 * @copyright Copyright (c) 2022
 * 
 */
int main(void)
{
    int count_std = 0;
    int count_grp = 0;

    write (1, "Std:\n" ,4);
    count_std = printf("Test String\n")
    printf("I printed %d characters\n", count_std);

    write (1, "Group_Test:\n" ,11);
    printf("I printed %d characters\n",  count_grp);
    _printf("Test String\n");

    return (0);
}
