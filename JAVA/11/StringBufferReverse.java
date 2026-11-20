class StringBufferReverse {
  public static void main(String[] args) {
    StringBuffer sb = new StringBuffer("Hello");
    sb.append(" World");
    System.out.println("After append: " + sb);

    sb.reverse();
    System.out.println("After reverse: " + sb);
  }
}

/*
 * Output:
 *
 * After append: Hello World
 * After reverse: dlroW olleH
 *
 */
