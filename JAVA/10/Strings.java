class Strings {
  void analyse(String name) {
    System.out.println("Name: " + name);
    System.out.println("Length: " + name.length());

    int count = 0;
    for (int i = 0; i < name.length(); i++) {
      if (Character.toLowerCase(name.charAt(i)) == 'a') {
        count++;
        System.out.println("'a' found at index " + i);
      }
    }

    if (count > 0)
      System.out.println("'a' appears " + count + " time(s)");
    else
      System.out.println("'a' is not present");
  }

  public static void main(String[] args) {
    Strings s = new Strings();
    s.analyse("Bhavya");
  }
}

/*
 * Output:
 *
 * Name: Bhavya
 * Length: 6
 * 'a' found at index 2
 * 'a' found at index 5
 * 'a' appears 2 time(s)
 *
 */
