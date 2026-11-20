#include <conio.h>
#include <graphics.h>

main() {
  int gd = DETECT, gm, points[] = {320, 150, 420, 300, 250, 300, 320, 150};

  initgraph(&gd, &gm, "c:\\tc\\bgi");

  drawpoly(4, points); // number of vertices + 1, last point repeats the first

  getch();
  closegraph();
  return 0;
}
