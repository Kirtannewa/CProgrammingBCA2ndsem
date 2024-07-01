#include <stdio.h>

int main() {
    int roll, age;
    char section;
    char name[20], faculty[30], email[50];
    
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your roll: ");
    scanf("%d", &roll);
    printf("Enter your faculty: ");
    scanf("%s", faculty);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter your section: ");
    scanf(" %c", &section);  // Note the space before %c to handle the newline character
    
    printf("\n");
    
    printf("Name: %s\nRoll: %d\nFaculty: %s\nAge: %d\nEmail: %s\nSection: %c\n", name, roll, faculty, age, email, section);
    
    return 0;
}

