
// Mike Catrone
// PROG2007 Project

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Structure
struct Garage {

    char mechanicName[50];
    char garageName[50];
    int year;
    char make[50];
    char model[50];
    char owner[100];
    char problem[200];
    char partNeeded[50];
    float partCost;
    float laborHours;
    float finalCost; 
    struct Garage *next; 

};



int main() {

    struct Garage *start = NULL;
    struct Garage *move = NULL;

    struct Garage *new = NULL;


    // For buffer
    int c;
    
    int choice;
    int startOption;

    char keepGoing = 'y';



    printf("\n");
    printf("Mikey's Garage\n");
    printf("==================================\n \n");

    printf("1. Start with new data\n");
    printf("2. Load previously stored data\n \n");

    printf("Your Option: ");
    scanf("%d", &startOption);


    // Loading for New Data
    if (startOption == 1) {

        printf("\n--- Garage Options ---\n");
        printf("1. Add New Entry\n");
        printf("2. Browse Entries\n");
        printf("3. Modify Entry\n");
        printf("4. Delete Entry\n");
        printf("5. Save Eata\n");
        printf("6. Sort Alphabetical\n");
        printf("7. Search a Person\n");
        printf("8. Tally Earnings\n");
        printf("9. Exit\n \n");
        printf("Selection: ");
        scanf("%d", &choice);

        if(choice == 1) {


                // Checks if the list is empty, then assigns for the first in the list via start

                while (keepGoing == 'y') { 
               
                // if its the first node, the mem address goes in start
                // otherwise, we need to tie the new node into the list

                if(start == NULL) {

                    // allocate memory, assign to start
                    start = (struct Garage*)malloc(sizeof(struct Garage));


                    //confirm memory was allocated
                    if(start == NULL) {
                        puts("Out of mem");
                        exit(1);
                    }


                    // Mechanic's Name
                    printf("Enter name of mechanic: ");
                    scanf("%s", start->mechanicName);
                    
                    while ((c = getchar()) != '\n' && c != EOF);


                    // Garage will default to my garage
                    strcpy(start->garageName, "Mikey's Garage");
                    printf("Garage: %s \n", start->garageName);


                    // Car Make
                    printf("Enter car make: ");
                    scanf("%s", start->make);

                    while ((c = getchar()) != '\n' && c != EOF);


                    // Car Year
                    printf("Enter car year: ");
                    scanf("%d", &start->year);

                    while ((c = getchar()) != '\n' && c != EOF);


                    // Car Model
                    printf("Enter car model: ");
                    scanf("%s", start->model);

                    while ((c = getchar()) != '\n' && c != EOF);


                    // Car Owner
                    printf("Enter the owner's name: ");
                    scanf("%s", start->owner);

                    while ((c = getchar()) != '\n' && c != EOF);



                    // Problem
                    printf("Enter the car's problem: ");

                    fgets(start->problem, sizeof(start->problem), stdin);

                    // Remove the trailing newline character
                    start->problem[strcspn(start->problem, "\n")] = 0;



                    // Part needed
                    printf("Enter the part needed for repair: ");
                    fgets(start->partNeeded, sizeof(start->partNeeded), stdin);

                    start->partNeeded[strcspn(start->partNeeded, "\n")] = 0;
                    

                    // Part cost
                    printf("Enter the cost of the part: ");
                    scanf("%f", &start->partCost);

                    while ((c = getchar()) != '\n' && c != EOF);


                    // Labor Hours
                    printf("Enter how many hours of labor: ");
                    scanf("%f", &start->laborHours);

                    while ((c = getchar()) != '\n' && c != EOF);


                    start->next = NULL;



                } else {
                    

                    // Allocate memory, add it to the end of the list
                    struct Garage *new = (struct Garage*)malloc(sizeof(struct Garage));

                    if(start == NULL) {
                        puts("Out of mem");
                        exit(1);
                    }


                    // Loop through list to get to the last node
                    move = start;


                    while(move->next != NULL) {
                        move = move->next;

                    }


                    // now move is at the end node
                    // tie new into move

                    move->next = new;



                    // fill in data for another entry

                    // Mechanic's Name
                    printf("Enter name of mechanic: ");
                    scanf("%s", new->mechanicName);
                    
                    while ((c = getchar()) != '\n' && c != EOF);


                    // Garage will default to my garage
                    strcpy(new->garageName, "Mikey's Garage");
                    printf("Garage: %s \n", new->garageName);


                    // Car Make
                    printf("Enter car make: ");
                    scanf("%s", new->make);

                    while ((c = getchar()) != '\n' && c != EOF);


                    // Car Year
                    printf("Enter car year: ");
                    scanf("%d", &new->year);

                    while ((c = getchar()) != '\n' && c != EOF);


                    // Car Model
                    printf("Enter car model: ");
                    scanf("%s", new->model);

                    while ((c = getchar()) != '\n' && c != EOF);


                    // Car Owner
                    printf("Enter the owner's name: ");
                    scanf("%s", new->owner);

                    while ((c = getchar()) != '\n' && c != EOF);



                    // Problem
                    printf("Enter the car's problem: ");

                    fgets(new->problem, sizeof(new->problem), stdin);

                    // Remove the trailing newline character
                    new->problem[strcspn(new->problem, "\n")] = 0;


                    // Part needed
                    printf("Enter the part needed for repair: ");
                    fgets(new->partNeeded, sizeof(new->partNeeded), stdin);

                    new->partNeeded[strcspn(new->partNeeded, "\n")] = 0;
                    

                    // Part cost
                    printf("Enter the cost of the part: ");
                    scanf("%f", &new->partCost);

                    while ((c = getchar()) != '\n' && c != EOF);


                    // Labor Hours
                    printf("Enter how many hours of labor: ");
                    scanf("%f", &new->laborHours);

                    while ((c = getchar()) != '\n' && c != EOF);


                    //marks end of the current list
                    new->next = NULL; 


                }



                puts("Create new node? (y/n)");
                scanf("%c", &keepGoing);

                while ( ( c = getchar() ) != '\n' && c != EOF );


            }


            // Print output //

            printf("\nLoop Complete \n\n");

            move = start;

            while(move->next != NULL) {
                printf("Mechanic: %s  | Garage:  %s  | Year:  %d  | Make:  %s | Model: %s | Owner: %s \n \n", move->mechanicName, move->garageName, move->year, move->make, move->model, move->owner);
                move = move->next;

            }

            printf("Mechanic: %s  | Garage:  %s  | Year:  %d  | Make:  %s | Model: %s | Owner: %s \n \n", move->mechanicName, move->garageName, move->year, move->make, move->model, move->owner);
            move = move->next;

            printf("End of List\n\n");

          


        }


    } else if(startOption == 9) {


        return 0;

    }



    free(start);
    return 0;


}