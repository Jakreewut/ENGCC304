/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์

    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/

#include <stdio.h> ;

int main()
{
    // data
    int celsius, fahrenheit;

    printf("Input Celsius :");
    scanf("%d", &celsius);

    // convert fahrenheuit
    fahrenheit = (celsius * 9 / 5) + 32;

    // output
    printf("%d celsius = %d fahrenhrit\n", celsius, fahrenheit);
    return 0;
}//end amin