/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ While Loop เท่านั้น)
    
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
    int n, j, i, isPrime;
    // n = รับค่าจากผู้ใช้
    // i = ตัวนับจำนวนเฉพาะ
    // j = ตัวตรวจตำนวนเฉพาะ ว่า i หารลงตัวหรือไม่
    // isPrime = ตัวบอกสถานะว่า เป็นจำนวนเฉพาะหรือไม่

    printf("Input number :");
    scanf("%d",&n);
    
    i = n; 
    while (i >= 2) //เริ่มจากมาก ไป น้อย
    {
        isPrime = 1;  //สมมุติว่าเป็นจำนวนเฉพาะ
        j = 2; //เริ่มหารตั้งแต่ 2
        while ( j < i){
            if (i % j == 0)
            {
                isPrime = 0; //ถ้าหารลงตัว ไม่ใช่จำนวนเฉพาะ
                break;
            }
         j++;
        }//end while of j
        if (isPrime == 1)
        {
            printf("%d ", i);
        } //end if
        i--; //ลดค่าตรวจเลขถัดไป
    } //end while of isprime
    
    return 0;

}//end function