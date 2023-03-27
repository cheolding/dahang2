#include <stdio.h>

int main() {
    int num1[7] = { 7, 0, 0, 0, 5, 9, 1 };
    int num2[4] = { 0, 5, 2, 10 };
    int num3[10] = { 0 };


    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 4; j++) {
            num3[i + j] += num1[i] * num2[j];
        }
    }


    for (int i = 9; i >= 0; i--) {
        if (num2[i] != 0) {
            printf("%dx^%d ", num3[i], i);
            if (i != 0) printf("+ ");
        }
    }
    return 0;
}