#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.n = "Poppy";
    my_dog.a = 3.5;
    my_dog.o = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.n, my_dog.a);
    return (0);
}
