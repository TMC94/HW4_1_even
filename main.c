#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int t = 0;

    do
    {
        printf("%d\n", t);
        t = t + 2;
    }
    while(t <= 100);

   return 0;
}
