#include <stdio.h>
#include <time.h>

int main()
{
    clock_t tic = clock();

    printf("%f",5.5+6);
    clock_t toc = clock();

    printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);

    return 0;
}
