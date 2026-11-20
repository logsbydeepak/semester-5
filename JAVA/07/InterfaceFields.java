interface Constants {
  int MAX_VALUE = 100;

  void show();
}

class Demo implements Constants {
  public void show() {
    System.out.println("MAX_VALUE: " + MAX_VALUE);
  }
}

class InterfaceFields {
  public static void main(String[] args) {
    Demo d = new Demo();
    d.show();
    System.out.println("Accessed directly: Constants.MAX_VALUE = " + Constants.MAX_VALUE);
  }
}

/*
 * Output:
 *
 * MAX_VALUE: 100
 * Accessed directly: Constants.MAX_VALUE = 100
 *
 */
