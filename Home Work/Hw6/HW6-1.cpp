/*
    ผู้ใช้กรอกจำนวนตัวเลข เพื่อพิมพ์คำว่า "Hello World" ตามจำนวนบรรทัดที่ผู้ใช้กรอก
    หากผู้ใช้กรอกเลขคี่ ให้แสดงเลขบรรทัดโดยใช้ []
    หากผู้ใช้กรอกเลขคู่ ให้แสดงเลขบรรทัดโดยใช้ ()
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        10
    Output:
        (1) Hello World
        (2) Hello World
        (3) Hello World
        (4) Hello World
        (5) Hello World
        (6) Hello World
        (7) Hello World
        (8) Hello World
        (9) Hello World
        (10) Hello World

    Test case:
        7
    Output:
        [1] Hello World
        [2] Hello World
        [3] Hello World
        [4] Hello World
        [5] Hello World
        [6] Hello World
        [7] Hello World

*/
#include <stdio.h>
int main()
{
    int Num;
    bool condition = 1;

    printf("Enter a Number :");
    scanf("%d", &Num);

    int i;
    for (i = 1; condition; i++) // ให้ i = 1 ถึง i <= Num
    {
        if (i > Num) //เมื่อ i มากกว่า Num ให้หยุดการทำงาน
        {
            condition = 0;
            break;
        }
        if (Num % 2 == 0) //ถ้าหารแล้วมีเศษเป็น 0 แสดงเลขคู่ ถ้าไม่ใช่แสดงเลขคี่
        {
            printf("(%d) Helloeorld\n", i);
        }
        else
        {
            printf("[%d] Hello world\n", i);
        }
    }
    printf("Finish\n");
    return 0;
}