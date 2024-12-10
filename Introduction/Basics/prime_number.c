#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N;
    bool esPrimo;
    printf("Up to which number do you want to draw the primes: ");
    scanf("%d", &N);

    for(int num = 2; num <= N; num++)
    {
        esPrimo = true;
        
        for(int i = 2; i * i <= num; i++)
        {
            if(num % i == 0)
            {
                esPrimo = false;
                break;
            }

        }

        if(esPrimo){
            printf("%d\n", num);
        }
    }

}
