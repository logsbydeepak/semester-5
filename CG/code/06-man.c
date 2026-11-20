#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void main() {
  int gd = DETECT, gm;

  initgraph(&gd, &gm, "c:\\tc\\bgi");

  setcolor(9);
  circle(150, 150, 35);
  line(150, 185, 150, 300);
  line(150, 200, 120, 230);
  line(150, 200, 180, 230);
  line(150, 300, 120, 330);
  line(150, 300, 180, 330);
  outtextxy(230, 350, "HI, This is Computer Graphics");

  getch();
  closegraph();
}
