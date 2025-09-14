#include <stdio.h>
int main() {
    int choice, Projects_Completed, Bonus = 0;
    double Experience;
    const char *position[] = {
        "Invalid", 
        "Junior Programmer", 
        "Mid-Level Programmer", 
        "Senior Programmer"
    }; //เก็บค่าไวเใน array position

    //ฐานเงินเดือน
    int salary[] = {0, 20000, 30000, 50000};

    printf("Position : "); //ตำแหน่ง
    scanf("%d", &choice); 

    if (choice >= 1 && choice <= 3)
    {
        printf("You are : %s\n", position[choice]);
    }
    else 
    {
        printf("Invalid Position");
    }
    
    printf("Experience (year): "); //อายุงาน 
    scanf("%lf", &Experience);
    //คำนวณโบนัส
    for (int i = 1; i <= Experience; i++)
    {
        if (Experience < 1.0)
        {
            Bonus = 0 ;
            printf("Bonus : 0 Baht\n");
        }
        else if (Experience <= 3)
        {
            Bonus = salary[choice] * 0.10;
            printf("Bonus : 10% \n");
            break;
        }
        
        
    }
   
    printf("Projects Completed : "); //จำนวนโปรเจคที่ทำสำเร็จ
    scanf("%d", &Projects_Completed);
    




    return 0;
}
