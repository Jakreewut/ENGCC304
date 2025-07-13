
    //เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
   #include <stdio.h>

   int main() {
    //data 
    char firstname[50] ;
    char lastname[20] ;
    char a[] = "RMUTL" ;
    char b[] = "Chiangmai" ;
    char c[] = "Thailand" ; 
    
    //input
    printf("Input Firstname = ");
    scanf("%s",&firstname);
    printf("Input Lastname = ");
    scanf("%s",&lastname);
  
    printf("------------------------------------\n");

    //output
    printf("First Name = %s\n",firstname);
    printf("Last Name = %s\n",lastname);
    printf("TC,%s %s %s",a, b, c);
    return 0 ;
   }