#include <unistd.h>
#include <stdio.h>

void ft_print_alphabet(void)
{
    write(1, "0 1 2 3 4 5 6 7 8 9\n", 21);

}

int main()
{
    ft_print_alphabet();
    return 0;
}