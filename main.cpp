#include "graphics.h"

WINDOWS_MAIN() //  "int main()", but for Windows 
{
    initwindow(640, 480);
    setcolor(3);

    for (int i = 0; i < 10; i++)
    {
        circle(200, 200, i * 10);
    }

    line(200, 50, 200, 350);
    line(50, 200, 350, 200);


    getch(); // wait until we close the window
}
