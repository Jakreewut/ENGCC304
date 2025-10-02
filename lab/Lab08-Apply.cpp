#include <stdio.h>
int main()
{
    int choice, Projects_Completed;
    int Bonus = 0,Experience, Extra_bonus = 0, Net_Salary = 0;
    const char *position[] = {
        "Invalid",
        "Junior Programmer",
        "Mid-Level Programmer",
        "Senior Programmer"}; // เก็บค่าไวเใน array position

    // ฐานเงินเดือน
    int salary[] = {0, 20000, 35000, 50000};

    printf("=================== Welcome ======================\n"); // กรอกข้อมูล

    printf("Position : "); // ตำแหน่ง
    scanf("%d", &choice);

    //show position
    if (choice >= 1 && choice <= 3)
    {
        printf("You are : %s\n", position[choice]);
    }
    else
    {
        printf("Invalid Position \n");
    } // end show position

    printf("Experience (year): "); // อายุงาน
    scanf("%d", &Experience);

    // คำนวณโบนัส
        if (Experience < 1.0)
        {
            Bonus = 0;
            printf("Bonus : 0 Baht\n");
        }
        else if (Experience <= 3)
        {
            Bonus = (int)(salary[choice]) * 0.10;
        }
        else if (Experience <= 5)
        {
            Bonus = (int)(salary[choice]) * 0.15;
        }
        else if (Experience > 5)
        {
            Bonus = (int)(salary[choice]) * 0.20;
        }
    

    printf("Projects Completed : "); // จำนวนโปรเจคที่ทำสำเร็จ
    scanf("%d", &Projects_Completed);

    // Extra Bonus
    if (Projects_Completed > 5)
    {
        Extra_bonus = (int)(salary[choice] * 0.05);
    }

    printf("==================================================\n"); // จบการกรอกข้อมูล
    printf("\n");

    printf("================== Net salary ====================\n"); // สรุปผล

    // แสดงตำแหน่ง
    printf("Position : %s\n", position[choice]);
    // แสดงเงินเดือน
    printf("Base Salary : %d Baht\n", salary[choice]);
    // แสดงโบนัส
    printf("Bonus : %d \n", Bonus);
    // แสดงโบนัสพิเศษ
    printf("Extra Bonus : %d \n", Extra_bonus);
    // แสดงเงินเดือนสุทธิ
    Net_Salary = salary[choice] + Bonus + Extra_bonus;
    printf("Net Salary : %d Baht \n", Net_Salary);

    printf("=================== Finish ======================\n"); // สรุปผล

    return 0;
}
