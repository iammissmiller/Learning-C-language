// C program for variable length members in
// structures in GCC
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A structure of type student
struct student {
    int stud_id;
    int name_len;

    // This is used to store size of flexible
    // character array stud_name[]
    int struct_size;

    // Flexible Array Member (FAM)
    // variable length array must be last
    // member of structure
    char stud_name[];
};

// Memory allocation and initialization of structure
struct student* createStudent(int id, char a[]) {
    // Allocate memory for the struct and the flexible array member
    struct student *s = malloc(sizeof(*s) + sizeof(char) * (strlen(a) + 1)); // +1 for null terminator

    if (s == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    s->stud_id = id;
    s->name_len = strlen(a);
    strcpy(s->stud_name, a);  // Copy the name into the flexible array member

    // Assign size according to the size of stud_name
    s->struct_size = sizeof(*s) + sizeof(char) * (strlen(s->stud_name) + 1);

    return s;
}

// Print student details
void printStudent(struct student* s) {
    printf("Student_id : %d\n"
           "Stud_Name : %s\n"
           "Name_Length: %d\n"
           "Allocated_Struct_size: %d\n\n",
           s->stud_id, s->stud_name, s->name_len,
           s->struct_size);

    // Value of Allocated_Struct_size is in bytes here
}

// Driver Code
int main() {
    struct student* s1 = createStudent(523, "Cherry");
    struct student* s2 = createStudent(535, "Sanjayulsha");

    printStudent(s1);
    printStudent(s2);

    // Size in struct student
    printf("Size of Struct student: %lu\n", sizeof(struct student));

    // Size in struct pointer
    printf("Size of Struct pointer: %lu\n", sizeof(s1));

    // Free allocated memory
    free(s1);
    free(s2);

    return 0;
}
