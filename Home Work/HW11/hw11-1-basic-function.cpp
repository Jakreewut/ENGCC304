/*
    รับค่าจากผู้ใช้จำนวน 3 ค่า และสร้างฟังก์ชันในการหาผลรวมของจำนวน 3 ค่านี้ และแสดงผลลัพธ์มายังหน้าจอ 
    พร้อมระบุชื่อฟังก์ชันที่เรียกใช้งาน เช่น รับค่า 3, 5, 6 จะแสดงผลลัพธ์ว่า 14 (Calculate by Additional Function)
*/
#include <stdio.h>

int calculate(int a,int b, int c) {
    return a + b + c;
} //end function of calculate

int main() {
    int x, y, z, ans;

    // A
    printf("Input A : ");
    scanf("%d", &x);
    // B
    printf("Input B : ");
    scanf("%d", &y);
    // C
    printf("Input C : ");
    scanf("%d", &z);

    //Call function of calculate
    ans =   calculate(x, y, z);

    printf("Answer : %d", ans);
    
    return 0;
} //end main function