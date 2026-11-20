#include <conio.h>
#include <graphics.h>

main() {
  int gd = DETECT, gm;

  initgraph(&gd, &gm, "c:\\tc\\bgi");

  circle(100, 100, 50); /* drawn in white color */
  setcolor(GREEN);
  circle(200, 200, 50); /* drawn in green color */

  getch();
  closegraph();
  return 0;
}
