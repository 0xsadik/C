
#include<stdio.h>
int main()
{
    int marks, i, count;
    int total_marks[] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 58, 69, 67, 53, 56, 71, 62, 49};

    for (marks = 0; marks <= 100; marks++) {
        count = 0;
        for (i = 0; i < 40; i++) {
            if (total_marks[i] == marks) {
                count++;
            }
        }

        printf("Marks: %d count : %d\n", marks, count);
    }
    
    return 0;
}