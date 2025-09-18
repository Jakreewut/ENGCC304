 /*
 ผู้ใช้กรอกชื่อและอายุเข้าไปในระบบจำนวน 2 ครั้ง โดยให้คุณทำการสลับอายุของคน 2 คนนี้ผ่านฟังก์ชันที่คุณเขียนขึ้นมา 
 เช่น นาย ก อายุ 31 ปี และ นาย ข อายุ 20 ปี หลังจากเรียกฟังก์ชันการสลับค่าแล้ว นาย ก จะอายุ 20 ปี และนาย ข จะอายุ 31 ปี
*/
#include <stdio.h>
void swapp(int *x, int *y) {
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
} // end function of swap age

int main() {
    char a[20], b[20]; // name
    int c, d; // age

    // A
    printf("\nEnter name(A) :");
    scanf("%s", &a);
    printf("\nEnter age(A) :");
    scanf("%d", &c);

    // B
    printf("\nEnter name(B) :");
    scanf("%s", &b);
    printf("\nEnter age(B) :");
    scanf("%d", &d);


    //call function of swapp
    swapp(&c,&d);

    printf("\nAfter swap:\n");
    printf("Name : %s, Age : %d\n", a, c);
    printf("Name : %s, Age : %d\n", b, d);
    

    return 0;
} // end main function