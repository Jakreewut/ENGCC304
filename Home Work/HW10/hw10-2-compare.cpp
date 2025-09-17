/*
    จงเขียนโปรแกรมเพื่อรับค่าอักขระจากผู้ใช้ทีละ 1 ตัวอักษรไปเรื่อยๆ เพื่อรับค่าใส่ไว้ภายในอาเรย์ แต่หากเจอตัวอักษร 'Y' หรือ 'y' ให้หยุดการทำงาน และแสดงค่าภายใน String ทันที
*/
#include <stdio.h>
int main()
{
    char text[100];
    int i = 0;
    char ch;

    while (i < 99)
    {
        printf("Input :");
        scanf("%c", &ch);

        if (ch == 'Y' || ch == 'y')
        {
            break;
        }

        text[i++] = ch;
    }
    text[i] = '\0';

    printf("String = ");
    for (int j = 0; j < i; j++)
    {
        printf("%c", text[j]);
        if (j < i - 1)
        {
            printf(" ");
        }
        
    }

    printf("\n");
    return 0;
}