#include <graphics.h>

// driver code
int main()
{
    // gm is Graphics mode which is
    // a computer display mode that
    // generates image using pixels.
    // DETECT is a macro defined in
    // "graphics.h" header file
    int gd = DETECT, gm;

    // variable to change the
    // line styles
    int c;

    // initial coordinate to
    // draw line
    int x = 200, y = 100;

    // initgraph initializes the
    // graphics system by loading a
    // graphics driver from disk
    initgraph(&gd, &gm, "");

    // To keep track of lines
    for ( c = 0 ; c < 5 ; c++ )
   {
       // setlinestyle function
       setlinestyle(c, 0, 1);

       // Drawing line
       line(x, y, x+200, y);
       y = y + 25;
   }

    getch();

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}
