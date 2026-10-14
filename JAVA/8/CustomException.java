class SumTooLargeException extends Exception {
  SumTooLargeException(String message) {
    super(message);
  }
}

class CustomException {
  void checkSum(int a, int b) throws SumTooLargeException {
    int sum = a + b;
    if (sum > 99)
      throw new SumTooLargeException("Sum " + sum + " is greater than 99");
    System.out.println("Sum is " + sum);
  }

  public static void main(String[] args) {
    CustomException ce = new CustomException();
    try {
      ce.checkSum(40, 50);
      ce.checkSum(60, 70);
    } catch (SumTooLargeException e) {
      System.out.println("Caught: " + e.getMessage());
    }
  }
}

/*
 * Output:
 *
 * Sum is 90
 * Caught: Sum 130 is greater than 99
 *
 */
