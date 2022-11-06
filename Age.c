#include<stdio.h>

    void main () {
        
        //Enter Age
        int age;
        printf("Enter your age: ");
        scanf("%d", &age);

        //Operation
        if (age < 0) {
            printf("INVALID\n");
        } else if (age < 18) {
            printf("Minor\n");
        } else if (age < 60) {
            printf("Legal\n");
        } else if (age < 100) {
            printf("Senior\n");
        } else {
            printf("Centenial\n");
        }
    }