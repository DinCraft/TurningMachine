#include "stdio.h"
#include "stdlib.h"
#include "macros.h"

struct Test
{
    int a;
};


void METHOD_NO_ARGS(Test, add)
{
    printf("test");
}

int main()
{
    printf("hello, world!");
    struct Test *test;
    test = malloc(sizeof(struct Test));
    _method_Test_add(test);
    return 0;
}