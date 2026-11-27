#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;
    char name[50];

    
    printf("Anish Gurung: ");
    scanf("%49s", name); // %49s prevents buffer overflow

    printf("19: ");
    scanf("%d", &age);

    printf("1.778: ");
    scanf("%f", &height);

    printf(" bachelor 1st year : ");
    scanf(" %c", &grade);

    printf("\n--- Summary ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
