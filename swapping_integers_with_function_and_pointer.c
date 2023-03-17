#include <stdio.h>

void swap(int *num1ptr, int *num2ptr) {
    int temp = *num1ptr;
    *num1ptr = *num2ptr;
    *num2ptr = temp;
}

int main() {
    int num1 = 0, num2 = 0;
    printf("Enter two variables and we swap them: ");
    scanf("%d %d", &num1, &num2);
    printf("Num1 is %d\nNum2 is %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping num1 is %d\nAfter swapping num2 is %d\n", num1, num2);
    return 0;
}

