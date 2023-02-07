#include <unistd.h>

void print_combinations(int i, int j)
{
    char c[5];
    c[0] = i / 10 + '0';
    c[1] = i % 10 + '0';
    c[2] = ' ';
    c[3] = j / 10 + '0';
    c[4] = j % 10 + '0';
    write(1, &c, 5);
    if (j == 99)
    {
        if (i == 98)
        {
            write(1, ".", 1);
            return;
        }
        else
        {
            write(1, ", ", 2);
            print_combinations(i + 1, i + 2);
        }
    }
    else
    {
        write(1, ", ", 2);
        print_combinations(i, j + 1);
    }
}

int main(void)
{
    print_combinations(0, 1);
    return 0;
}

