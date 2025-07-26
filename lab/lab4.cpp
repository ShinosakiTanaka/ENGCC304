#include <stdio.h>

int main() {
    // Declare variables for employee data
    char employeeID[11];
    int workingHours;
    double salaryPerHour;
    double totalSalary;

    // Get input from the user
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", employeeID);

    printf("Input the working hrs: ");
    scanf("%d", &workingHours);

    printf("Salary amount/hr: ");
    scanf("%lf", &salaryPerHour);

    // Calculate total salary
    totalSalary = workingHours * salaryPerHour;

    // Display the output
    printf("\nExpected Output:\n");
    printf("Employees ID = %s\n", employeeID);
    printf("Salary = U$ %.2f\n", totalSalary);

    return 0;
}