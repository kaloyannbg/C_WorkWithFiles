#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/* Kaloyan Angelov Github Kaloyannbg */

int main()
{

    FILE *fp;

    char fileName[] = { 'm', 'y', 'f', 'i', 'l', 'e', '.', 't', 'x', 't', '\0' };

    //char fileType[] = { '.', 't', 'x', 't', '\0' };

    //char someText[] = { 'k', 'o', 'k', 'o', '\n', '\0' };

    char userText[255];

    //char userTextChanged[50];

    printf("\n\n - - FileName: %s is: %d symbols. - - ", fileName, strlen(fileName) );

    //strcat(fileName, fileType);

    //printf("\n\n - - FileType: %s - - ", fileType);

    printf("\n\n - - Full file name is: %s - -", fileName);

    int choice;

    do {

    printf("\n\n -- Enter 1 for write in file  --\n");
    printf(" -- Enter 2 for read from file --\n ");
    printf("\n\n -- Enter choice: ");

    scanf("%d", &choice);

        if(choice == 1) {

        printf("\n\nEnter your word: ");

        scanf("%s", &userText);

        //strcat(userText, ",");

        strcat(userText, ",");

        fp = fopen(fileName, "a" ); // Open file for writing or create it if dont exist!

        //fwrite(someText, sizeof(char), strlen(someText), fp);

        fwrite(userText, sizeof(char), strlen(userText), fp);

        fclose(fp);


        } else if(choice == 2) {

        fp = fopen(fileName, "r");

        if (fp){

            char c = getc(fp);

            int counter;

            counter = 0;

            int counterC = 0;

        printf("\n\n");
		while (c != EOF){

            if(counterC == 0) {
                printf(" -- %d. ", counter+1);
            }

            if(c != ',') {

			printf("%c", c);

			counterC++;

            } else {

                printf("  [%d chars] -- \n", counterC);

                counter++;

                counterC = 0;



            if( (counter % 5) == 0 ) {
                printf("\n");
            }

            }



            c = getc(fp);


		}

		fclose(fp);

		printf("\n -- Words counter: [%d] -- ", counter);

	}
	else printf("cannot open file");

        } else {

        }


    } while(choice != 0);

    printf("\n\n\n");

    return 0;
}
