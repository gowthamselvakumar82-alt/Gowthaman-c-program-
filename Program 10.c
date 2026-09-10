#include <stdio.h>

// NANR
void fun1()
{
    printf("NANR Function\n");
}

// ANR
void fun2(int a)
{
    printf("ANR: %d\n", a);
}

// NAWR
int fun3()
{
    return 10;
}

// AWR
int fun4(int a, int b)
{
    return a + b;
}

int main()
{
    int res;

    fun1();
    fun2(20);

    res = fun3();
    printf("NAWR: %d\n", res);

    res = fun4(10, 20);
    printf("AWR: %d\n", res);

    return 0;
}
