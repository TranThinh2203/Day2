#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap mot day so ma ban thich: ");
    scanf("%d", &n);
    int so_dao = 0;
    int c;
    int a = n;

    while (n > 0)
    {
        c = n % 10;
        so_dao = so_dao * 10 + c;
        n /= 10;
    }
    printf("So dao nguoc cua %d la: %d\n", a, so_dao);

    return 0;
}
