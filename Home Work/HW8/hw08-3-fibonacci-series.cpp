/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)
*/
#include <stdio.h>
int main() {
    int n;

    printf("Enter number of term : ");
    scanf("%d", &n);

    int a = 1, //ตัวที่ 1
        b = 1, // ตัวที่ 2
        next; // ตัวแปรถัดไป
    int sum = 0;
    
    printf("Series = ");

    for (int i = 1; i <= n; i++)
    {
        if (i == 1) //ค่าที่ 1
        {
            printf("%d", a);
            sum += a;
        }
        else if (i == 2) //ค่าที่ 2
        {
            printf(" + %d", b);
            sum += b;
        }
        else { 
            next = a + b; //ค่าที่ 3 ขึ้นไป ให้นำ 2 ค่าก่อนหน้ามาบวกกัน
            printf(" + %d", next);
            sum += next;
            a = b; //ขยับค่า 1
            b = next; //ขยับค่า 2
        }
    } // end for

    printf("\n Sum = %d \n", sum);
    
    return 0;
} // end fuction