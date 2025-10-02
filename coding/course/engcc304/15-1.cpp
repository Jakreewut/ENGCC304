#include <stdio.h>
#include <ctype.h>  // ใช้ isspace()

int countWordsInFile(const char *filename) {
    FILE *fp;
    char ch;
    int inWord = 0;   // state: 0 = นอกคำ, 1 = ในคำ
    int count = 0;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file %s\n", filename);
        return -1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isspace((unsigned char)ch)) {
            if (inWord) {
                inWord = 0;   // จบคำ
                count++;
            }
        } else {
            inWord = 1;       // กำลังอยู่ในคำ
        }
    }
    if (inWord) {  // กรณีไฟล์จบลงขณะที่อยู่ในคำ
        count++;
    }

    fclose(fp);
    return count;
}

int main() {
    char filename[100];
    int total;

    printf("Enter file name: ");
    scanf("%s", filename);

    total = countWordsInFile(filename);

    if (total >= 0)
        printf("Total number of words in '%s' : %d words\n", filename, total);

    return 0;
}
