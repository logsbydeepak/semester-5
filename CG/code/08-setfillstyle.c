#include <conio.h>
#include <graphics.h>

main() {
  int gd = DETECT, gm;

  initgraph(&gd, &gm, "c:\\tc\\bgi");

  setfillstyle(XHATCH_FILL, RED);
  circle(100, 100, 50);
  floodfill(100, 100, WHITE);

  getch();
  closegraph();
}
