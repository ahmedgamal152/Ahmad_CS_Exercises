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

void    print_hex(unsigned int n)
{
    if (n >= 16)
        print_hex(n / 16);
    hexconvert(n % 16);
}

void    Int_To_Hex(int n)
{
    unsigned int    u;

    if (n < 0)
    {
        write(1, "-", 1);
        u = -(unsigned int)n;
    }
    else
        u = n;
    print_hex(u);
}

int main(void)
{
    Int_To_Hex(0);
    write(1, "\n", 1);
    Int_To_Hex(255);
    write(1, "\n", 1);
    Int_To_Hex(-255);
    write(1, "\n", 1);
    Int_To_Hex(2147483647);
    write(1, "\n", 1);
    Int_To_Hex(-2147483647 - 1);
    write(1, "\n", 1);
    return (0);
}