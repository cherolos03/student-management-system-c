
#include "func_proto.h"

int main() {
  setvbuf(stdout,NULL,_IONBF,0);
  setvbuf(stderr,NULL,_IONBF,0);
    Node* head = NULL;
    int choice;

    for (;;) {
             	printf("***********************************************\n");
    	        printf("*                                             *\n");
    	        printf("*           Student Information               *\n");
    	        printf("*             Management System               *\n");
    	        printf("*                                             *\n");
    	        printf("* 1. Add Student                              *\n");
    	        printf("* 2. Display All Students                     *\n");
    	        printf("* 3. Search Student by ID                     *\n");
    	        printf("* 4. Update Student Details                   *\n");
    	        printf("* 5. Delete Student                           *\n");
    	        printf("* 6. Calculate Average GPA                    *\n");
    	        printf("* 7. Find Students with Highest GPA           *\n");
    	        printf("* 8. Exit                                     *\n");
    	        printf("*                                             *\n");
    	        printf("***********************************************\n");
    	        printf("Enter your choice:\n");
    	        scanf("%d", &choice);
    	        printf("-----------------------------------------------\n");

        switch (choice) {
            case 1:
                add_Student(&head);
                break;
            case 2:
                display_All_Students(head);
                break;
            case 3:
                search_Student_By_ID(head);
                break;
            case 4:
                update_Student_Details(head);
                break;
            case 5:
                delete_Student(&head);
                break;
            case 6:
                printf("Average GPA: %.2f\n", calculate_Average_GPA(head));
                break;
            case 7:
                find_Students_With_Highest_GPA(head);
                break;
            case 8:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}





