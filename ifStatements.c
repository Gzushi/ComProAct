#include<stdio.h>

int main() {

    int grade;
    printf("Enter grade: \n");
    scanf("%d", &grade);
    if(grade >= 0 && grade < 75) {
        printf("Fail");
    } else if(grade >= 75 && grade < 86) {
        printf("Below Average");
    } else if(grade >= 86 && grade < 91) {
        printf("Average");
    } else if(grade >= 91 && grade < 96) {
        printf("Above Average");
    } else if(grade >= 96 && grade < 101) {
        printf("Excellent");
    } else {
        printf("INVALID");
    }

    return 0;

   /*
    if(grade >= 0 && grade < 75) {
        printf("Fail");
    } else if(grade <= 86 || grade >= 75) {
        printf("Below Average");
    } else if(grade <= 91 || grade >= 86) {
        printf("Average");
    } else if(grade <= 96 || grade >= 91) {
        printf("Above Average");
    } else if(grade <= 101 || grade >= 96) {
        printf("Excellent");
    } else {
        printf("INVALID");
    }
    
    return 0;    
    */
}