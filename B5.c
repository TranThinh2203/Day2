#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int c = 1;

    printf("Nhap vao so N de tinh giai thua: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Khong the tinh gia thua cho so nay.\n");
    }
    else if (n == 0)
    {
        printf("0! = 1\n");
    }
    else
    {
        for (int i = 1; i <= n ; i++)
        {
            c *= i;
        }
        printf("%d! = %d", n, c);
    }

    return 0;
}
