/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)

    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>
int main()
{
    int a, b, c;

    printf("input your number :");
    scanf("%d %d %d", &a, &b, &c);

    printf("Reversed order :");

    if (a >= b && a >= c)
    {
        if (b >= c)
            printf("%d %d %d\n", a, b, c);
        else
            printf("%d %d %d\n", a, c, b);
    }
    if (b >= a && b >= c)
    {
        if (a >= c)
            printf("%d %d %d\n", b, a, c);
        else
            printf("%d %d %d\n", b, c, a);
    }
    if (c >= a && c >= b)
    {
        if (b >= a)
            printf("%d %d %d\n"), c, b, a;
        else
            printf("%d %d %d\n", c, a, b);
    }

    return 0;
}