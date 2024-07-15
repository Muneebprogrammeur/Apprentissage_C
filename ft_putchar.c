#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    ft_putchar('a');
    ft_putchar('\n');
    write(1, "salut caca\n", 12);
    printf("JE suis le king\n");

}

