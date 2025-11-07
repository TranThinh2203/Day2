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
        if (i % 2 == 0)
        {
            sum += i;
        }
        
    }
    
    printf("Tong cac so chan tu %d den %d la: %d\n", a, b, sum);

    return 0;
}
