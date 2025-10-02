/*
จงเขียนฟังก์ชันการตัดเกรดในแต่ละรายวิชาของนักเรียนจำนวน 3 คน โดยนักเรียนแต่ละคนจะมีข้อมูลดังต่อไปนี้
ชื่อ, นักศักศึกษา, คะแนนในวิชาที่ 1, คะแนนในวิชาที่ 2, คะแนนในวิชาที่ 3, คะแนนในวิชาที่ 4, คะแนนในวิชาที่ 5 แสดงได้ดังโครงสร้างข้อมูลต่อไปนี้
*/
#include <stdio.h>
#include <string.h>
struct Student
{
    char name[20];
    int id;
    float scoresub1;
    float scoresub2;
    float scoresub3;
    float scoresub4;
    float scoresub5;
    char grade1[4];
    char grade2[4];
    char grade3[4];
    char grade4[4];
    char grade5[4];
} typedef SS;


//prototype student setvalue
struct Student Setvalue(char name[20], int id, float scoresub1,
                        float scoresub2, float scoresub3, float scoresub4, float scoresub5);

//cut grade
const char* grade(float score)
{
    if (score >= 80)
        return "A";
    else if (score >= 75)
        return "B+";
    else if (score >= 70)
        return "B";
    else if (score >= 65)
        return "C+";
    else if (score >= 60)
        return "C";
    else if (score >= 55)
        return "D+";
    else if (score >= 50)
        return "D";
    else
        return "F";
}

//main function 
int main(void)
{
    SS student[3];

    for (int i = 0; i < 3; i++)
    {
        printf("-----studet %d-----\n", i + 1);
        printf("Name :");
        scanf("%s", student[i].name);
        printf("ID :");
        scanf("%d", &student[i].id);
        printf("Score sub1 sub2 sub3 sub4 sub5 :");
        scanf("%f %f %f %f %f",
              &student[i].scoresub1,
              &student[i].scoresub2,
              &student[i].scoresub3,
              &student[i].scoresub4,
              &student[i].scoresub5);

        strcpy(student[i].grade1, grade(student[i].scoresub1));
        strcpy(student[i].grade2, grade(student[i].scoresub2));
        strcpy(student[i].grade3, grade(student[i].scoresub3));
        strcpy(student[i].grade4, grade(student[i].scoresub4));
        strcpy(student[i].grade5, grade(student[i].scoresub5));

    } // end input information student
 
    //fucntion student setvalue
struct Student Setvalue(char name[20], int id, float scoresub1,
                        float scoresub2, float scoresub3, float scoresub4, float scoresub5)
{
    SS output;
    strncpy(output.name, name, sizeof(output.name));
    output.name[sizeof(output.name)-1] = '\0';
    output.id = id;  
// Hello \0
    output.scoresub1 = scoresub1;
    output.scoresub2 = scoresub2;
    output.scoresub3 = scoresub3;
    output.scoresub4 = scoresub4;
    output.scoresub5 = scoresub5;

    strcpy(output.grade1, grade(output.scoresub1));
    strcpy(output.grade2, grade(output.scoresub2));
    strcpy(output.grade3, grade(output.scoresub3));
    strcpy(output.grade4, grade(output.scoresub4));
    strcpy(output.grade5, grade(output.scoresub5));

    return output;
}

    // output
    printf("===== REPORT =====\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\nName : %-20s", student[i].name);
        printf("\nID : %d", student[i].id);
        printf("\nScore : %5.2f %5.2f %5.2f %5.2f %5.2f",
               student[i].scoresub1,
               student[i].scoresub2,
               student[i].scoresub3,
               student[i].scoresub4,
               student[i].scoresub5 );
        printf("\nGrade : %5s %5s %5s %5s %5s",
               student[i].grade1,
               student[i].grade2,
               student[i].grade3,
               student[i].grade4,
               student[i].grade5 );

        printf("\n-------------------------------");
    } // end for of printf report

    return 0;
} // end of main function