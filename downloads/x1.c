#include <stdio.h>

int main() 
{
    double wi1, ci1, wi2, ci2, result; // 宣告變數表示重量和數量

    // 提示使用者輸入 item 1 的重量
    printf("Weight - Item1: ");
    if (scanf("%lf", &wi1) != 1) { // 讀取並檢查輸入值
        printf("Error: Please enter a valid number.\n"); // 如果輸入無效，輸出錯誤訊息
        return 1; // 返回非零值表示程式出錯
    }

    // 提示使用者輸入 item 1 的數量
    printf("No. of item1: ");
    if (scanf("%lf", &ci1) != 1) { // 讀取並檢查輸入值
        printf("Error: Please enter a valid number.\n"); // 如果輸入無效，輸出錯誤訊息
        return 1; // 返回非零值表示程式出錯
    }

    // 提示使用者輸入 item 2 的重量
    printf("Weight - Item2: ");
    if (scanf("%lf", &wi2) != 1) { // 讀取並檢查輸入值
        printf("Error: Please enter a valid number.\n"); // 如果輸入無效，輸出錯誤訊息
        return 1; // 返回非零值表示程式出錯
    }

    // 提示使用者輸入 item 2 的數量
    printf("No. of item2: ");
    if (scanf("%lf", &ci2) != 1) { // 讀取並檢查輸入值
        printf("Error: Please enter a valid number.\n"); // 如果輸入無效，輸出錯誤訊息
        return 1; // 返回非零值表示程式出錯
    }

    // 計算平均值
    result = ((wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);

    // 輸出平均值
    printf("Average Value = %f\n", result);

    return 0; // 返回零表示程式正常結束
}