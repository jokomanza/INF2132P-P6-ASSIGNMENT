#include <stdio.h>

int main() {
    printf("NIM: 231110062\n");
    printf("Name: Joko Supriyanto\n");

    int grade;

    printf("Input your grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Inputted grade (%d) is not valid.", grade);
    } else if (grade >= 80 && grade <= 100) {
        printf("A");
    } else if (grade >= 68 && grade <= 79) {
        printf("B");
    } else if (grade >= 58 && grade <= 67) {
        printf("C");
    } else if (grade >= 45 && grade <= 57) {
        printf("D");
    } else {
        printf("E");
    }

    return 0;
}









void temporary() {

    /* variable declaration */
    int grade;
    char gradeQuality;

    /* Input grade */
    printf("Input your grade: ");
    scanf("%d", &grade);

    /* Conditioning */
    if (grade < 0 || grade > 100) {
        printf("Inputted grade (%d) is not valid.", grade);
        /* Terminate program because the input is not valid. */
        return;
    } else if (grade >= 80 && grade <= 100) {
        gradeQuality = 'A';
    } else if (grade >= 68 && grade <= 79) {
        gradeQuality = 'B';
    } else if (grade >= 58 && grade <= 67) {
        gradeQuality = 'C';
    } else if (grade >= 45 && grade <= 57) {
        gradeQuality = 'D';
    } else {
        gradeQuality = 'E';
    }

    /* Output */
    printf("Your grade quality is %c", gradeQuality);
}

/* program nya itu untuk apa
 * apa itu if else if
 * apa hasil output nya
 * */