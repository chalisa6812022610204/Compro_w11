#include <stdio.h>

#define STUDENTS 3
#define SUBJECTS 3

// ฟังก์ชันรับคะแนน
void inputScores(float arr[STUDENTS][SUBJECTS]) {
    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter scores for Student %d:\n", i + 1);
        printf("Math: ");
        scanf("%f", &arr[i][0]);
        printf("Physics: ");
        scanf("%f", &arr[i][1]);
        printf("Chemistry: ");
        scanf("%f", &arr[i][2]);
    }
}

// ฟังก์ชันแสดงตารางคะแนน
void printTable(float arr[STUDENTS][SUBJECTS]) {
    printf("\nScore Table\n");
    printf("Student\tMath\tPhysics\tChemistry\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d\t", i + 1);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("%.2f\t", arr[i][j]);
        }
        printf("\n");
    }
}

// ฟังก์ชันแสดงค่าเฉลี่ยแต่ละวิชา
void printAverage(float arr[STUDENTS][SUBJECTS]) {
    float avgMath = 0, avgPhysics = 0, avgChem = 0;

    for (int i = 0; i < STUDENTS; i++) {
        avgMath += arr[i][0];
        avgPhysics += arr[i][1];
        avgChem += arr[i][2];
    }

    avgMath /= STUDENTS;
    avgPhysics /= STUDENTS;
    avgChem /= STUDENTS;

    printf("\nAverage per subject:\n");
    printf("Math: %.2f\n", avgMath);
    printf("Physics: %.2f\n", avgPhysics);
    printf("Chemistry: %.2f\n", avgChem);
}

int main() {
    float scores[STUDENTS][SUBJECTS];

    inputScores(scores);      // รับข้อมูล
    printTable(scores);       // แสดงตารางคะแนน
    printAverage(scores);     // แสดงค่าเฉลี่ยแต่ละวิชา

    return 0;
}