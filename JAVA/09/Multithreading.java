class EvenThread extends Thread {
  int limit;

  EvenThread(int limit) {
    this.limit = limit;
  }

  public void run() {
    for (int i = 2; i <= limit; i += 2)
      System.out.println("Even: " + i);
  }
}

class OddThread extends Thread {
  int limit;

  OddThread(int limit) {
    this.limit = limit;
  }

  public void run() {
    for (int i = 1; i <= limit; i += 2)
      System.out.println("Odd: " + i);
  }
}

class Multithreading {
  public static void main(String[] args) throws InterruptedException {
    EvenThread even = new EvenThread(10);
    OddThread odd = new OddThread(10);

    even.start();
    odd.start();
    even.join();
    odd.join();
  }
}

/*
 * Output (order may interleave between runs):
 *
 * Even: 2
 * Even: 4
 * Even: 6
 * Even: 8
 * Even: 10
 * Odd: 1
 * Odd: 3
 * Odd: 5
 * Odd: 7
 * Odd: 9
 *
 */
