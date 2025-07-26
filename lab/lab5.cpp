#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char input[100];
    int score;
    int isNumber = 1;

    printf("enter score : ");
    scanf("%s", input);

    for (size_t i = 0; i < strlen(input); i++) {
        if (!isdigit(input[i])) {
            isNumber = 0;
            break;
        }
    }

    if (isNumber) {
        
        sscanf(input, "%d", &score);

        if (score > 80) {
            printf("A !\n");
        } else if (score >= 75) {
            printf("B+ !\n");
        } else if (score >= 70) {
            printf("B !\n");
        } else if (score >= 65) {
            printf("C+ !\n");
        } else if (score >= 60) {
            printf("C !\n");
        } else if (score >= 55) {
            printf("D+ !\n");
        } else if (score >= 50) {
            printf("D !\n");
        } else {
            printf("F !\n");
        }
    } else {
        printf("please enter number only.\n");
    }

    return 0;
}