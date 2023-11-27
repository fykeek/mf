#include "TXLib.h"

void drawTytle()
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle (0,0, 800,600);
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txSelectFont("Comic Sans MS" , 100) ;
    txDrawText(0, 0, 800, 500, "БИЗАРНЫЙ ПОХОД");
    txDrawText(0, 100, 800, 600, "В МАГАЗИН");
}
void drawFon()
{
    txSetColor (RGB(153, 217, 234));
    txSetFillColor (RGB(153, 217, 234));
    txRectangle(0, 0, 800, 490);
    txSetColor (RGB(80, 220, 30));
    txSetFillColor (RGB(80, 220, 30));
    txRectangle   (0, 490, 800, 600);
}
void drawNight(int n)
{
    if (n == 0)
    {
        txSetColor (RGB(17, 10, 100));
        txSetFillColor (RGB(17, 10, 100));
        txRectangle(0, 0, 800, 490);
        txSetColor (RGB(0, 123, 0));
        txSetFillColor (RGB(0, 123, 0));
        txRectangle   (0, 490, 800, 600);
    }
    else
    {
        txSetColor (RGB(18, 18, 18));
        txSetFillColor (RGB(18, 18, 18));
        txRectangle(0, 0, 800, 490);
        txSetColor (RGB(88, 88, 88));
        txSetFillColor (RGB(88, 88, 88));
        txRectangle   (0, 490, 800, 600);
    }
}
void drawZvezd(HDC zvezd)
{
    txTransparentBlt (txDC(), 0, 0, 800, 490, zvezd, 0 , 0, TX_WHITE) ;
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

void drawHouse(int n)
{
    if (n == 0)
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

    else
    {
        txSetColor (RGB(228, 228, 228));
        txSetFillColor (RGB(228, 228, 228));
        txRectangle   (800, 490, 500, 200);
        txSetColor (RGB(54, 54, 54));
        txSetFillColor (RGB(54, 54, 54));
        POINT tr[3] = {{500, 199}, {650, 40}, {800, 199}};
        txPolygon (tr,3);
        txSetColor (RGB(78, 78, 78));
        txSetFillColor (RGB(78, 78, 78));
        txRectangle   (540, 240, 625, 325);
        txRectangle   (675, 240, 760, 325);
        txRectangle   (675, 375, 760, 460);
        txSetColor (TX_YELLOW);
        txSetFillColor (TX_YELLOW);;
        txRectangle   (540, 375, 625, 490);
    }
}
void DrawDoor(int xDoor, int yDoor, int n)
{
    if (n == 0)
    {
        txSetColor (RGB(185, 122, 87));
        txSetFillColor (RGB(185, 122, 87));
        POINT door[4] = {{xDoor,yDoor}, {625, 375}, {625, 490},{xDoor, yDoor + 115}};
        txPolygon(door, 4);
    }
    else
    {
        txSetColor (RGB(133, 133, 133));
        txSetFillColor (RGB(133, 133, 133));
        POINT door[4] = {{xDoor,yDoor}, {625, 375}, {625, 490},{xDoor, yDoor + 115}};
        txPolygon(door, 4);
    }
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
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txSelectFont(/*"Oldtimer"*/ "Comic Sans MS", 70) ;
    txDrawText(0, 290, 300, 365, "МАГАЗИН");
    txSetColor (RGB(60, 70, 210));
    txSetFillColor (RGB(60, 70, 210));
    txRectangle   (15, 375, 95, 455);
    txRectangle   (205, 375, 285, 455);

}
void DrawDoor2(int xDoor, int yDoor)
{

    txSetColor (RGB(185, 122, 87));
    txSetFillColor (RGB(185, 122, 87));
    POINT door[4] = {{xDoor,yDoor}, {110, 375}, {110, 490},{xDoor, yDoor + 115}};
    txPolygon(door, 4);
    }
 void DrowSun(int xs, int rs)
 {
        txSetColor (RGB(255, 255, 5));
        txSetFillColor (RGB(255, 255, 5));
        txCircle (xs,0, rs);
  }
 void drawStrela(int xs, int ys, int xn, int yn)
 {
    txSetColor (RGB(185, 122, 87), 5);
    txLine (xs, ys, xs + 40, ys);
    txSetColor (RGB(255, 240, 0));
    txSetFillColor (RGB(255, 240, 0));
    POINT nak[3] = {{xn,yn}, {xn-15, yn - 5}, {xn-15, yn + 5}};
    txPolygon(nak, 3);
 }
 void drawJotoro(HDC jotoro, int x, int rx, int ry)
{
    Win32::TransparentBlt (txDC(), x, 380, rx, ry, jotoro, 0 , 0, 130, 314, TX_WHITE) ;
}
void drawJotoroR(HDC jotoroR, int x, int rx, int ry)
{
    Win32::TransparentBlt (txDC(), x, 380, rx, ry, jotoroR, 0 , 0, 130, 314, TX_WHITE) ;
}
void drawStar(HDC star, int x, int y, int rx, int ry)
{
    Win32::TransparentBlt (txDC(), x, y, rx, ry, star, 0 , 0, 214, 531, TX_WHITE) ;
}
void drawStarR(HDC starR, int x, int y, int rx, int ry)
{
    Win32::TransparentBlt (txDC(), x, y, rx, ry, starR, 0 , 0, 214, 531, TX_WHITE) ;
}
void drawDio(HDC dio)
{
    Win32::TransparentBlt (txDC(), 225, 387, 67, 157, dio, 0 , 0, 550, 1280, TX_WHITE) ;
}
void drawTw(HDC tw)
{
    Win32::TransparentBlt (txDC(), 292, 287, 86, 113, tw, 0 , 0, 246, 320, TX_WHITE) ;
}
void drawDialog(const char* text, COLORREF color)
{
   txSetColor (color);
    txSetFillColor (color);
    POINT d[3] ={{570, 380}, {550, 375}, {560, 370}};
    txPolygon(d, 3);
    txEllipse  (470, 330, 570, 380);
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txSelectFont("Comic Sans MS" , 20) ;
    txDrawText(470, 330, 570, 380, text);
}
void drawOjid()
{
    txSetColor (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    txRectangle (0,0, 800,600);
    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    txSelectFont("Comic Sans MS" , 100) ;
    txDrawText(0, 0, 800, 500, "Спустя");
    txDrawText(0, 100, 800, 600, "2 часа");
}
void drawTitr(int titrY)
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle (0,0, 800,600);
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txSelectFont("Comic Sans MS" , 20) ;
    txDrawText(0, titrY - 160, 800, titrY - 160 + 600, "Автор - Марьин Лев");
    txDrawText(0, titrY - 80, 800, titrY - 80 + 600, "Режисёр - Марьин Лев");
    txDrawText(0, titrY, 800, titrY + 600, "Сценарист - Марьин Лев");
    txDrawText(0, titrY + 80, 800, titrY + 80 + 600, "Программист - Марьин Лев");
    txDrawText(0, titrY + 160, 800, titrY + 160 + 600, "Художник -постановщик - Марьин Лев");
}
void drawDD(const char* text)
{
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    POINT d[3] ={{135, 380}, {155, 375}, {145, 370}};
    txPolygon(d, 3);
    txEllipse  (135, 330, 235, 380);
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txSelectFont("Comic Sans MS" , 20) ;
    txDrawText(135, 330, 235, 380, text);
}
void drawDDI(const char* text)
{
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    POINT d[3] ={{235, 380}, {215, 375}, {225, 370}};
    txPolygon(d, 3);
    txEllipse  (135, 330, 235, 380);
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txSelectFont("Comic Sans MS" , 20) ;
    txDrawText(135, 330, 235, 380, text);
    }
void drawPula(int x)
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txCircle(x, 390, 2);
}

int main()
    {
    int vrema = 0;

    int xDoor =540;
    int yDoor =375;

    int xDoor2 =190;
    int yDoor2 =375;

    int xStr = 250;
    int yStr = 430;
    int xNak = 300;
    int yNak = 430;

    int xPula = 90;

    int titrY = 0;

    txCreateWindow (800, 600);

    HDC zvezd = txLoadImage ("zvezd.bmp");
    HDC zvezdB = txLoadImage ("zvezdB.bmp");

    HDC jotoro = txLoadImage ("jotoroR2.bmp");
    HDC jotoroR = txLoadImage ("jotoro2.bmp");
    HDC jotoroRB = txLoadImage ("jotoro2B.bmp");
    int x_jotoro = 550;
    int xRazm = 47;
    int yRazm = 113;

    HDC star = txLoadImage ("Star.bmp");
    HDC starR = txLoadImage ("StarR.bmp");
    HDC starRB = txLoadImage ("StarRB.bmp");
    int xStar = 620;
    float yStar = 390;
    float xRazmS = 20;
    float yRazmS = 50;

    HDC dio = txLoadImage ("dio.bmp");
    HDC dioB = txLoadImage ("dioB.bmp");
    HDC dioL = txLoadImage ("dioL.bmp");

    HDC tw = txLoadImage ("tw.bmp");
    HDC twB = txLoadImage ("twB.bmp");

    HDC oblako = txLoadImage ("obl.bmp");
    int x_oblako = 290;

    while(vrema < 350)
    {
        txBegin();

        drawTytle();


        vrema += 10;

        txEnd();
        txSleep(10);
    }

    vrema = 0;

    while(xDoor < 626)
    {
        txBegin();

        drawFon();

        DrowSun(0,180);

        drawOblako(oblako, x_oblako);

        drawHouse(0);

        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);

        DrawDoor(xDoor, yDoor, 0);

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

        drawHouse(0);

        DrawDoor(xDoor, yDoor, 0);

        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);



        x_oblako -= 1;

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

        drawHouse(0);

        DrawDoor(xDoor, yDoor,0);

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

        drawHouse(0);

        DrawDoor(xDoor, yDoor, 0);

        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);



        x_oblako -= 1;

        x_jotoro -= 5;
        txEnd();
        txSleep(10);
    }

    x_jotoro = 865;
    x_oblako = 600;

    while(x_jotoro > 560)
    {
        txBegin();

        drawFon();

        DrowSun(400,135);

        drawOblako(oblako, x_oblako);

        drawStrela(xStr, yStr, xNak, yNak);

        drawShop();

        DrawDoor2(xDoor2, yDoor2);

        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);

        dravRook();



        x_oblako -= 1;

        x_jotoro -= 5;

        xStr += 5;
        xNak += 5;
        txEnd();
        txSleep(10);

     }

     while(yRazmS < 150)
    {
        txBegin();
        drawFon();
        DrowSun(400,135);
        drawOblako(oblako, x_oblako);
        drawShop();
        DrawDoor2(xDoor2, yDoor2);
        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);
        dravRook();
        drawStar(star, xStar, yStar, xRazmS, yRazmS);

        x_oblako -= 1;

        xRazmS += 2;
        yRazmS += 5;
        yStar -= 3;
        txEnd();
        txSleep(10);
    }
    while(vrema < 150)
    {
        txBegin();
        drawFon();
        DrowSun(400,135);
        drawOblako(oblako, x_oblako);
        drawShop();
        DrawDoor2(xDoor2, yDoor2);
        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);
        drawStar(star, xStar, yStar, xRazmS, yRazmS);
        dravRook();
        drawDialog("ЧТО ЭТО!!!", TX_WHITE);

        x_oblako -= 1;
        vrema += 10 ;

        txEnd();
        txSleep(10);
    }

    while(vrema < 300)
    {
        txBegin();
        drawFon();
        DrowSun(400,135);
        drawOblako(oblako, x_oblako);
        drawShop();
        DrawDoor2(xDoor2, yDoor2);
        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);
        drawStar(star, xStar, yStar, xRazmS, yRazmS);
        dravRook();
        drawDialog("Это же\n"
                    "стенд", TX_WHITE);

        x_oblako -= 1;
        vrema += 10 ;

        txEnd();
        txSleep(10);
    }

    while(vrema < 450)
    {
        txBegin();
        drawFon();
        DrowSun(400,135);
        drawOblako(oblako, x_oblako);
        drawShop();
        DrawDoor2(xDoor2, yDoor2);
        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);
        drawStar(star, xStar, yStar, xRazmS, yRazmS);
        dravRook();
        drawDialog("Ладно", TX_WHITE);

        x_oblako -= 1;
        vrema += 10 ;

        txEnd();
        txSleep(10);
    }

    while(x_jotoro > 110)
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

        txSleep(10);
        txEnd();
    }
    while(xDoor2 > 110)
    {
        txBegin();

        drawFon();

        DrowSun(400,135);

        drawOblako(oblako, x_oblako);

        drawShop();

        DrawDoor2(xDoor2, yDoor2);

        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);

        dravRook();

        xDoor2 -= 4;
        yDoor2 += 4;

        x_oblako -= 1;
        txEnd();
        txSleep(10);
    }
    while(yRazm > 113)
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

        xRazm -= 1;
        yRazm -= 2;
        x_jotoro += 1;
        txEnd();
        txSleep(10);
    }
    while(xDoor2 < 194)
    {
        txBegin();

        drawFon();

        DrowSun(400,135);

        drawOblako(oblako, x_oblako);

        drawShop();

        drawJotoro(jotoro, x_jotoro, xRazm, yRazm);

        DrawDoor2(xDoor2, yDoor2);

        dravRook();

        xDoor2 += 4;
        yDoor2 -= 4;

        x_oblako -= 1;
        txEnd();
        txSleep(10);
    }

    vrema = 0 ;

    while(vrema < 300)
    {
        txBegin();

        drawOjid();

        vrema += 10;
        txEnd();
        txSleep(10);
    }

     while(xDoor2 > 110)
    {
        txBegin();

        drawNight(0);

        drawZvezd(zvezd);

        drawShop();

        drawJotoro(jotoroR, x_jotoro, xRazm, yRazm);

        DrawDoor2(xDoor2, yDoor2);

        dravRook();

        xDoor2 -= 4;
        yDoor2 += 4;

        txEnd();
        txSleep(10);
    }

    while(yRazm < 150)
    {
        txBegin();

        drawNight(0);

        drawZvezd(zvezd);

        drawShop();

        DrawDoor2(xDoor2, yDoor2);

        drawJotoro(jotoroR, x_jotoro, xRazm, yRazm);

        dravRook();


        xRazm += 1;
        yRazm += 2;
        //x_jotoro += 1;
        txEnd();
        txSleep(10);
    }

    while(xDoor2 < 190)
    {
        txBegin();

        drawNight(0);

        drawZvezd(zvezd);

        drawShop();

        DrawDoor2(xDoor2, yDoor2);

        drawJotoro(jotoroR, x_jotoro, xRazm, yRazm);

        dravRook();

        xDoor2 += 4;
        yDoor2 -= 4;

        txEnd();
        txSleep(10);
    }

    while(x_jotoro < 870)
    {
        txBegin();

        drawNight(0);

        drawZvezd(zvezd);

        drawShop();

        DrawDoor2(xDoor2, yDoor2);

        drawJotoro(jotoroR, x_jotoro, xRazm, yRazm);

        dravRook();

        x_jotoro += 5;

        txEnd();
        txSleep(10);
    }

    x_jotoro = -65;

    while(x_jotoro < 75 )
    {
        txBegin();

        drawNight(0);

        drawZvezd(zvezd);

        drawHouse(0);

        DrawDoor(xDoor, yDoor, 0);

        drawJotoro(jotoroR, x_jotoro, xRazm, yRazm);

        drawDio(dio);

        x_jotoro += 5;

        txEnd();
        txSleep(10);
    }

    vrema = 0;

    while(vrema < 150)
    {
        txBegin();

        drawNight(0);

        drawZvezd(zvezd);

        drawHouse(0);

        DrawDoor(xDoor, yDoor, 0);

        drawJotoro(jotoroR, x_jotoro, xRazm, yRazm);

        drawDio(dio);

        drawDD("ДИО!!!");

        vrema += 10;

        txEnd();
        txSleep(10);
    }

    xStar = 10;

    while(xPula < 150)
    {
        txBegin();

        drawNight(0);

        drawZvezd(zvezd);

        drawHouse(0);

        DrawDoor(xDoor, yDoor, 0);

        drawJotoro(jotoroR, x_jotoro, xRazm, yRazm);

        drawStar(star, xStar, yStar, xRazmS, yRazmS);

        drawPula(xPula);

        drawDio(dio);

        xPula += 5;

        txEnd();
        txSleep(2);

    }

    vrema = 0;

    while(vrema < 300)
    {
        txBegin();

        drawNight(1);

        drawZvezd(zvezdB);

        drawHouse(1);

        DrawDoor(xDoor, yDoor, 1);

        drawJotoro(jotoroRB, x_jotoro, xRazm, yRazm);

        drawStar(starRB, xStar, yStar, xRazmS, yRazmS);

        drawPula(xPula);

        drawDio(dioB);

        drawDDI("ZA WARUDO!");

        drawTw(twB);

        vrema +=10 ;

        txEnd();
        txSleep(10);
    }

    txBegin();

    drawTitr(0);

    txEnd();


    txDeleteDC(jotoro);
    txDeleteDC(oblako);
    txDeleteDC(jotoroR);
    txDeleteDC(jotoroRB);
    txDeleteDC(star);
    txDeleteDC(starR);
    txDeleteDC(starRB);
    txDeleteDC(zvezd);
    txDeleteDC(zvezdB);
    txDeleteDC(dio);
    txDeleteDC(dioL);
    txDeleteDC(tw);
    txDeleteDC(dioB);
    txDeleteDC(twB);

    txTextCursor (false);
    return 0;
    }
