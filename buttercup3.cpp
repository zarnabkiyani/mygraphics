#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
initwindow(1500, 1000, "Buttercup Animation");
  
   
    setbkcolor(LIGHTBLUE);
    cleardevice();

    int page = 0;

    // Main animation loop (Buttercup flying upward)
    for (int y = 0; y <= 400; y += 5) { // upward motion
        setactivepage(page);
        setvisualpage(1 - page);
        cleardevice();

        // =============================
        // BACKGROUND SECTION
        // =============================

        

        // --- Building (smaller + back) ---
        setcolor(BLACK);
        rectangle(900, 350, 1200, 700);
        setfillstyle(SOLID_FILL, LIGHTGRAY);
        floodfill(910, 360, BLACK);

        // --- Windows ---
        for (int wx = 930; wx <= 1130; wx += 100) {
            for (int wy = 380; wy <= 630; wy += 120) {
                rectangle(wx, wy, wx + 50, wy + 50);
                setfillstyle(SOLID_FILL, YELLOW);
                floodfill(wx + 5, wy + 5, BLACK);
            }
        }

        // --- Roof ---
        setcolor(BLACK);
        line(900, 350, 1200, 350);
        line(900, 350, 1050, 270);
        line(1200, 350, 1050, 270);
        setfillstyle(SOLID_FILL, DARKGRAY);
        floodfill(1050, 300, BLACK);

        // --- Road in front ---
        setcolor(DARKGRAY);
        rectangle(0, 900, 1500, 1000);
        setfillstyle(SOLID_FILL, DARKGRAY);
        floodfill(10, 950, DARKGRAY);

        // --- Road lines ---
        setcolor(WHITE);
        for (int i = 0; i < 1500; i += 150) {
            rectangle(i, 940, i + 80, 950);
            setfillstyle(SOLID_FILL, WHITE);
            floodfill(i + 5, 945, WHITE);
    }

        // =============================
        // BUTTERCUP CHARACTER
        // =============================

        int posY = 400 - y; // Move upward

        // --- Eyes ---
        setcolor(BLACK);
        ellipse(420, 270 + posY, 145, 370, 20, 40);
        ellipse(570, 280 + posY, 155, 400, 20, 40);
        setfillstyle(SOLID_FILL, WHITE);
        floodfill(408, 260 + posY, BLACK);
        floodfill(565, 275 + posY, BLACK);

        // --- Face ---
        ellipse(500, 300 + posY, 0, 360, 210, 170);
        setfillstyle(SOLID_FILL, WHITE);
        floodfill(500, 400 + posY, BLACK);

        // --- Eye boundary ---
        ellipse(390, 300 + posY, 130, 370, 100, 110);
        ellipse(610, 300 + posY, 165, 410, 100, 110);
        line(320, 220 + posY, 492, 280 + posY);
        line(506, 280 + posY, 680, 220 + posY);

        // --- Eye mini lines ---
        line(492, 280 + posY, 493, 260 + posY);
        line(506, 280 + posY, 505, 260 + posY);

        // --- Middle eyes ---
        ellipse(390, 300 + posY, 128, 360, 100, 100);
        ellipse(610, 300 + posY, 172, 412, 100, 100);
        setfillstyle(SOLID_FILL, LIGHTGREEN);
        floodfill(320, 320 + posY, BLACK);
        floodfill(520, 320 + posY, BLACK);

        // --- Inner middle small ---
        ellipse(410, 305 + posY, 120, 385, 70, 80);
        ellipse(600, 300 + posY, 160, 420, 75, 80);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(400, 308 + posY, BLACK);
        floodfill(610, 308 + posY, BLACK);

        // --- Mouth ---
        ellipse(500, 410 + posY, 180, 360, 30, 30);

        // --- Hair ---
        line(285, 220 + posY, 475, 220 + posY);
        line(525, 220 + posY, 715, 220 + posY);
        line(475, 220 + posY, 500, 150 + posY);
        line(525, 220 + posY, 500, 150 + posY);
        ellipse(500, 250 + posY, 5, 175, 220, 180);
        line(285, 220 + posY, 250, 400 + posY);
        line(715, 220 + posY, 750, 400 + posY);
        ellipse(500, 300 + posY, 207, 333, 280, 210);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(330, 440 + posY, BLACK);
        floodfill(330, 170 + posY, BLACK);

        // --- Body upper ---
        line(430, 500 + posY, 400, 620 + posY);
        line(500, 510 + posY, 470, 620 + posY);
        line(395, 620 + posY, 470, 620 + posY);

        // --- Inner body lines ---
        line(418, 550 + posY, 490, 550 + posY);
        line(410, 580 + posY, 480, 590 + posY);
        setfillstyle(SOLID_FILL, LIGHTGREEN);
        floodfill(450, 520 + posY, BLACK);
        floodfill(450, 590 + posY, BLACK);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(450, 560 + posY, BLACK);

        // --- Left leg ---
        ellipse(410, 622 + posY, 0, 360, 15, 30);
        setfillstyle(SOLID_FILL, WHITE);
        floodfill(408, 595 + posY, BLACK);

        // --- Left shoe ---
        arc(410, 620 + posY, 170, 360, 10);
        line(400, 620 + posY, 420, 620 + posY);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(405, 631 + posY, BLACK);

        // --- Right leg ---
        line(430, 620 + posY, 410, 700 + posY);
        line(460, 620 + posY, 440, 700 + posY);
        line(410, 700 + posY, 440, 700 + posY);

        // --- Right shoe ---
        ellipse(425, 708 + posY, 150, 375, 15, 30);
        arc(425, 712 + posY, 150, 380, 8);
        line(418, 710 + posY, 435, 710 + posY);
        setfillstyle(SOLID_FILL, BLACK);
        floodfill(420, 720 + posY, BLACK);

        // --- Arms ---
        ellipse(360, 510 + posY, 0, 360, 70, 10);
        ellipse(504, 580 + posY, 0, 360, 10, 70);
        setfillstyle(SOLID_FILL, WHITE);
        floodfill(500, 600 + posY, BLACK);
        
        // --- Sun ---
        setcolor(YELLOW);
        circle(1200, 100, 50);
        setfillstyle(SOLID_FILL, YELLOW);
        floodfill(1202, 102, YELLOW);

        // =============================
        // FRAME CONTROL
        // =============================
        delay(5);
        page = 1 - page;
    }

    getch();
    closegraph();
    return 0;
}

