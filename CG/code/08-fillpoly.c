#include <conio.h>
#include <graphics.h>

main() {
  int gd = DETECT, gm, points[] = {100, 200, 120, 230, 150, 260, 120, 290, 100,
                                   330, 80,  290, 50,  260, 80,  230, 100, 200};

  initgraph(&gd, &gm, "c:\\tc\\bgi");

  setfillstyle(SOLID_FILL, 10); // giving the type of fill
  fillpoly(9, points);          // polygon of 9 vertices filled using the style

  getch();
  closegraph();
  return 0;
}
