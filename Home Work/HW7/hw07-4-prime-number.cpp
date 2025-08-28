/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)

    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>
int main()
{
    int Num;
    bool isPrime = true;

    printf("Enter number :");
    scanf("%d", &Num);

    int i = Num; // เริ่มต้นที่ค่าที่ผู้ใช้ป้อน
    do
    {
        bool isPrime = true; // เริ่มต้นสมมุติว่า i เป็นจำนวนเฉพาะ
        if (i < 2)
        {
            isPrime = false; // จำนวนที่น้อยกว่า 2 ไม่ใช่จำนวนเฉพาะ
        }
        else
        {
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false; // ถ้า i หารด้วย j ลงตัว แสดงว่า i ไมใช่จำนวนเฉพาะ
                    break;           // จบการตรวจสอบ
                } // end if
            } // end for
             if (isPrime && i > 1) { // ถ้า i เป็นจำนวนเฉพาะที่มากกว
                 printf("%d", i); // แสดงจำนวนเฉพาะ
                 if (i > 2) {
                     printf(" "); // ถ้า i ไม่ใช่ 2 ให้แสดงช่องว่างหลังตัวเลข
                    }
               }
            i--; // ลดค่า i เพื่อไปยังจำนวนถัดไป
        } // end else
    } /*end do */

    while (i >= 2)
        ; // ทำซ้ำจนกว่า i จะน้อยกว่าหรือเท่ากับ 2

    return 0;
}