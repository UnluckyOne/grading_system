//
//  main.c
//  grading_system
//
//  Created by Yanzhe on 2022/7/7.
//

#include <stdio.h>

int main() {
    int grade;
    printf("Hello, please enter your grade.\n");
    printf("For example: 92\n");
    scanf("%d", &grade);
    if (grade>100)
    {
        printf("Invalid number, please input your score again.\n");
    }
    else if (grade<=(90) && grade>= (100)) {
        printf("Congratulations, you got an A on your exam!\n");
    }
    else if (grade<=(79) && grade>= (70))
    {
        printf("Better luck next time, you got an C on your exam!\n");
    }
    else if (grade<=(69) && grade>= (60))
    {
        printf("Study harder, you got an D on your exam!\n");
    }
    else if (grade<=(89) && grade>= (80))
    {
        printf("Nice job, you got an B on your exam!\n");
    }
    else
    {
        printf("Pay more attention! You got a F on your exam.\n");
    }
    return 0;
}
