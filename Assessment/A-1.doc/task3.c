#include<stdio.h>
struct Student {
    char name[50];
    int rollno;
    float marks;
    char grade;
};

// Function to assign grade based on marks
void assignGrade(struct Student *s) {
    if (s->marks >= 90)
        s->grade = 'A';
    else if (s->marks >= 75)
        s->grade = 'B';
    else if (s->marks >= 60)
        s->grade = 'C';
    else if (s->marks >= 50)
        s->grade = 'D';
    else
        s->grade = 'F';
}

// Function to print topper details
void printTopper(struct Student arr[], int n) {
    if (n <= 0) {
        printf("No students available.\n");
        return;
    }

    int topperIndex = 0;
    
	for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("\nTopper: %s with %.2f marks\n", arr[topperIndex].name, arr[topperIndex].marks);
}

int main() {
    struct Student students[3];
    int n = 3;

    // Input student data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Name: ");
        // Read string with spaces
        scanf(" %[^\n]", students[i].name);

        printf("Roll No: ");
        while (scanf("%d", &students[i].rollno) != 1) {
            printf("Invalid input. Enter an integer for Roll No: ");
            while (getchar() != '\n'); // clear buffer
        }

        printf("Marks: ");
        while (scanf("%f", &students[i].marks) != 1 || students[i].marks < 0 || students[i].marks > 100) {
            printf("Invalid marks. Enter a value between 0 and 100: ");
            while (getchar() != '\n'); // clear buffer
        }

        // Assign grade
        assignGrade(&students[i]);
    }

    // Display table header
    printf("\n%-20s %-10s %-10s %-10s\n", "Name", "Roll No", "Marks", "Grade");
    printf("----------------------------------------------------------\n");

    // Display student records
    for (int i = 0; i < n; i++) {
        printf("%-20s %-10d %-10.2f %-10c\n",
               students[i].name,
               students[i].rollno,
               students[i].marks,
               students[i].grade);
    }

    // Print topper
    printTopper(students, n);

    return 0;
}

