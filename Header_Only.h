#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//It helps to make printf() to look better  
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define RESET   "\033[0m"
//is good after scanf 
//example of usage  printf(RED "here_is_your_string " RESET "\n");
//also can be used as printf(RED "%d" RESET, a);

//___________________________________________________________________
//|-------FUNCTIONS-------------------------------------------------|
//===================================================================

void clear_input(void) { //clears input. deletes some "enters" ('\n') and EOF
    int ch = 0;          //MB in future it will make more....
    while ((ch = getchar()) != '\n' && ch != EOF) {
    }  
}



void remove_newline(char string[]) { //helps for cleaning "enter" (or '\n') after inputing info from file or console/keyboard
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }
}



void remove_quotes(char * line){ //remove quotes (it was made for fopen(), in a reason that fopen() don`t want to have friend with paths that has quotes "here\is\your\path\..."
    int write_index = 0;         //after "copy as path" it has its crazy quotes
    for (int current_index = 0; line[current_index] != '\0'; current_index++){
        if (line[current_index] != '"'){
            line[write_index] = line[current_index];
            write_index++;
        }
    }
    line[write_index] = '\0';
}



void program_crash(void) { //just goodlooking message after program`s crash
    printf(RED "\nInput error. " RESET "Press any key to exit...\n");
    _getch();
    exit(EXIT_FAILURE);
}
