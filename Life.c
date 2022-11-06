#include<stdio.h>

int main () {

    //Variables
    int inpMonths, inpYears;
    int nowMonths = 11, nowYears = 2022;

    //Input
    printf("Enter Month: \n");
    scanf("%d", &inpMonths);
    printf("Enter Year: \n");
    scanf("%d", &inpYears);

    //Operation
    if (nowMonths < inpMonths) {
        nowMonths += 12;
        nowYears --;
    }
    if (nowYears >= inpYears && inpMonths <= 12) {
        printf("%d months, %d years \n", nowMonths - inpMonths, nowYears - inpYears);
    } else {
        printf("Invalid \n");
    }
    
}