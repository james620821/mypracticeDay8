#include <stdio.h>

void countupto3(int);
void countdownto1(int);
int Sumofnumber(int);
int upstair(int);

int main()
{
    //�v��13-1 �ϥλ��j�ƼƦr
    //counto3(1);
    //countdownto1(3);
    //�v��13-2 �D�s���ƩM
    /*
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("%d", Sumofnumber(N));
    */
    //�v��13-3 �D�W�ӱ��k��(Fibonacci�ƦC)
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
        //�e����աA�iprint 3->1
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
