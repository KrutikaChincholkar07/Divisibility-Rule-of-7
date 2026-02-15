#include <stdio.h>

int main() {
    int num, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 70) {
        int lastDigit = temp % 10;
        temp = temp / 10 - 2 * lastDigit;
    }

    if (temp % 7 == 0)
        printf("%d is divisible by 7", num);
    else
        printf("%d is not divisible by 7", num);

    return 0;
}
