#include <stdio.h>

int main() {
    int num;
    char *ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven",
                    "eight", "nine", "ten", "eleven", "twelve", "thirteen",
                    "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
                    "nineteen"};
    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty",
                    "sixty", "seventy", "eighty", "ninety"};

    printf("User Input :");
    scanf("%d", &num);

    printf("Result : ");
    if (num < 20) {
        printf("%s\n", ones[num]);
    } else if (num < 100) {
        printf("%s", tens[num / 10]); // หลักสิบ
        if (num % 10 != 0) {
            printf("-%s", ones[num % 10]); // หลักหน่วย
        }
        printf("\n");
    } else {
        printf("Out of range\n");
    }

    return 0;
}
