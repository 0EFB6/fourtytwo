#include <unistd.h>
#include <stdio.h>

void print_combinations(int n, int index, int *arr)
{
    if (index == n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 10)
                write(1, "0", 1);
            int num = arr[i];
            while (num > 0)
            {
                char c = num % 10 + '0';
                write(1, &c, 1);
                num /= 10;
            }
            if (i < n - 1)
                write(1, " ", 1);
        }
        write(1, "\n", 1);
        return;
    }
    for (int i = 0; i <= 99; i++)
    {
        arr[index] = i;
        print_combinations(n, index + 1, arr);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "Error: Invalid number of arguments\n", 33);
        return 1;
    }
    int n = atoi(argv[1]);
    if (n < 0 || n > 10)
    {
        write(1, "Error: Invalid argument\n", 23);
        return 1;
    }
    int arr[10];
    print_combinations(2, 0, arr);
    return 0;
}

