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
void dravRook()
{
    txSetColor (TX_GREY);
    txSetFillColor (TX_GREY);;
    POINT km[5] = {{600,550}, {595,520}, {570,530}, {550,515}, {540,550}};
    txPolygon (km, 5);

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
void drawShop()
{

    txSetColor (RGB(240, 230, 180));
    txSetFillColor (RGB(240, 230, 180));
    txRectangle   (0, 290, 300, 490);
    txSetColor (RGB(255, 0, 0));
    txSetFillColor (RGB(255, 0, 0));
    POINT tr[3] = {{0, 289}, {150, 190}, {300, 289}};
    txPolygon (tr,3);
    txSetColor (RGB(195, 195, 195));
    txSetFillColor (RGB(195, 195, 195));
    txRectangle   (0, 290, 300, 365);
    txSetColor (TX_YELLOW);
    txSetFillColor (TX_YELLOW);
    txRectangle (110, 375, 190, 490);
    txSetColor (RGB(60, 70, 210));
    txSetFillColor (RGB(60, 70, 210));
    txRectangle   (15, 375, 95, 455);
    txRectangle   (205, 375, 285, 455);

}
void DrawDoor2(int xDoor, int yDoor)
{

    txSetColor (RGB(185, 122, 87));
    txSetFillColor (RGB(185, 122, 87));
    POINT door[4] = {{xDoor,yDoor}, {190, 375}, {190, 490},{xDoor, yDoor + 115}};
    txPolygon(door, 4);
    }
 void DrowSun(int xs, int rs)
 {
    txSetColor (RGB(255, 255, 5));
        txSetFillColor (RGB(255, 255, 5));
        txCircle (xs,0, rs);
  }
 void drawJotoro(HDC jotoro, int x, int rx, int ry)
{
    Win32::TransparentBlt (txDC(), x, 380, rx, ry, jotoro, 0 , 0, 130, 314, TX_WHITE) ;
}

int main()
    {
    int xDoor =540;
    int yDoor =375;

    int xDoor2 =110;
    int yDoor2 =375;

    txCreateWindow (800, 600);

    HDC jotoro  = txLoadImage ("jotoroR2.bmp");
    int x_jotoro = 550;
    int xRazm = 47;
    int yRazm = 113;

    HDC oblako  = txLoadImage ("obl.bmp");
    int x_oblako = 290;

    while(xDoor < 626)
    {
        txBegin();

        drawFon();

        DrowSun(0,180);

        drawOblako(oblako, x_oblako);

        drawHouse();

        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);

        DrawDoor(xDoor, yDoor);

        xDoor += 4;
        yDoor += 4;

        x_oblako -= 1;
        txEnd();
        txSleep(10);
    }
    while(yRazm < 150)
    {
        txBegin();

        drawFon();

        DrowSun(0,180);

        drawOblako(oblako, x_oblako);

        drawHouse();

        DrawDoor(xDoor, yDoor);

        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);



        x_oblako -= 2;

        xRazm += 1;
        yRazm += 2;
        x_jotoro -= 1;
        txEnd();
        txSleep(10);
    }
    while(xDoor > 540)
    {
        txBegin();

        drawFon();

        DrowSun(0,180);

        drawOblako(oblako, x_oblako);

        drawHouse();

        DrawDoor(xDoor, yDoor);

        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);

        xDoor -= 4;
        yDoor -= 4;

        x_oblako -= 1;
        txEnd();
        txSleep(10);
    }

    while(x_jotoro > -70)
    {
        txBegin();

        drawFon();

        DrowSun(0,180);

        drawOblako(oblako, x_oblako);

        drawHouse();

        DrawDoor(xDoor, yDoor);

        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);



        x_oblako -= 1;

        x_jotoro -= 5;
        txEnd();
        txSleep(10);
    }

    x_jotoro = 865;
    x_oblako = 515;

    while(x_jotoro > 585)
    {
        txBegin();

        drawFon();

        DrowSun(400,135);

        drawOblako(oblako, x_oblako);

        drawShop();

        DrawDoor2(xDoor2, yDoor2);

        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);

        dravRook();



        x_oblako -= 1;

        x_jotoro -= 5;
        txEnd();
        txSleep(10);

     }
    txDeleteDC(jotoro);
    txDeleteDC(oblako);

    txTextCursor (false);
    return 0;
    }
