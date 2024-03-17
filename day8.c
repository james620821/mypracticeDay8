#include <stdio.h>

void countupto3(int);
void countdownto1(int);
int Sumofnumber(int);
int upstair(int);

int main()
{
    //紇13-1 ㄏノ患癹计计
    //counto3(1);
    //countdownto1(3);
    //紇13-2 ―硈尿俱计㎝
    /*
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("%d", Sumofnumber(N));
    */
    //紇13-3 ―加辫よ猭计(Fibonacci计)
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("%d", upstair(N));
}
int upstair(int a)
{
    if (a <= 2)
    {
        return a;
    }
    return upstair(a - 2) + upstair(a - 1);
}
int Sumofnumber(int a)
{
    if (a > 1)
    {
        return Sumofnumber(a - 1) + a;
    }
    if (a == 1)
    {
        return 1;
    }
}

void counto3(int a)
{
    if(a <= 3)
    {
        //printf("%d\n", a);
        //return counto3(a + 1);
        //玡ㄢ︽癸秸print 3->1
        return counto3(a + 1);
        printf("%d\n", a);
    }
}
void countdownto1(int a)
{
    if(a > 0)
    {
        printf("%d\n", a);
        return countdownto1(a - 1);
    }
}
