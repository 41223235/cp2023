#include <stdio.h>

int main() {
    char id[10];         // 宣告變數表示員工ID（最多10個字元）
    int hour;            // 宣告變數表示工作時數
    double value, salary; // 宣告變數表示每小時薪水和總薪水

    // 使用一個變數存儲 scanf 的返回值以避免警告
    int result;

    // 提示用戶輸入員工ID
    printf("Input the Employees ID(Max. 10 chars): ");
    result = scanf("%9s", id); // 讀取並檢查輸入的ID，限制最多讀取9個字元

    if (result != 1) { // 檢查 scanf 的返回值
        printf("Error: Please enter a valid Employee ID.\n");
        return 1; // 返回1表示出錯
    }

    // ... 以下略，後續的程式碼保持不變 ...

    return 0; // 返回0表示程式正常結束
}