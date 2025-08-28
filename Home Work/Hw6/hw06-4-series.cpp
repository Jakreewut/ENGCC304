/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
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
    int num, sum = 0, serise = 9;

    printf("Enter a Number : ");
    scanf("%d", &num);

    int i = 1;
    printf("serise = ");

    for (int j = 1; j <= num; j++) { // stsrt 1 , end num
        if (j > 1) {
            printf(" + "); 
        }
        printf("%d", serise); // แสดงค่าปัจจุบันของserise
        // บวกค่าปัจจุบันของ serise เข้ากับ sun
        sum += serise;
        serise = serise * 10 + 9;
    }
    printf("\nSum = %d\n", sum); //output summation

    return 0;
}