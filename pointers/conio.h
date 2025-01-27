#ifndef CONIO_H
#define CONIO_H

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <termios.h> // Required for terminal control
#include <unistd.h>  // Required for STDIN_FILENO

// Clear screen implementation
inline void clrscr()
{
#if defined(_WIN32) || defined(_WIN64)
    system("cls");
#else
    system("clear");
#endif
}

// Get a single character without echo
inline int getch()
{
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt); // Get current terminal settings
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);        // Disable canonical mode and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &newt); // Apply new settings
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt); // Restore old settings
    return ch;
}

#endif
