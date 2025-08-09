/*
    รับตัวเลขจากผู้ใช้มา 2 จำนวน เพื่อแสดงแม่สูตรคูณบนหน้าจอคอมพิวเตอร์ โดยแสดงแม่สูตรคูณจากตัวเลขแรกที่รับจากผู้ใช้ ไปสิ้นสุดยังตัวเลขสุดท้ายที่รับจากผู้ใช้
    (โจทย์ข้อนี้ให้ใช้ While Loop เท่านั้น)

    Test case:
        Start :
            3
        End :
            5
    Output:
        3 x 1 = 3
        3 x 2 = 6
        3 x 3 = 9
        3 x 4 = 12
        3 x 5 = 15
        3 x 6 = 18
        3 x 7 = 21
        3 x 8 = 24
        3 x 9 = 27

        4 x 1 = 4
        4 x 2 = 8
        4 x 3 = 12
        4 x 4 = 16
        4 x 5 = 20
        4 x 6 = 24
        4 x 7 = 28
        4 x 8 = 32
        4 x 9 = 36

        5 x 1 = 5
        5 x 2 = 10
        5 x 3 = 15
        5 x 4 = 20
        5 x 5 = 25
        5 x 6 = 30
        5 x 7 = 35
        5 x 8 = 40
        5 x 9 = 45
*/

#include <stdio.h>
int main()
{
    int start, end;

    printf("enter Number start :");
    scanf("%d", &start);

    printf("Enter Number end :");
    scanf("%d", &end);

    int i = 1;
    while (start <= end) // start ต้องน้อยกว่าหรือเท่ากับ end
    {
        if (i > 12)
        {
            i = 1;       // เริ่มนับใหม่เมื่อ i เกิน 12
            start++;     // เพิ่มค่า start เพื่อไปยังตัวถัดไป
            start >= end; // ถ้า start เกิน end ให้หยุดการทำงาน
            break;

            printf("\n");
        } // end if
        printf("%d x %d = %d\n", start, i, start * i); // แสดงผมแม่สูตรคูณ
        i++;
    } // end while

    return 0;
}