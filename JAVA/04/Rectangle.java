class Rectangle {
  double length, width, area;
  String colour;

  Rectangle(double length, double width, String colour) {
    this.length = length;
    this.width = width;
    this.colour = colour;
    findArea();
  }

  double get_length() {
    return length;
  }

  double get_width() {
    return width;
  }

  String get_colour() {
    return colour;
  }

  void findArea() {
    area = length * width;
  }

  public static void main(String[] args) {
    Rectangle r1 = new Rectangle(5, 4, "red");
    Rectangle r2 = new Rectangle(5, 4, "red");

    if (r1.area == r2.area && r1.colour.equals(r2.colour))
      System.out.println("Matching Rectangles");
    else
      System.out.println("Non-matching Rectangles");
  }
}

/*
 * Output:
 *
 * Matching Rectangles
 *
 */
