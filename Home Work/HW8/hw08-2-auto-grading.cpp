/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50
    , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70
    , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    (กำหนดให้ข้อนี้ใช้คำสั่ง for แทนคำสั่งเงื่อนไขได้เท่านั้น)

*/
#include <stdio.h>
int main()
{
    int score;

    const char *grade[] = {"F", "D", "D+", "C", "C+", "B", "B+", "A"}; // array grade

    int lower[] = {0, 50, 55, 60, 65, 70, 75, 80}; //lower score 

    int upper[] = {49, 54, 59, 64, 69, 79, 84, 100}; // opper score

    printf("Enter ypur score :");
    scanf("%d", &score);

    for (int i = 0; i < 8; i++)
    {
        if (score >= lower[i] && score <= upper[i])
        {
            printf("Grade : %s \n", grade[i]);
        }
    } // end for of output grade
    
    return 0;
} // end fuction