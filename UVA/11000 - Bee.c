#include<stdio.h>

long long fibo[47] = {1,2,3,5,8,13,21,34,55,89,144,233,377,\
                      610,987,1597,2584,4181,6765,10946,17711,28657,\
                      46368,75025,121393,196418,317811,514229,832040,\
                      1346269,2178309,3524578,5702887,9227465,14930352,\
                      24157817,39088169,63245986,102334155,165580141,\
                      267914296,433494437LLU,701408733LLU,1134903170LLU,\
                      1836311903LLU,2971215073LLU,4807526976LLU
                     };

int main()
{
    long long unsigned i;
    while(scanf("%llu", &i) == 1)
    {
        if(i == -1) break;
        printf("%llu %llu\n", fibo[i] - 1, fibo[i + 1] - 1);
    }
    return 0;
}
