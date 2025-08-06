/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น

    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/

#include <stdio.h>

int main()
{
    char c1, c2, c3, c4;

    printf("Input 4 Charactor :");
    scanf("%c %c %c %c", &c1, &c2, &c3, &c4);

    printf("Reversed order :");

    if (1)
    {
        printf("%c", c4);
    }
    if (1)
    {
        printf("%c", c3);
    }
    if (1)
    {
        printf("%c", c2);
    }
    if (1)
    {
        printf("%c\n", c1);
    }

    return 0;
}
