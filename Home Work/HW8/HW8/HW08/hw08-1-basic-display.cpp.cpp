/*
    เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)
*/
#include <stdio.h>
int main()
{
    int n, i;
    float num, sum = 0, avg;

    printf("Enter number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d : ", i);
        scanf("%f", &num);
        sum += num;
    }
    avg = sum / n;
    printf("sum = %.2f \n", sum);
    printf("avg = %.2f \n", avg);

    return 0;
}