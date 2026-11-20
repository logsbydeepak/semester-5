import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;

/*
 * <applet code="Calculator" width="300" height="200"></applet>
 */
public class Calculator extends Applet implements ActionListener {
  TextField t1, t2;
  Label result;
  Button add, sub, mul, div;

  public void init() {
    t1 = new TextField(8);
    t2 = new TextField(8);
    result = new Label("Result: ");
    result.setPreferredSize(new Dimension(200, 20));
    add = new Button("+");
    sub = new Button("-");
    mul = new Button("*");
    div = new Button("/");

    add(new Label("Number 1:"));
    add(t1);
    add(new Label("Number 2:"));
    add(t2);
    add(add);
    add(sub);
    add(mul);
    add(div);
    add(result);

    add.addActionListener(this);
    sub.addActionListener(this);
    mul.addActionListener(this);
    div.addActionListener(this);
  }

  public void actionPerformed(ActionEvent e) {
    try {
      double a = Double.parseDouble(t1.getText());
      double b = Double.parseDouble(t2.getText());
      Object src = e.getSource();
      double r;
      if (src == add)
        r = a + b;
      else if (src == sub)
        r = a - b;
      else if (src == mul)
        r = a * b;
      else {
        if (b == 0) {
          result.setText("Result: cannot divide by zero");
          return;
        }
        r = a / b;
      }
      result.setText("Result: " + r);
    } catch (NumberFormatException ex) {
      result.setText("Result: invalid input");
    }
  }
}

/*
 * Run: appletviewer Calculator.java
 *
 * Output: entering 12 and 4 and pressing + - * / shows
 * Result: 16.0, 8.0, 48.0 and 3.0 respectively.
 *
 */
