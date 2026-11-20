class StringBufferInsert {
  public static void main(String[] args) {
    StringBuffer sb = new StringBuffer("World");
    System.out.println("Before: " + sb);

    sb.insert(0, "Hello ");
    System.out.println("After inserting at beginning: " + sb);

    sb.insert(0, '>');
    System.out.println("After inserting a character: " + sb);
  }
}

/*
 * Output:
 *
 * Before: World
 * After inserting at beginning: Hello World
 * After inserting a character: >Hello World
 *
 */
