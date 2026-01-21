
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the student structure
typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

// Linked list node structure
typedef struct Node {
    Student data;
    struct Node* next;
} Node;

// Function prototypes
void add_Student(Node** head);
void display_All_Students(Node* head);
void search_Student_By_ID(Node* head);
void update_Student_Details(Node* head);
void delete_Student(Node** head);
float calculate_Average_GPA(Node* head);
void find_Students_With_Highest_GPA(Node* head);
#ifndef FUNC_PROTO_H_
#define FUNC_PROTO_H_



#endif /* FUNC_PROTO_H_ */
