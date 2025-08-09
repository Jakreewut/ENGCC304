/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + ....
     เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            5
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999
        Sum = 111105

    Test case:
        Enter number :
            7
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999 + 999999 + 9999999
        Sum = 11111103
*/
#include <stdio.h>
int main() {
    int Num;
    bool condition = true;

    printf("Enter number :");
    scanf("%d", &Num);

    int i = 1 , sum = 0, series = 9; // เริ่มต้นชุดอนุกรมที่ 9
        condition = 1;
        do {
            if (i > 1)  {
                printf(" + "); 
            }
            printf("%d", series); // แสดงค่าปัจจุบันของ series
            sum += series; // บวกค่าปัจจุบันของ series เข้ากับ sum
            series = series * 10 + 9; //สร้างชุดอนุกรม 9, 99, 999, ...
            i++;
            
        } while (i <= Num); //ทำซ้ำจนกว่าจะถึงจำนวนที่ผู้ใช้ระบุ
        printf("\nSum = %d\n", sum); // output summation of serise
        
    return 0;
}