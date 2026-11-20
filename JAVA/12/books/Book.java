package books;

public class Book {
  String name;
  String author;
  double price;
  int year;

  public Book(String name, String author, double price, int year) {
    this.name = name;
    this.author = author;
    this.price = price;
    this.year = year;
  }

  public void display() {
    System.out.println("Book name: " + name);
    System.out.println("Author name: " + author);
    System.out.println("Price: " + price);
    System.out.println("Year of publishing: " + year);
  }
}
