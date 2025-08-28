#include <stdio.h>

int main(void)
{
    int menu;
    int price = 0; // ราคาของสินค้า
    int total = 0;
    int pay = 0;

    const char *name[7] = {
        "Coca Cola", "Green Soda", "Amarigano", "Latea sweet 100%",
        "Sunflower seed", "Beans", "Beef stew"};
    //Set prices product
    int prices[7] = {10, 12, 30, 35, 13, 20, 15}; 

    // Quantity origin
    int stock[7] = {10, 10, 10, 10, 10, 10, 10};
    // Sold Quantity
    int sold[7] = {0};
    //order to costummer select
    int cart[7] = {0};
    //input not number
    int ch;

    printf("              Welcome to Tapadloy\n");

    while (1)
    {
        printf("\n--------------------MENU--------------------");
        for (int i = 0; i < 7; i++)
        {
            printf("\n [%d] %-18s : %2d Baht | Inventory %d. ", i + 1, name[i], prices[i], stock[i]);
        }
        printf("\n--------------------------------------------");
        printf("\n [0]  Go pay money.");  //จ่ายตัง
        printf("\n [8]  Delete order basket. ");  //ลบสินค้า
        printf("\n [9]  Report stock & Sales. "); //ดูภาพรวม หลังบ้าน
        printf("\n--------------------------------------------");
        printf("\nPlease select menu.  : ");

        if (scanf("%d", &menu) != 1)
        {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
            }
            printf("Invalid input. Please enter Number 0-7.\n");
            continue;
        }
        if (menu == 0) // end select product
        {
            printf("\n===============BILL==============");
            printf("\nTotal :  %d Baht.", total);
            printf("\n=================================");
            break;
        }
        else if (menu == 8)
        {
            int sel,qty; //ยกเลิกสินค้าออกจากตระกร้า
            int hasitem = 0; //แสดงสินค้าที่มีในตระกร้า
            printf("\n Current basket items :");
            for (int i = 0; i < 7; i++)
            {
                if (cart[i] > 0)
                {
                    hasitem = 1;
                    printf(" [%d] %-18s x %d (%d)", i+1, name[i], cart[i], prices[i]);
                }
            }
            if (!hasitem)
            {
                printf("\n(Empty basket)");
                continue;
            }
            printf("\n select product to delete :");
            if (scanf("%d", &sel) != 1) {
                while ((ch = getchar()) != '\n' && ch != EOF ) {}
                printf("\n Invalid input, Please enter again.");
                continue;
            }
            if (sel < 1 || sel > 7)
            {
                printf("\n Sorry not have a product number.");
                continue;
            }
            int idx = sel - 1;
            if (cart[idx] == 0)
            {
                printf("\n There is nothing in the basket. |%s|", name[idx]);
                continue;
            }

            printf("\n How many items do you want to cancel. (You have %d items)", cart[idx]);
            if (scanf("%d", &qty) != 1) {
                while ((ch = getchar()) != '\n' && ch != EOF ) {}
                printf("\n Invalid input, Please enter again.");
                continue;
            }
            if (qty < 1 || qty > cart[idx])
            {
                printf("\n Incorrect quantity.");
            }
            
            //return stock & delete of basket & reduce total
            cart[idx] -= qty;
            stock[idx] += qty;
            total -= prices[idx] * qty;

            printf("\n Cancel /%s/ | Delete %d intems | Remaining %d | New stock %d | Tatal = %d Baht"
                     , name[idx], qty, cart[idx], stock[idx], total);
            continue;
        }
        else if (menu == 9) // Report stock and sales
        {
            printf("\n======================REPORT=============================");
            printf("\n%-3s %-18s %-8s %-8s %-8s", "No", "Name", "Price", "Sold", "Remain");
            for (int i = 0; i < 7; i++)
            {
                printf("\n%-3d %-18s %-8d %-8d %-8d", i + 1, name[i], prices[i], sold[i], stock[i]);
            }
            printf("\n=========================================================");
            break;
        }
        if (menu < 1 || menu > 7) // sheck select product
        {
            printf("Please select only 0-7. \n ");
            continue;
        }
        int idx = menu - 1; // แปลงจากเมนู -> index ใน array

        if (stock[idx] <= 0) // sheck soldout
        {
            printf("Sorry product soldout. Please select other product.");
            continue;
        }
        // Success fully Order
        price = prices[idx];
        total += prices[idx];
        stock[idx]--; // write-off
        sold[idx]++;  // Add sales

        // output order and price poduct
        printf("You select %s : %d Baht.\n", name[idx], price);
        printf("Current price : %d | total %d Baht.\n", price, total);
        printf("Inventory %d piece | sold %d piece", stock[idx], sold[idx]);
    } // end while

    // Summary of items
    printf("\n===============FINAL REPORT==============================");
    printf("\n%-3s %-18s %-8s %-8s %-8s.", "No", "Name", "Price", "Sold", "Remain");
    for (int i = 0; i < 7; i++)
    {
        printf("\n%-3d %-18s %-8d %-8d %-8d.", i + 1, name[i], prices[i], sold[i], stock[i]);
    }
    printf("\n=========================================================");

    return 0;
}