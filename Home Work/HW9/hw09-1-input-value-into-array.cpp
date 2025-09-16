/*
    จงเขียนโปรแกรมภาษาซีเพื่อเก็บข้อมูลเข้าไปในอาเรย์จำนวน N ค่า และแสดงผลลัพธ์ออกมาบนหน้าจอ (โดยหากกรอก -1 ให้หยุดกรอกค่าและแสดงผลทันที)
*/
#include <stdio.h>
int main()
{
    int arr[100]; // array 
    int n = 0; // นับว่ามีกี่ตัว
    int value; // รับค่า

    //input for value
    while (1) {
        printf("input [%d] : ", n);
        scanf("%d", &value);

        if (value == -1) // input -1 = break
        {
            break;
        }
        arr[n] = value; // เก็บค่า value ไว้ในช่อง arr[n]
        n++;
    } // end while of input value 

    // output index
    printf("\nIndex : ");
    int i = 0;
     while (i < n) // n - 1
     {
        printf(" %d", i);
        i++;
     } // end while of index

     printf("\n");

     //output Array
     printf("Array : ");
     i = 0;
     while (i < n)
     {
        printf(" %d", arr[i]);
        i++;
     } //end while Array
    return 0;
} // end of fuction