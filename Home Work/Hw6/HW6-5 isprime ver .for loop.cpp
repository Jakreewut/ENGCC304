/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
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
int main() {
    int num;

    printf("Input a Number :");
    scanf("%d", &num);

    
    for (int i = num; i >= 2; i--) {   // เริ่มจาก num ลงไปถึง 2
        int isPrime = 1; // สมมติว่าเป็นจำนวนเฉพาะ

        for (int j = 2; j <= i / 2; j++) {  // ตรวจตัวประกอบ
            if (i % j == 0) {
                isPrime = 0; // ถ้าหารลงตัว ไม่ใช่จำนวนเฉพาะ
                break;
            }
        } //end for of j

        if (isPrime) {
            printf("%d ", i);
        } //end for of isPrime
    } //end for of main

    return 0;
}//end fucntion  