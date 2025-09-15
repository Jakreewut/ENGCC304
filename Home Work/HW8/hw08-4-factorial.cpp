 /*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ของการหาค่า Factorial โดยมีสูตรในการหาค่า n! = n x (n-1)!
    (! = factorial)
    (จงเขียนโปรแกรมในข้อนี้โดยห้ามใช้ For Loop)
*/
#include <stdio.h>
int main() {
    int n;

    printf("Enter number : ");
    scanf("%d", &n);
    
    int i = n;
    long long fact = 1;

    printf("Factorial of %d (%d!) = ", n, n );
    while (i > 0) // start 5 ,end 1 ,i--
    {
        printf("%d ", i);
        fact *= i; // คูณค่า fact = fact * i

        if (i > 1) //ใส่ x ขั้น จน i น้อยกว่า 1
        {
            printf("x ");
        }
        i--;
        
    } // end while of factorial
    
    printf("\n%d! = %lld\n", n, fact);

    return 0;
} // end fuction