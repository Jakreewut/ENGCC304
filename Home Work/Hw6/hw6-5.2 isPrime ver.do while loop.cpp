/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ doWhile Loop เท่านั้น)
    
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
    int n, i, j, isPrime;

    printf("Enter number : ");
    scanf("%d", &n);

    i = n;
     do {
        isPrime = 1;   // สมมติว่าเป็นจำนวนเฉพาะ
        j = 2;

        // ตรวจสอบว่า i หารด้วย j ลงตัวไหม
        do {
            if (i % j == 0 && i != j) {
                isPrime = 0;  // ถ้าหารลงตัวและไม่ใช่ตัวเอง -> ไม่ใช่จำนวนเฉพาะ
                break;
            }
            j++;
        } while (j < i); //เช็คว่าเป็นจำนวนเฉพาะไหม && end do while 

        if (isPrime && i >= 2) {
            printf("%d ", i);
        }

        i--;  // ลดค่า i ลง
    } while (i >= 2); //เรียงจำนวนจาก มาก ไป น้อย && end do while 

    return 0;
}//end function