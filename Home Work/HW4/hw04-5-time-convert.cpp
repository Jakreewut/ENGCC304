/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"

    Test case:
        Input Days :
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days :
            27
    Output:
        27 days = 2332800 seconds
*/
#include <stdio.h>

int main()
{
    int days;
    int hrs;
    int min;

    printf("Input days :");
    scanf("%d", &days);

    hrs = days * 24;
    min = hrs * 60;
    int seconds = min * 60;

    printf("%d days = %d seconds \n", days, seconds);

    return 0;
}