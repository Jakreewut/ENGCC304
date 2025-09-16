/*
จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)
Enter N :
6
Enter value[0] :
19
Enter value[1] :
18
Enter value[2] :
27
Enter value[3] :
15
Enter value[4] :
4
Enter value[5] :
2
*/
#include <stdio.h>
int main()
{
    int arr[100]; // array
    int n;        // นับว่ามีกี่ตัว
    int value;    // รับค่า

    // รับค่า N จากผู้ใช้
    printf("Enter N : ");
    scanf("%d", &n);

    // รับค่าจากผู้ใช้
    for (int i = 0 ; i < n; i++) 
    {
        printf("Enter value [%d] : ", i);
        scanf("%d", &value);
        arr[i] = value; // เก็บค่า value ไว้ในช่อง arr[i]
    } //end for of input value

    // แสดง index
    printf("Index:");
    for (int i = 0; i < n; i++)
    {
        printf("%3d", i);
    } // end for of index

    printf("\n");

    // แสดง Array
    printf("Array:");
    for (int i = 0; i < n; i++)
    {                  
        int num = arr[i]; 
        int isPrime = 1; // สมมติว่าเป็นจำนวนเฉพาะ

        if (num < 2) //if num < 2 not isPrime
        {
            isPrime = 0; 
        } else  {
                for (int j = 2; j * j <= num; j++) { // ตรวจตัวประกอบ
                    if (num % j == 0) {
                        isPrime = 0; // ถ้าหารลงตัว ไม่ใช่จำนวนเฉพาะ
                        break;
                    }
                } // end for of j
            } // end else of value is not Prime

        if (isPrime) // if isPrime = 1 ; output "isPrime"
        {
            printf("%3d", num);
        } else // if isPrime = 0 ; output "#"
        {
            printf("%3s","#");
        } // end if else of output value

    } // end for of output Array
    return 0;
} // end fuction 