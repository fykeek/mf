#include "TXLib.h"

void drawFon()
{
    txSetColor (RGB(153, 217, 234));
    txSetFillColor (RGB(153, 217, 234));
    txRectangle(0, 0, 800, 490);
    txSetColor (RGB(80, 220, 30));
    txSetFillColor (RGB(80, 220, 30));
    txRectangle   (0, 490, 800, 600);
}

void drawOblako(HDC oblako, int x)
{
    txTransparentBlt (txDC(), x, 56, 231, 124, oblako, 0 , 0, TX_BLACK) ;
}

void drawHouse()
{
    txSetColor (RGB(240, 230, 180));
    txSetFillColor (RGB(240, 230, 180));
    txRectangle   (800, 490, 500, 200);
    txSetColor (RGB(255, 0, 0));
    txSetFillColor (RGB(255, 0, 0));
    POINT tr[3] = {{500, 199}, {650, 40}, {800, 199}};
    txPolygon (tr,3);
    txSetColor (RGB(60, 70, 210));
    txSetFillColor (RGB(60, 70, 210));
    txRectangle   (540, 240, 625, 325);
    txRectangle   (675, 240, 760, 325);
    txRectangle   (675, 375, 760, 460);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);;
    txRectangle   (540, 375, 625, 490);
}
void DrawDoor(int xDoor, int yDoor)
{

    txSetColor (RGB(185, 122, 87));
    txSetFillColor (RGB(185, 122, 87));
    POINT door[4] = {{xDoor,yDoor}, {625, 375}, {625, 490},{xDoor, yDoor + 115}};
    txPolygon(door, 4);
}
 void DrowSun()
 {
    txSetColor (RGB(255, 255, 5));
        txSetFillColor (RGB(255, 255, 5));
        txCircle (0,0, 180);
  }
 void drawJotoro(HDC jotoro, int x)
{
    txTransparentBlt (txDC(), x, 380, 47, 115, jotoro, 0 , 0, TX_WHITE) ;
}

int main()
    {
    int xDoor =540;
    int yDoor =375;

    txCreateWindow (800, 600);

    HDC jotoro  = txLoadImage ("jotaro.bmp");
    int x_jotoro = 550;

    HDC oblako  = txLoadImage ("obl.bmp");
    int x_oblako = 290;

    while(xDoor < 626)
    {
        txBegin();

        drawFon();

        DrowSun();

        drawOblako(oblako, x_oblako);

        drawHouse();

        drawJotoro(jotoro, x_jotoro);

        DrawDoor(xDoor, yDoor);

        xDoor += 1;
        yDoor += 1;

        txEnd();
        txSleep(10);
    }

    while(xDoor > 540)
    {
        txBegin();

        drawFon();

        DrowSun();

        drawOblako(oblako, x_oblako);

        drawHouse();

        DrawDoor(xDoor, yDoor);

        drawJotoro(jotoro, x_jotoro);

        xDoor -= 1;
        yDoor -= 1;

        txEnd();
        txSleep(10);
    }

    while(x_jotoro > -50)
    {
        txBegin();

        drawFon();

        DrowSun();

        drawOblako(oblako, x_oblako);

        drawHouse();

        DrawDoor(xDoor, yDoor);

        drawJotoro(jotoro, x_jotoro);



        x_oblako -= 2;

        x_jotoro -= 5;
        txEnd();
        txSleep(10);
    }

    txDeleteDC(jotoro);
    txDeleteDC(oblako);

    txTextCursor (false);
    return 0;
    }

