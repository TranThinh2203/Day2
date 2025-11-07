#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int a = 0;
    int b;

    printf("Nhap vao day so ban muon kiem tra: ");
    scanf("%d", &n);

    int c = n;
    while (n > 0)
    {
        b = n % 10;
        a = a * 10 + b;
        n /= 10;
    }
    
    if (c == a)
    {
        printf("%d la so doi xung.\n", c);
    }
    else
    {
        printf("%d khong phai la so doi xung.\n", c);
    }
    

    return 0;
}
