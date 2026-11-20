//team with "Vira Zakharchenko"
#include <unistd.h>

void    hexconvert(int n)
{
    char    c;

    if (n < 10)
        c = n + '0';
    else
        c = (n - 10) + 'a';
    write(1, &c, 1);
}

int main(void)
{
    int i;

    i = 0;
    while (i <= 15)
    {
        hexconvert(i);
        write(1, "\n", 1);
        i++;
    }
    return (0);
}