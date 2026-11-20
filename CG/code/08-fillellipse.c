#include <conio.h>
#include <graphics.h>

main() {
  int gd = DETECT, gm;

  initgraph(&gd, &gm, "c:\\tc\\bgi");

  fillellipse(100, 100, 50, 25);

  getch();
  closegraph();
  return 0;
}
