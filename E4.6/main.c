#include <stdio.h>

int main(void) {
    int number, times, guesstimes = 0;

    scanf("%d %d", &number, &times);

    int guess;

    while (1) {
        scanf("%d", &guess);
        guesstimes++;
        //   猜测次数大于规定次数   或  出现负数
        if ((guesstimes > times) || (guess < 0 && guesstimes <= times)) {
            printf("Game Over\n");

            return 0;//终止循环
        }
        if (guess > number) {
            printf("Too big\n");
        }
        if (guess < number) {
            printf("Too small\n");
        }
        if (guess == number) {
            if (guesstimes == 1) {
                printf("Bingo!\n");
            }
            else if (guesstimes <= 3) {
                printf("Lucky You!\n");
            }
            else {
                printf("Good Guess!\n");
            }

            return 0;
        }
    }

}