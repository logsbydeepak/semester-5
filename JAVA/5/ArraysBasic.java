class ArraysBasic {
  void findLargestSmallest(int[] arr) {
    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < arr.length; i++) {
      if (arr[i] > largest)
        largest = arr[i];
      if (arr[i] < smallest)
        smallest = arr[i];
    }
    System.out.println("Largest: " + largest);
    System.out.println("Smallest: " + smallest);
  }

  void matrixAddition(int[][] a, int[][] b) {
    int rows = a.length, cols = a[0].length;
    int[][] sum = new int[rows][cols];
    for (int i = 0; i < rows; i++)
      for (int j = 0; j < cols; j++)
        sum[i][j] = a[i][j] + b[i][j];

    System.out.println("Sum of matrices:");
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++)
        System.out.print(sum[i][j] + " ");
      System.out.println();
    }
  }

  public static void main(String[] args) {
    int[] arr = { 3, 7, 1, 9, 4 };
    int[][] a = { { 1, 2 }, { 3, 4 } };
    int[][] b = { { 5, 6 }, { 7, 8 } };

    ArraysBasic ab = new ArraysBasic();
    ab.findLargestSmallest(arr);
    ab.matrixAddition(a, b);
  }
}

/*
 * Output:
 *
 * Largest: 9
 * Smallest: 1
 * Sum of matrices:
 * 6 8
 * 10 12
 *
 */
