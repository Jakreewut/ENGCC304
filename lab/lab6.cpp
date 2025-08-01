#include <stdio.h>

int main() {
    int N;
    int checkword;

    printf("enter Value : ");
    checkword = scanf("%d",&N);

    if (checkword == 0)
    {
        printf("Please enter Number.");
        return 1;
    }
    

    printf("Series :");

    if (N % 2 == 1) {
        for (int i = 1; i <= N; i+=2)
        {
            printf("%d ",i);
        }
        
    } else if (N % 2 == 0)
    {
        for (int i = N; i >= 0; i-=2)
        {
            printf("%d ",i);
        }
        
    }
   
   printf("\n---------------------------");
   return 0; 
}