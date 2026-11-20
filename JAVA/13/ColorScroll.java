import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;

/*
 * <applet code="ColorScroll" width="400" height="300"></applet>
 */
public class ColorScroll extends Applet implements AdjustmentListener {
  Scrollbar red, green, blue;
  Color color = Color.BLACK;

  public void init() {
    setLayout(new BorderLayout());
    Panel bars = new Panel(new GridLayout(3, 1));
    red = new Scrollbar(Scrollbar.HORIZONTAL, 0, 10, 0, 265);
    green = new Scrollbar(Scrollbar.HORIZONTAL, 0, 10, 0, 265);
    blue = new Scrollbar(Scrollbar.HORIZONTAL, 0, 10, 0, 265);
    bars.add(red);
    bars.add(green);
    bars.add(blue);
    add(bars, BorderLayout.SOUTH);

    red.addAdjustmentListener(this);
    green.addAdjustmentListener(this);
    blue.addAdjustmentListener(this);
  }

  public void adjustmentValueChanged(AdjustmentEvent e) {
    color = new Color(red.getValue(), green.getValue(), blue.getValue());
    repaint();
  }

  public void paint(Graphics g) {
    g.setColor(color);
    g.fillRect(50, 30, 300, 150);
    g.setColor(Color.BLACK);
    g.drawString("R=" + red.getValue() + " G=" + green.getValue() + " B=" + blue.getValue(), 50, 20);
  }
}

/*
 * Run: appletviewer ColorScroll.java
 *
 * Output: a rectangle whose colour changes as the red, green and blue
 * scroll bars are moved.
 *
 */
