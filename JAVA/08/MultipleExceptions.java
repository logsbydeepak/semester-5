class MultipleExceptions {
  void test(int[] arr, int index, String str, int divisor) {
    try {
      System.out.println("Element: " + arr[index]);
      System.out.println("Length: " + str.length());
      System.out.println("Result: " + (arr[0] / divisor));
    } catch (ArrayIndexOutOfBoundsException e) {
      System.out.println("Caught: ArrayIndexOutOfBoundsException");
    } catch (NullPointerException e) {
      System.out.println("Caught: NullPointerException");
    } catch (ArithmeticException e) {
      System.out.println("Caught: ArithmeticException");
    }
  }

  public static void main(String[] args) {
    MultipleExceptions me = new MultipleExceptions();
    int[] arr = { 10, 20, 30 };

    me.test(arr, 5, "hello", 2);
    me.test(arr, 1, null, 2);
    me.test(arr, 1, "hello", 0);
  }
}

/*
 * Output:
 *
 * Caught: ArrayIndexOutOfBoundsException
 * Element: 20
 * Caught: NullPointerException
 * Element: 20
 * Length: 5
 * Caught: ArithmeticException
 *
 */
