/*
    ผู้ใช้กรอกตัวเลขเข้ามาในระบบ และให้คุณแปลงตัวเลขดังกล่าวให้เป็นตัวเลขโรมัน
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        8
    Output:
        8 = VIII

    Test case:
        4
    Output:
        4 = IV

    Test case:
        514
    Output:
        514 = DXIV

    Test case:
        929
    Output:
        929 = CMXXIX

*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int Num;
    printf("Enter a Number : ");
    scanf("%d", &Num);

    int originalNum = Num;
    char romanNumber[100];
    int i = 0; // index เขียนผลลัพธ์

    // วนจนกว่า Num จะถูกแปลงหมด
    for (; Num > 0; ) { 
        if (Num >= 1000) { //Num = 1000..1999
            romanNumber[i++] = 'M';
            Num -= 1000;
        } else if (Num >= 900) { //Num = 900.999
            romanNumber[i++] = 'C';
            romanNumber[i++] = 'M';
            Num -= 900;
        } else if (Num >= 500) { //Num = 500..899
            romanNumber[i++] = 'D';
            Num -= 500;
        } else if (Num >= 400) { //Num = 400..499
            romanNumber[i++] = 'C';
            romanNumber[i++] = 'D';
            Num -= 400;
        } else if (Num >= 100) { //Num = 100..399
            romanNumber[i++] = 'C';
            Num -= 100;
        } else if (Num >= 90) { //Num = 90..99
            romanNumber[i++] = 'X';
            romanNumber[i++] = 'C';
            Num -= 90;
        } else if (Num >= 50) { //Num = 50..89
            romanNumber[i++] = 'L';
            Num -= 50;
        } else if (Num >= 40) { //Num = 40..49
            romanNumber[i++] = 'X';
            romanNumber[i++] = 'L';
            Num -= 40;
        } else if (Num >= 10) { //Num = 10..39
            romanNumber[i++] = 'X';
            Num -= 10;
        } else if (Num >= 9) { //Num = 9
            romanNumber[i++] = 'I';
            romanNumber[i++] = 'X';
            Num -= 9;
        } else if (Num >= 5) { //Num = 5..8
            romanNumber[i++] = 'V';
            Num -= 5;
        } else if (Num >= 4) { //Num = 4
            romanNumber[i++] = 'I';
            romanNumber[i++] = 'V';
            Num -= 4;
        } else { // Num == 1..3
            romanNumber[i++] = 'I';
            Num -= 1;
        }
    }

    romanNumber[i] = '\0';
    printf("%d = %s\n", originalNum, romanNumber);
    return 0;
}
