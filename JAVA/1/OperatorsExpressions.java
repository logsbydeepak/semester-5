import java.util.Scanner;

class OperatorsExpressions {
  void rectangleArea(Scanner sc) {
    System.out.print("Enter length: ");
    double l = sc.nextDouble();
    System.out.print("Enter breadth: ");
    double b = sc.nextDouble();
    System.out.println("Area: " + (l * b));
  }

  void evaluateExpressions() {
    int a = 10, b = 5;
    System.out.println((a << 2) + (b >> 2));
    System.out.println(b > 0);
    System.out.println((a + b * 100) / 10);
    System.out.println(a & b);
  }

  void printDigits(Scanner sc) {
    System.out.print("Enter a number: ");
    int n = sc.nextInt();
    while (n != 0) {
      System.out.println(n % 10);
      n /= 10;
    }
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    OperatorsExpressions exp = new OperatorsExpressions();
    exp.rectangleArea(sc);
    exp.evaluateExpressions();
    exp.printDigits(sc);
    sc.close();
  }
}

/*
 * Output:
 *
 * Enter length: 5
 * Enter breadth: 4
 * Area: 20.0
 * 41
 * true
 * 51
 * 0
 * Enter a number: 123
 * 3
 * 2
 * 1
 *
 */
