#include <stdio.h>

int main() {
    char id[10];         // 用於存儲員工ID的變數（最多10個字符）
    int hour;            // 用於存儲工作小時的變數
    double value, salary; // 用於存儲每小時薪資和總薪資的變數

    // 提示使用者輸入員工ID
    printf("輸入員工ID（最多10個字符）: ");
    scanf("%s", id);

    // 提示使用者輸入工作小時
    printf("\n輸入工作小時: ");
    scanf("%d", &hour);

    // 提示使用者輸入每小時薪資
    printf("每小時薪資: ");
    scanf("%lf", &value);

    // 計算總薪資
    salary = value * hour;

    // 印出員工ID和薪資
    printf("\n員工ID = %s\n薪資 = U$ %.2lf\n", id, salary);

    return 0;
}
