// view.c

# include <stdio.h>

/* メニュー表示 */
static int viewManu() {
    int input = 0;      // 選択肢
    
    printf("\n====================\n");
    printf("1. ADD\n");
    printf("\n====================\n");
    scanf("%d", &input);

    return input;
}

/* メイン */
int main(void) {

    while (1) {
        int input = 0;
        input = viewManu();     // メニュー表示
        switch (input) {
            case 1:
                break;
            case 8:
                break;
            default:
                printf("Please enter a number within the range 1-8.\n");

        }
        if (input == 8) {
            return 0;
        }
    }
}