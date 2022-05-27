// using windows-gcc-x64

// import standard libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// import time libraries
#include <time.h>
#include <windows.h>

// a function that prints each character in a string one at a time with a delay of n milliseconds
void typewriter(char *string, int n) {
    // loop through each character in the string
    for (int i = 0; i < strlen(string); i++) {
        // print the character
        printf("%c", string[i]);
        // delay the program for n milliseconds
        Sleep(n);
    }
}

// help function
int help() {
    printf("Typewriter.exe by ZeekHalkyr\n\n");
    printf("Usage: typewriter.exe [string] [delay]\n");
    printf("Example: typewriter.exe \"Hello World!\" 1000\n\n");
    printf("Typewriter.exe is a simple program that prints each character in a string one at a time with a delay of n milliseconds.\n");
}

// main function
int main(int argc, char** argv) {
    // if there is no string or delay, print the help function
    if (argc < 3) {
        help();
        return 0;
    }
    // if there is a string and a delay, print the string with the delay
    else {
        // get the string and delay from the command line
        char *string = argv[1];
        int delay = atoi(argv[2]);
        // print the string with the delay
        typewriter(string, delay);
    }
}