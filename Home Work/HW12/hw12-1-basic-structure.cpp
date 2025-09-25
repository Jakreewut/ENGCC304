/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ

    struct Person {
        char  Name[20] ;
        int   Age ;
        int   Sex ;
        float Score ;
    } ;
*/

#include <stdio.h>

//struck
struct Person
{
    char Name[20];
    int Age;
    int Sex;
    float Score;
} typedef sp;

int main()
{
    sp people[2];

    //input
    for (int i = 0; i < 2; i++)
    {
        printf("----- Person %d -----\n", i + 1);

        printf("\nEnter name : ");
        scanf("%s", people[i].Name);

        printf("\nEnter Age : ");
        scanf("%d", &people[i].Age);

        printf("\nEnter Sex (0=Male, 1=Female) : ");
        scanf("%d", &people[i].Sex);

        printf("\nEnter Score : ");
        scanf("%f", &people[i].Score);
    }

    //output
    for (int i = 0; i < 2; i++)
    {
        printf("\nName  : %s", people[i].Name);
        printf("\nAge   : %d", people[i].Age);
        printf("\nSex   : %d", people[i].Sex == 0 ? 'M' : 'F');
        printf("\nScore : %.2f", people[i].Score);

        printf("\n--------------------------------------------");
    }
    return 0;
} //end of main  function
