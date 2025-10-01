#include <stdio.h>

float average(int a, int b, int c) {
    return (a + b + c) / 3;        
}

int main() {
    int math, physics, chemistry;
    float avg;                                  // รับค่าคะแนนจากผู้ใช้

    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    avg = average(math, physics, chemistry);    // แสดงผลคะเเนนและค่าเฉลี่ย

    printf("Math = %d\n", math);
    printf("Physics = %d\n", physics);
    printf("Chemistry = %d\n", chemistry);
    printf("Average = %.2f\n", avg);

    return 0;
}