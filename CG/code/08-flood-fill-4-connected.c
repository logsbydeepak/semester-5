#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

void flood(int, int, int, int);

void main() {
  int gd = DETECT, gm;

  clrscr();
  initgraph(&gd, &gm, "c:\\tc\\bgi");

  rectangle(50, 50, 100, 100);
  flood(55, 55, 9, 0);

  getch();
  closegraph();
}

void flood(int x, int y, int fill_col, int old_col) {
  if (getpixel(x, y) == old_col) {
    delay(10);
    putpixel(x, y, fill_col);
    flood(x + 1, y, fill_col, old_col);
    flood(x - 1, y, fill_col, old_col);
    flood(x, y + 1, fill_col, old_col);
    flood(x, y - 1, fill_col, old_col);
  }
}
