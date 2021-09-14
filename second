#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Kaloyan Angelov Github Kaloyannbg */

void addSpace(void) {

    printf("\n\n");

}

void yellow(void) {

    printf("\033[1;33m");

}

void resetColor(void) {

    printf("\033[0m");

}

int main()
{

    system("color 07");

    FILE *fp;

    char fileName[50];

    int choice;

    do {

        printf("Enter 1 for create new txt file.");
        printf("\nEnter 0 for quit from program");

        printf("\n\nEnter your choice: ");

        scanf("%d", &choice);

        addSpace();

        if(choice == 1) {
            printf("Enter file name: ");

            scanf("%s", &fileName);

            strcat(fileName, ".txt"); // Filename concatenation with .txt

            yellow();

            printf("\nFilename is: %s", fileName); //print file.txt

            fp = fopen(fileName, "r"); //open file for reading. Check if exist or not exist

            if(fp) {

                printf("\n\nFile is already created!");

                fclose(fp); //close file

            }   else {

                fclose(fp); //close file

                fp = fopen(fileName, "w"); //Open file to writing in, if dont existing create it.

                if(fp) {

                    printf("\n\nYou created file: -- %s -- !", fileName);

                }

                fclose(fp);

            }

        resetColor();


        } else if(choice == 0) {

            printf("GoodBye");

        } else {

            printf("Invalid choice");

        }

        addSpace();

    } while(choice != 0);

    printf("\n\n\n");

    return 0;
}
