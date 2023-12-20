#include <stdio.h>

int main() 
{
    double wi1, ci1, wi2, ci2, result; // 宣告權重和數量的變數

    // 提示使用者輸入項目1的重量和數量
    printf("重量 - 項目1: ");
    scanf("%lf", &wi1);

    // 提示使用者輸入項目1的數量
    printf("項目1的數量: ");
    scanf("%lf", &ci1);

    // 提示使用者輸入項目2的重量和數量
    printf("重量 - 項目2: ");
    scanf("%lf", &wi2);

    // 提示使用者輸入項目2的數量
    printf("項目2的數量: ");
    scanf("%lf", &ci2);

    // 計算平均值
    result = ((wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);

    // 印出平均值
    printf("平均值 = %f\n", result);

    return 0;
}
