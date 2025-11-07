#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap mot so nguyen duong ma ban thich: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("n phai la so nguyen duong.\n");
    }
    else
    {
        printf("Cac uoc so le cua %d la: ", n);
        for (int i = 1; i <= n; i++)
        {
            if (n % 1 == 0 && i % 2 != 0)
            {
                printf("%d\t", i);
            }
            
        }
      
    }
    
    return 0;
}
