#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    int daysPresent;
    int totalDays;
};

int main() {
    struct Employee emp;
    float percentage;

    printf("===== Employee Attendance Record =====\n");

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);

    printf("Enter Total Working Days: ");
    scanf("%d", &emp.totalDays);

    printf("Enter Days Present: ");
    scanf("%d", &emp.daysPresent);

    if (emp.totalDays <= 0 || emp.daysPresent < 0 ||
        emp.daysPresent > emp.totalDays) {
        printf("\nInvalid attendance details!\n");
        return 0;
    }

    percentage = ((float)emp.daysPresent / emp.totalDays) * 100;

    printf("\n----- Attendance Details -----\n");
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);
    printf("Total Working Days: %d\n", emp.totalDays);
    printf("Days Present: %d\n", emp.daysPresent);
    printf("Attendance Percentage: %.2f%%\n", percentage);

    return 0;
}
