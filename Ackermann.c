#include <stdio.h>
#include <stdlib.h>
int ack(int m, int n)
{
    if (m == 0){
        return n+1;
    }
    else if((m > 0) && (n == 0)){
        return ack(m-1, 1);
    }
    else if((m > 0) && (n > 0)){
        return ack(m-1, ack(m, n-1));
    }
}
 
int main(int argc, char **argv)
{
    int m;
    int n;
    int A;

    m = atoi(argv[1]);
    n = atoi(argv[2]);
    A = ack(m, n);
    printf("%d", A);
    return 0;
}