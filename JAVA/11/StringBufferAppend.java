class StringBufferAppend {
  public static void main(String[] args) {
    StringBuffer sb = new StringBuffer();
    System.out.println("Initial capacity: " + sb.capacity());
    System.out.println("Initial length: " + sb.length());

    sb.append('J');
    sb.append('a');
    sb.append('v');
    sb.append('a');
    System.out.println("After append: " + sb);
    System.out.println("Capacity: " + sb.capacity());
    System.out.println("Length: " + sb.length());
  }
}

/*
 * Output:
 *
 * Initial capacity: 16
 * Initial length: 0
 * After append: Java
 * Capacity: 16
 * Length: 4
 *
 */
