#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "student_registry.txt"
#define MAX_STUDENTS 100

// Define the Student struct
struct Student {
    int student_id;
    char name[30];
    char batch[30];
    int semester;
    char department[30];
};

// --- Utility Functions ---

void press_enter_to_continue() {
    printf("\nPress Enter to continue...");
    getchar(); // Wait for Enter
}

void clear_screen() {
    system("cls");
}

// --- Core Data Functions ---

// Reads all students from the file into an array
int read_all_students(struct Student students[]) {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        // If the file doesn't exist, that's okay, we start fresh.
        return 0;
    }

    int count = 0;
    while (count < MAX_STUDENTS &&
           fscanf(file, "%d\n", &students[count].student_id) == 1) {
        fgets(students[count].name, sizeof(students[count].name), file);
        students[count].name[strcspn(students[count].name, "\n")] = 0;

        fgets(students[count].batch, sizeof(students[count].batch), file);
        students[count].batch[strcspn(students[count].batch, "\n")] = 0;

        fscanf(file, "%d\n", &students[count].semester);

        fgets(students[count].department, sizeof(students[count].department), file);
        students[count].department[strcspn(students[count].department, "\n")] = 0;

        count++;
    }

    fclose(file);
    return count;
}

// Writes an array of students back to the file, overwriting it
void write_all_students(struct Student students[], int count) {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d\n", students[i].student_id);
        fprintf(file, "%s\n", students[i].name);
        fprintf(file, "%s\n", students[i].batch);
        fprintf(file, "%d\n", students[i].semester);
        // Avoid extra newline at the end of the file
        if (i < count - 1) {
            fprintf(file, "%s\n", students[i].department);
        } else {
            fprintf(file, "%s", students[i].department);
        }
    }

    fclose(file);
}

// --- Feature Functions ---

void display_student(const struct Student* s) {
    printf("\n------------------------\n");
    printf("ID:         %d\n", s->student_id);
    printf("Name:       %s\n", s->name);
    printf("Batch:      %s\n", s->batch);
    printf("Semester:   %d\n", s->semester);
    printf("Department: %s\n", s->department);
    printf("------------------------\n");
}

void add_student() {
    struct Student new_student;

    printf("--- Add New Student ---\n");
    printf("Enter Student ID: ");
    scanf("%d", &new_student.student_id);
    while (getchar() != '\n');

    printf("Enter Name: ");
    fgets(new_student.name, sizeof(new_student.name), stdin);
    /// remove new line from new_student.name
    new_student.name[strcspn(new_student.name, "\n")] = 0;

    printf("Enter Batch: ");
    fgets(new_student.batch, sizeof(new_student.batch), stdin);
    new_student.batch[strcspn(new_student.batch, "\n")] = 0;


    printf("Enter Semester: ");
    scanf("%d", &new_student.semester);
    while (getchar() != '\n');

    printf("Enter Department: ");
    fgets(new_student.department, sizeof(new_student.department), stdin);
    new_student.department[strcspn(new_student.department, "\n")] = 0;

    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }

    // Check if file is empty to avoid leading newline
    fseek(file, 0, SEEK_END);

    // for append
    long size = ftell(file);
    if (size != 0) {
        fprintf(file, "\n");
    }

    fprintf(file, "%d\n%s\n%s\n%d\n%s", new_student.student_id, new_student.name, new_student.batch, new_student.semester, new_student.department);
    fclose(file);

    printf("\nStudent added successfully!\n");
}

void search_student() {
    int id;
    printf("--- Search Student ---\n");
    printf("Enter Student ID to search: ");
    scanf("%d", &id);
    while (getchar() != '\n');

    struct Student students[MAX_STUDENTS];
    int count = read_all_students(students);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (students[i].student_id == id) {
            printf("\nStudent found!\n");
            display_student(&students[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent with ID %d not found.\n", id);
    }
}

void update_student() {
    int id;
    printf("--- Update Student ---\n");
    printf("Enter Student ID to update: ");
    scanf("%d", &id);
    while (getchar() != '\n');

    struct Student students[MAX_STUDENTS];
    int count = read_all_students(students);

    int found_index = -1;
    for (int i = 0; i < count; i++) {
        if (students[i].student_id == id) {
            found_index = i;
            break;
        }
    }

    if (found_index != -1) {
        printf("\nStudent found! Enter new details:\n");

        printf("Enter New Name: ");
        fgets(students[found_index].name, sizeof(students[found_index].name), stdin);
        students[found_index].name[strcspn(students[found_index].name, "\n")] = 0;

        printf("Enter New Batch: ");
        fgets(students[found_index].batch, sizeof(students[found_index].batch), stdin);
        students[found_index].batch[strcspn(students[found_index].batch, "\n")] = 0;

        printf("Enter New Semester: ");
        scanf("%d", &students[found_index].semester);
        while (getchar() != '\n');

        printf("Enter New Department: ");
        fgets(students[found_index].department, sizeof(students[found_index].department), stdin);
        students[found_index].department[strcspn(students[found_index].department, "\n")] = 0;

        write_all_students(students, count);
        printf("\nStudent information updated successfully!\n");
    } else {
        printf("\nStudent with ID %d not found.\n", id);
    }
}

void delete_student() {
    int id;
    printf("--- Delete Student ---\n");
    printf("Enter Student ID to delete: ");
    scanf("%d", &id);
    while (getchar() != '\n');

    struct Student students[MAX_STUDENTS];
    int count = read_all_students(students);

    struct Student updated_students[MAX_STUDENTS];
    int updated_count = 0;
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (students[i].student_id == id) {
            found = 1;
            continue; // Skip this student
        }
        updated_students[updated_count++] = students[i];
    }

    if (found) {
        write_all_students(updated_students, updated_count);
        printf("\nStudent with ID %d deleted successfully.\n", id);
    } else {
        printf("\nStudent with ID %d not found.\n", id);
    }
}

// --- Main Function with UI ---

int main() {
    int choice;

    while (1) {
        clear_screen();
        printf("|========= Student Registry ==========|\n");
        printf("| 1. Add Student                      |\n");
        printf("| 2. Display All Students             |\n");
        printf("| 3. Search Student                   |\n");
        printf("| 4. Update Student                   |\n");
        printf("| 5. Delete Student                   |\n");
        printf("| 6. Exit                             |\n");
        printf("|=====================================|\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            choice = 0; // Set to invalid choice
        }
        // ALWAYS clear the buffer after scanf to consume the trailing newline
        while (getchar() != '\n');

        clear_screen();

        switch (choice) {
            case 1:
                add_student();
                break;
            case 2: {
                printf("--- All Students ---\n");
                struct Student students[MAX_STUDENTS];
                int count = read_all_students(students);
                if (count == 0) {
                    printf("\nNo students in the registry.\n");
                } else {
                    for (int i = 0; i < count; i++) {
                        display_student(&students[i]);
                    }
                }
                break;
            }
            case 3:
                search_student();
                break;
            case 4:
                update_student();
                break;
            case 5:
                delete_student();
                break;
            case 6:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        press_enter_to_continue();
    }

    return 0;
}


