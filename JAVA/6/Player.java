class Player {
  String name;
  int age;

  Player(String name, int age) {
    this.name = name;
    this.age = age;
  }

  void display() {
    System.out.println("Name: " + name + ", Age: " + age);
  }
}

class Cricket_Player extends Player {
  int runs;

  Cricket_Player(String name, int age, int runs) {
    super(name, age);
    this.runs = runs;
  }

  void display() {
    super.display();
    System.out.println("Runs: " + runs);
  }
}

class Football_Player extends Player {
  int goals;

  Football_Player(String name, int age, int goals) {
    super(name, age);
    this.goals = goals;
  }

  void display() {
    super.display();
    System.out.println("Goals: " + goals);
  }
}

class Hockey_Player extends Player {
  int goals;

  Hockey_Player(String name, int age, int goals) {
    super(name, age);
    this.goals = goals;
  }

  void display() {
    super.display();
    System.out.println("Goals: " + goals);
  }
}

class Inheritance {
  public static void main(String[] args) {
    Cricket_Player cp = new Cricket_Player("Virat", 34, 8500);
    Football_Player fp = new Football_Player("Messi", 36, 800);
    Hockey_Player hp = new Hockey_Player("Sardar Singh", 38, 150);

    cp.display();
    fp.display();
    hp.display();
  }
}

/*
 * Output:
 *
 * Name: Virat, Age: 34
 * Runs: 8500
 * Name: Messi, Age: 36
 * Goals: 800
 * Name: Sardar Singh, Age: 38
 * Goals: 150
 *
 */
