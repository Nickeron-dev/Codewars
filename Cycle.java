import java.math.BigDecimal;

class Cycle {
  public static int cycle(int n) {
    int counter = 1;
    double number = 1 / (n * 1.0);
    BigDecimal decimal = new BigDecimal(1 / (n * 1.0));

    //BigDecimal decimal1 = new BigDecimal(n);
   // System.out.println("hello");
    //decimal = decimal.divide(decimal1);

    String str = decimal.toString();
    str = str.substring(2);
    System.out.println(str);

    for (int i = 1; i < str.length(); i++) {
      //for (int k = 0; k < str.length(); k++) {
      try {
        String checkOne = str.substring(0, i + 1);
        System.out.println("One: " + checkOne);
        String checkTwo = str.substring(i + 1, i + 2 + i);
        System.out.println("Two: " + checkTwo);
        counter += 1;
        System.out.println("counter: " + counter);
        if (checkOne.equals(checkTwo)) {
          String checkThree = str.substring(i + 2 + i, i + 4 + i);
          System.out.println("Three: " + checkTwo);
          if (checkThree.equals(checkTwo)) return counter;
        }

      } catch (StringIndexOutOfBoundsException exc) {
        System.out.println("Exception");
        return -1;
      }
        // if out of bounds return -1

     // }
    }
    if (counter > 1) return counter;
    else return -1;
  }
}
