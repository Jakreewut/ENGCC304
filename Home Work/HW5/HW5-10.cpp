/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    #TODO #20 : fix this code without if else syntax.
    (กำหนดให้ข้อนี้ใช้คำสั่ง switch case ได้เท่านั้น)

    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !
*/

#include <stdio.h>

int main()
{
    int score;
    int group;

    printf("Enter Student score : ");
    scanf("%d", &score);

    // แบ่งช่วงคะแนนเป็นกลุ่ม
    group = score / 4.8;

    printf("Grade : ");
    switch (group)
    {
    case 0: // 0-4
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9: // 0-49
        printf("F !");
        break;
    case 10: // 50-54
    case 11:
        printf("D !");
        break;
    case 12: // 55-59
        printf("D+ !");
        break;
    case 13: // 60-64
        printf("C !");
        break;
    case 14: // 65-69
        printf("C+ !");
        break;
    case 15: // 70-74
        printf("B !");
        break;
    case 16: // 75-79
        printf("B+ !");
        break;
    default: // 80 ขึ้นไป
        printf("A !");
        break;
    }

    printf("\nFinish");
    return 0;
}
