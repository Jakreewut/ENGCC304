/*## โจทย์
จงเขียนโปรแกรมทายตัวเลขซึ่งทำงานดังนี้
- ตอนเริ่มเกมผู้เล่นจะมีคะแนนเต็ม 100
- โปรแกรมจะสุ่มตัวเลขที่มีค่าตั้งแต่ 1 ถึง 100
- ให้ผู้เล่นทายว่าตัวเลขที่โปรแกรมสุ่มมามีค่าเป็นเท่าใด
- หากทายผิด โปรแกรมจะลบคะแนนของผู้เล่นไป 10 หน่วย พร้อมแจ้งคะแนนปัจจุบันให้ผู้เล่นทราบด้วย
- หากทายผิด โปรแกรมจะต้องบอกใบ้ว่าคำตอบที่ถูกมีค่า "มากกว่า" หรือ "น้อยกว่า" ตัวเลขที่ผู้ใช้ทาย
- หากทายผิด ให้โปรแกรมรอรับตัวเลขถัดไปได้เลย
- หากทายถูก ให้โปรแกรมแสดงความยินดีกับผู้ใช้ พร้อมแจ้งคะแนนปัจจุบันให้กับผู้เช่น
- เมื่อเล่นเสร็จโปรแกรมรอรับคำสั่งจากผู้ใช้ หากผู้ใช้กรอกเลข 1 จะเข้าสู่โหมดการเล่นเกมใหม่อีกครั้ง หากกด -1 ให้หยุดการทำงานของโปรแกรม
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int score = 100;
    int guess;
    int randomnumber;
    int command = 1; // ถามว่าจะเล่นเกมรึป่าว

    // เริ่มต้นการเล่นเกม
    srand((unsigned)time(NULL)); // seed การสุ่ม

    do
    {
        // เริ่มเกมใหม่
        randomnumber = rand() % 100 + 1;
        score = 100;

        printf("\nWelcome to the guessing game! You have a score 100.\n");

        do
        {
            printf("Please guess a number between 1 and 100: ");

            if (scanf("%d", &guess) != 1)
            {
                // กันกรณีผู้ใช้พิมพ์ไม่ใช่ตัวเลข
                printf("Invalid input. Please enter a number.\n");
                return 0; // ล้างบัฟเฟอร์แล้วเล่นต่อก็ได้
            } // end if of input check

            if (guess < 1 || guess > 100)
            { // ตรวจว่าตัวเลขอยู่ในช่วง 1-100 หรือไม่
                printf("Invalid input (1 - 100 only). Please try again.\n");
                continue; // ไม่หักคะแนนถ้าป้อนนอกช่วง
            } // end if of input range check

            if (guess < randomnumber)
            { // ถ้าทายผิดแล้วมีค่าน้อยกว่าเลขที่สุ่ม
                score -= 10;
                printf("Wrong! The correct number is MORE than %d. Your current score is %d.\n",
                       guess, score);
            }
            else if (guess > randomnumber)
            { // ถ้าทายผิดแล้วมีค่ามากกว่าเลขที่สุ่ม
                score -= 10;
                printf("Wrong! The correct number is LESS than %d. Your current score is %d.\n",
                       guess, score);
            }
            else
            { // ถ้าทายถูก
                printf("Congratulations! You guessed the number %d correctly! Your final score is %d.\n",
                       randomnumber, score);
            } // end if-else of guess check

        } while (guess != randomnumber && score > 0); // ทำซ้ำจนกว่าจะทายถูกหรือคะแนนหมด, end inner do-while loop

        if (score <= 0 && guess != randomnumber)
        { // ถ้าคะแนนหมดแล้วยังทายไม่ถูก
            printf("Score is 0. The correct number was %d.\n", randomnumber);
        } // end if of score check

        // รอคำสั่งจากผู้ใช้
        printf("\nEnter 1 to play again or -1 to quit: ");
        scanf("%d", &command);

    } while (command == 1); // ทำซ้ำหากต้องการเล่นอีก, end the game, end do-while loop
    return 0;
} // end function main
