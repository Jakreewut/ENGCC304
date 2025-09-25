//    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ

#include <stdio.h>
#include <string.h>
//struck
struct Person
{
    char Name[20];
    float Score;
} typedef sp;

int main()
{
    sp people[100];
    int count;

    //intput information
    while (count < 100) {
        printf("Enter name (or -1 to stop): ");
        scanf("%19s", people[count].Name);
        if (strcmp(people[count].Name, "-1") == 0) break;

        printf("Enter Score : ");
        scanf("%f", &people[count].Score);

        count++;
    }

    // แสดงชื่อในบรรทัดเดียว
    for (int i = 0; i < count; i++) {
        printf("%s ", people[i].Name);
    }
    printf("\n");

    // แสดงคะแนนในบรรทัดเดียว
    for (int i = 0; i < count; i++) {
        printf("%.2f ", people[i].Score);
    }
    printf("\n");
    
    return 0;
} // end of main function

 