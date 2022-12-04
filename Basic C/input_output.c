// Basic input and output in C

#include <stdio.h>

int main()
{
    char grade;
    printf("Enter student grade: ");
    grade = getchar();
    putchar(grade);

    return 0;
}