import java.util.Scanner;

class DecisionMaking {
  void largerOfTwo(Scanner sc) {
    System.out.print("Enter a, b: ");
    int a = sc.nextInt(), b = sc.nextInt();
    if (a == b)
      System.out.println("Equal");
    else if (a > b)
      System.out.println(a + " is larger");
    else
      System.out.println(b + " is larger");
  }

  void checkOddEven(Scanner sc) {
    System.out.print("Enter n: ");
    int n = sc.nextInt();
    System.out.println(n % 2 == 0 ? "Even" : "Odd");
  }

  void biggestOfThree(Scanner sc) {
    System.out.print("Enter a, b, c: ");
    int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
    if (a >= b && a >= c)
      System.out.println(a + " is the largest number.");
    else if (b >= a && b >= c)
      System.out.println(b + " is the largest number.");
    else
      System.out.println(c + " is the largest number.");
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    DecisionMaking dm = new DecisionMaking();
    dm.largerOfTwo(sc);
    dm.checkOddEven(sc);
    dm.biggestOfThree(sc);
    sc.close();
  }
}
