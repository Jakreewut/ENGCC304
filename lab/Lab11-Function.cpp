/*
จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass

หมายเหตุ : ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น 153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 + 5^3 + 3^3 
(โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง) 370 = 3^3 + 7^3 + 0^3
*/ 
#include <stdio.h>
#include <math.h> // ใช้ pow() สำหรับยกกำลัง

void armstrong(int) ; 

int main() {
    int a;

    printf("Enter Number :");
    scanf("%d", &a);

    armstrong(a);

    return 0;
} // end main function

void armstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0 ;
    int temp = num;

    // นับจำนวนหลัก
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;

    // แยกตัวเลขทีละหลัก แล้วยกกำลังบวกสะสม
    while (temp > 0)
    {
        int digit = temp % 10;  // เก็บค่าหลักสุดท้าย
        sum += pow(digit, digits); // ยกกำลังตามจำนวนหลัก
        temp /= 10; //ไปหลักต่อไป
    }

    // ตรวจสอบว่าใช่ Armstrong หรือไม่
    if (sum == original)
    {
        printf("Pass \n");
    } else {
        printf("Not pass \n");
    }  
} //end function armstrong