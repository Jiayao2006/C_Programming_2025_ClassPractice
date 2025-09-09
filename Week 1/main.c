#include <stdio.h> // brings in the declaration of printf

int main(){ // main function, returns int to the OS
    printf("Hello World!\n"); // \n starts on a new line, 
    printf("Hello Ryan Peh\n");
    printf("Ryan is Gay");
    return 0;
}

// every line ends with ; just like css
// remember to save the source file before compiling
// gcc "Week 1/main.c" -o main  --> complies source into main.exe
// run the executional file to run the programme

// changes to this source file will require a recompiling to update the .exe
// .c is human readable, .exe is machine code
// common issue: forgot to include the first line, or not recompiling before running