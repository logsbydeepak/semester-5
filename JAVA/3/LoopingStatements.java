import java.util.Scanner;

class LoopingStatements {
  void sumOfDigits(Scanner sc) {
    System.out.print("Enter a number: ");
    int num = sc.nextInt(), sum = 0, n = num;
    while (n != 0) {
      sum += n % 10;
      n /= 10;
    }
    System.out.println("Sum of digits: " + sum);
  }

  void fibonacciSeries(Scanner sc) {
    System.out.print("Enter n: ");
    int n = sc.nextInt();
    int first = 0, second = 1;
    for (int i = 1; i <= n; i++) {
      System.out.println(first + " ");
      int nextTerm = first + second;
      first = second;
      second = nextTerm;
    }
  }

  int countDigit(int n) {
    int count = 0;
    while (n != 0) {
      count++;
      n /= 10;
    }
    return count;
  }

  int digitSum(int n, int pow) {
    int sum = 0;
    while (n != 0) {
      int digit = n % 10;
      sum += Math.pow(digit, pow);
      n /= 10;
    }
    return sum;
  }

  void armstrongNumbers(Scanner sc) {
    System.out.print("Enter limit: ");
    int lim = sc.nextInt();
    for (int i = 1; i <= lim; i++) {
      int pow = countDigit(i);
      int sum = digitSum(i, pow);
      if (sum == i)
        System.out.println(i);
    }
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    LoopingStatements ls = new LoopingStatements();
    ls.sumOfDigits(sc);
    ls.fibonacciSeries(sc);
    ls.armstrongNumbers(sc);
    sc.close();
  }
}
