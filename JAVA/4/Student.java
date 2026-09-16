class Student {
  int regno;
  String name;
  int[] marks;
  int total;

  Student(int regno, String name, int[] marks) {
    this.regno = regno;
    this.name = name;
    this.marks = marks;
    total = 0;
    for (int m : marks)
      total += m;
  }

  void display() {
    System.out.println("Regno: " + regno + ", Name: " + name + ", Total: " + total);
  }

  public static void main(String[] args) {
    Student[] students = {
      new Student(1, "Alice", new int[] { 80, 90, 85 }),
      new Student(2, "Bob", new int[] { 70, 65, 75 }),
      new Student(3, "Charlie", new int[] { 95, 88, 92 }),
      new Student(4, "David", new int[] { 60, 72, 68 }),
      new Student(5, "Eva", new int[] { 85, 79, 91 })
    };

    System.out.println("Total marks of all students:");
    for (Student s : students)
      s.display();
  }
}

/*
 * Output:
 *
 * Total marks of all students:
 * Regno: 1, Name: Alice, Total: 255
 * Regno: 2, Name: Bob, Total: 210
 * Regno: 3, Name: Charlie, Total: 275
 * Regno: 4, Name: David, Total: 200
 * Regno: 5, Name: Eva, Total: 255
 *
 */
