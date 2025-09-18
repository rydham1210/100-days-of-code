#include <stdio.h>

int main() {
    float CP, SP, profitORloss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &CP);

    printf("Enter Selling Price: ");
    scanf("%f", &SP);

    if (SP > CP) {
        profitORloss = SP - CP;
        percentage = (profitORloss / CP) * 100;
        printf("Profit = %.2f\n", profitORloss);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } else if (CP > SP) {
        profitORloss = CP - SP;
        percentage = (profitORloss / CP) * 100;
        printf("Loss = %.2f\n", profitORloss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } else {
        printf("No Profit, No Loss.\n");
    }
    return 0;
}