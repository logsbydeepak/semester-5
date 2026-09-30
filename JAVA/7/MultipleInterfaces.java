interface Drawable {
  void draw();
}

interface Resizable {
  void resize(int factor);
}

class Shape implements Drawable, Resizable {
  String name;
  int size;

  Shape(String name, int size) {
    this.name = name;
    this.size = size;
  }

  public void draw() {
    System.out.println("Drawing " + name + " of size " + size);
  }

  public void resize(int factor) {
    size *= factor;
    System.out.println("Resized " + name + " to size " + size);
  }
}

class MultipleInterfaces {
  public static void main(String[] args) {
    Shape circle = new Shape("Circle", 10);
    circle.draw();
    circle.resize(3);
    circle.draw();
  }
}

/*
 * Output:
 *
 * Drawing Circle of size 10
 * Resized Circle to size 30
 * Drawing Circle of size 30
 *
 */
