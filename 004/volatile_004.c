#include <stdio.h>
#include <time.h>

clock_t t;

int main(void)
{
    t = clock();
    double d1 = 0.0;
    for (int n=0; n<10000; ++n)
       for (int m=0; m<10000; ++m)
           d1 += d1*n*m; // reads and writes to a non-volatile 
    printf("Modified a non-volatile variable 100m times. "
           "Time used: %.4f seconds\n",
           (double)(clock() - t)/CLOCKS_PER_SEC);
 
    t = clock();
    volatile double d2 = 0.0;
    for (int n=0; n<10000; ++n)
       for (int m=0; m<10000; ++m)
           d2 += d2*n*m; // reads and writes to a volatile 
    printf("Modified a volatile variable 100m times. "
           "Time used: %.4f seconds\n",
           (double)(clock() - t)/CLOCKS_PER_SEC);
}
