#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number : ");
    
    // ตรวจสอบว่าผู้ใช้ป้อนตัวเลขหรือไม่
    if (scanf("%d", &n) != 1) {
        printf("กรุณาใส่ตัวเลข\n");
        return 0; // จบการทำงานถ้าไม่ใช่ตัวเลข
    }

    if (n % 2 == 0) {
        printf("Even numbers from %d down to 0 are:\n", n);
        for (int i = n; i >= 0; i--) {
            if (i % 2 == 0) {
                printf("%d ", i);
            }
        }
    } else {
        printf("Odd numbers from 1 to %d are:\n", n);
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                printf("%d ", i);
            }
        }
    }

    printf("\n");
    return 0;
}
