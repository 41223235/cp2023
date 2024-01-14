#include <stdio.h>

int fact(int);

int main() {
    int sum;
    // 計算數列總和：1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5
    sum = fact(1) / 1 + fact(2) / 2 + fact(3) / 3 + fact(4) / 4 + fact(5) / 5;

    printf("\n\n 函式：計算數列 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 的總和 :\n");
    printf("----------------------------------------------------------\n");

    printf("數列總和為 : %d\n\n", sum);
    return 0;
}

// 計算階乘的函式
int fact(int n) {
    int num = 0, f = 1;

    // 計算階乘
    while (num <= n - 1) {
        f = f + f * num; // 這裡的階乘計算方式可能不正確
        num++;
    }
    return f;
}