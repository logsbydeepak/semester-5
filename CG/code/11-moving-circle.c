#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

void main() {
  int gd = DETECT, gm, i;

  initgraph(&gd, &gm, "c:\\tc\\bgi");

  // left to right
  for (i = 50; i <= getmaxx(); i++) {
    setcolor(3);
    setfillstyle(SOLID_FILL, 9);
    circle(50 + i, 50, 50);
    floodfill(52 + i, 52, 3);
    delay(20);
    cleardevice();
  }

  // right to left
  for (i = getmaxy(); i >= 0; i--) {
    setcolor(3);
    setfillstyle(SOLID_FILL, 9);
    circle(i, 50, 50);
    floodfill(i + 2, 52, 3);
    delay(20);
    cleardevice();
  }

  // top to bottom
  for (i = 50; i <= getmaxy(); i++) {
    setcolor(3);
    setfillstyle(SOLID_FILL, 9);
    circle(50, i, 50);
    floodfill(52, i + 2, 3);
    delay(20);
    cleardevice();
  }

  // bottom to top
  for (i = getmaxy(); i >= 0; i--) {
    setcolor(3);
    setfillstyle(SOLID_FILL, 9);
    circle(50, i, 50);
    floodfill(52, i + 2, 3);
    delay(20);
    cleardevice();
  }

  // diagonal
  for (i = 50; i <= getmaxx(); i++) {
    setcolor(3);
    setfillstyle(SOLID_FILL, 9);
    circle(i, i, 50);
    floodfill(i + 2, i + 2, 3);
    delay(20);
    cleardevice();
  }

  // reverse diagonal
  for (i = getmaxx(); i >= 0; i--) {
    setcolor(3);
    setfillstyle(SOLID_FILL, 9);
    circle(i, i, 50);
    floodfill(i + 2, i + 2, 3);
    delay(20);
    cleardevice();
  }

  getch();
  closegraph();
}
