/* openmp/hello_1/hello_1.c */
#include <stdio.h>
#include <omp.h>
int main(int argc, char **argv)
{
#pragma omp parallel
{
printf("hello world\n");
}
}

