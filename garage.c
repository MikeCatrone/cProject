
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

    int c;
    

    int choice;
    int startOption;



    printf("\n");
    printf("Mikey's Garage\n");
    printf("==================================\n \n");

    printf("1. Start with new data\n");
    printf("2. Load previously stored data\n \n");

    printf("Your Option: ");
    scanf("%d", &startOption);

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

            printf("Okay, let's add an invoice! \n \n");

            start = (struct Garage *)malloc(sizeof(struct Garage));
            move = start;

    
            // Mechanic's Name
            printf("Enter name of mechanic: ");
            scanf("%s", move->mechanicName);
            
            while ((c = getchar()) != '\n' && c != EOF);


            // Garage will default to my garage
            strcpy(move->garageName, "Mikey's Garage");
            printf("Garage: %s \n", move->garageName);


            // Car Make
            printf("Enter car make: ");
            scanf("%s", move->make);

            while ((c = getchar()) != '\n' && c != EOF);


            // Car Year
            printf("Enter car year: ");
            scanf("%d", &move->year);

            while ((c = getchar()) != '\n' && c != EOF);


            // Car Model
            printf("Enter car model: ");
            scanf("%s", move->model);

            while ((c = getchar()) != '\n' && c != EOF);


            // Car Owner
            printf("Enter the owner's name: ");
            scanf("%s", move->owner);

            while ((c = getchar()) != '\n' && c != EOF);



            // Problem
            printf("Enter the car's problem: ");
            scanf("%s", move->problem);

            while ((c = getchar()) != '\n' && c != EOF);


            // Part needed
            printf("Enter the part needed for repair: ");
            scanf("%s", move->partNeeded);

            while ((c = getchar()) != '\n' && c != EOF);
            

            // Part cost
            printf("Enter the part needed for repair: ");
            scanf("%f", &move->partCost);

            while ((c = getchar()) != '\n' && c != EOF);


            // Labor Hours
            printf("Enter how many hours of labor: ");
            scanf("%f", &move->laborHours);

            while ((c = getchar()) != '\n' && c != EOF);


            // For final cost. To be filled in later. Needs Fgets for multi words

            printf("\n Mechanic: %s  | Garage: %s  | Car Make: %s  | Car Model: %s  | Car Year: %d  | Car Owner: %s \n \n", move->mechanicName, move->garageName, move->make, move->model, move->year, move->owner );

            printf("Problem: %s \n", move->problem);



        }

    }




    free(start);
    return 0;
}