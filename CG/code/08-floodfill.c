#include <conio.h>
#include <graphics.h>

main() {
  int gd = DETECT, gm;

  initgraph(&gd, &gm, "c:\\tc\\bgi");

  setcolor(RED);
  circle(100, 100, 50);
  floodfill(100, 100, RED);

  getch();
  closegraph();
  return 0;
}
