#include <stdio.h>
int main(void)
{
    int menu;
    int price = 0;
    int total = 0;

    printf("Wellcome to Tapadloy \n");

    while (1)
    {
        printf("\n--------------------MENU--------------------");
        printf("\n [1] Coca Cola : 10 Baht");
        printf("\n [2] Green Water : 12 Baht");
        printf("\n [3] Amarigano : 30 Baht");
        printf("\n [4] Latea sweet 100% : 35 Baht");
        printf("\n [5] Sunflower Seed : 13 Baht");
        printf("\n [6] Beans : 20 Baht");
        printf("\n [7] Beef stew : 15 Baht");
        printf("\n--------------------------------------------");
        printf("\n [0] Go pay money");
        printf("\n--------------------------------------------");
        printf("\nPlease selection menu :");

        if (scanf("%d", &menu) != 1)
        {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
            }
            printf("Invalid input. Please enter number 0-7.\n");
            continue;
        }

        if (menu == 0)
        {
            printf("\n===============BILL===============");
            printf("\nTotal : %d", total);
            printf("\n==================================");
            break;
        }
        switch (menu)
        {
        case 1:
            price = 10;
            printf("You selcet Coca Cola : 10 Baht \n");
            break;
        case 2:
            price = 12;
            printf("You selcet Green Water : 12 Baht \n");
            break;
        case 3:
            price = 30;
            printf("You selcet Amatigano : 30 Baht \n");
            break;
        case 4:
            price = 35;
            printf("You selcet Latea sweet 100% : 35 Baht \n");
            break;
        case 5:
            price = 13;
            printf("You selcet Sunfolwer seed : 13 Baht \n");
            break;
        case 6:
            price = 20;
            printf("You selcet Beans : 20 Baht \n");
            break;
        case 7:
            price = 15;
            printf("You selcet Beef stew : 15 Baht \n");
            break;
        default:
            printf("\n Please Selcet Only 0-7 \n");
            break;
        }
        // แสดงยอดเงิน
        total += price;
        printf("Current price : %d Baht | Total : %d Baht\n", price, total);
    } // end while

    return 0;
}