#include "func_proto.h"
void add_Student(Node** head) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    printf("Enter student ID: ");
    scanf("%d", &newNode->data.id);
    printf("Enter student name: ");
    scanf(" %[^\n]s", newNode->data.name);
    printf("Enter student GPA: ");
    scanf("%f", &newNode->data.gpa);
    newNode->next = *head;
    *head = newNode;
    printf("Student added successfully.\n");
}

void display_All_Students(Node* head) {
    Node* current = head;
    if (head == NULL) {
        printf("No students found.\n");
        return;
    }
    printf("Student Information:\n");
    while (current != NULL) {
        printf("ID: %d, Name: %s, GPA: %.2f\n", current->data.id, current->data.name, current->data.gpa);
        current = current->next;
    }
}

void search_Student_By_ID(Node* head) {
    int searchID;
    Node* current = head;
    printf("Enter the student ID to search: ");
    scanf("%d", &searchID);
    while (current != NULL) {
        if (current->data.id == searchID) {
            printf("Student found:\nID: %d, Name: %s, GPA: %.2f\n", current->data.id, current->data.name, current->data.gpa);
            return;
        }
        current = current->next;
    }
    printf("Student not found.\n");
}

void update_Student_Details(Node* head) {
    int searchID;
    Node* current = head;
    printf("Enter the student ID to update: ");
    scanf("%d", &searchID);
    while (current != NULL) {
        if (current->data.id == searchID) {
            printf("Enter new student name: ");
            scanf(" %[^\n]s", current->data.name);
            printf("Enter new student GPA: ");
            scanf("%f", &current->data.gpa);
            printf("Student details updated successfully.\n");
            return;
        }
        current = current->next;
    }
    printf("Student not found.\n");
}
void delete_Student(Node** head) {
 int deleteID;
 Node* current = *head;
 Node* prev = NULL;
 printf("Enter the student ID to delete: ");
 scanf("%d", &deleteID);
 if (current != NULL && current->data.id == deleteID) {
*head = current->next; // Changed head
  free(current); // free old head
  printf("Student deleted successfully.\n");
  return;
 }
 while (current != NULL && current->data.id != deleteID) {
  prev = current;
  current = current->next;
 }

 if (current == NULL) {
  printf("Student not found.\n");
  return;
 }
 prev->next = current->next;
 free(current);
 printf("Student deleted successfully.\n");
}


float calculate_Average_GPA(Node* head) {
    Node* current = head;
    float totalGPA = 0.0;
    int count = 0;
    while (current != NULL) {
        totalGPA += current->data.gpa;
        count++;
        current = current->next;
    }
    if (count == 0) {
        return 0.0;
    }
    return totalGPA / count;
}

void find_Students_With_Highest_GPA(Node* head) {
    Node* current = head;
    float highestGPA = 0.0;
    int count = 0;
    while (current != NULL) {
        if (current->data.gpa > highestGPA) {
            highestGPA = current->data.gpa;
            count = 1;
        } else if (current->data.gpa == highestGPA) {
            count++;
        }
        current = current->next;
    }
    current = head;
    printf("Students with the highest GPA (%.2f):\n", highestGPA);
    while (current != NULL) {
        if (current->data.gpa == highestGPA) {
            printf("ID: %d, Name: %s, GPA: %.2f\n", current->data.id, current->data.name, current->data.gpa);
        }
        current = current->next;
    }
    if (count == 0) {
        printf("No students found.\n");
    }
}


