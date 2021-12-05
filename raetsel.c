#include <stdio.h>

int a=0, b=1;  // globale Variablen


int main() 
{
    printf("a = %i, b = %i\n", a, b);
    {
        int b=5;
        printf("a = %i, b = %i\n", a, b);
        {
            int a=3;
            printf("a = %i, b = %i\n", a, b);
            {
                int b=3;
                printf("a = %i, b = %i\n", a, b);
                {
                    int a=4;
                    printf("a = %i, b = %i\n", a, b);
                }
            }
        }
        printf("a = %i, b = %i\n", a, b);
        {
           int a=2;
           printf("a = %i, b = %i\n", a, b);
        }
        printf("a = %i, b = %i\n", a, b);
    }
    printf("a = %i, b = %i\n", a, b);
}

