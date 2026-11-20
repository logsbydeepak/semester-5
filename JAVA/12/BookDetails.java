import books.Book;

class BookDetails {
  public static void main(String[] args) {
    Book b = new Book("Head First Java", "Kathy Sierra", 599.0, 2005);
    b.display();
  }
}

/*
 * Compile and run (from this folder):
 *
 * javac books/Book.java BookDetails.java
 * java BookDetails
 *
 * Output:
 *
 * Book name: Head First Java
 * Author name: Kathy Sierra
 * Price: 599.0
 * Year of publishing: 2005
 *
 */
