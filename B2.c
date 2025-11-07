#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    int sum = 0;

    printf("Nhap vao so dau tien: ");
    scanf("%d", &a);
    printf("Nhap vao so thu hai: ");
    scanf("%d", &b);

    for (int i = 0; i <= b; i++)
    {
        sum += i;
    }
    
    printf("Tong cac so tu %d den %d la: %d", a, b, sum);

    return 0;
}
