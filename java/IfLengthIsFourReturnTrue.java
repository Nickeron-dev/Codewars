package classes;

public class IfLengthIsFourReturnTrue {
  public static void main(String[] args) {
    System.out.println(isFour("a23"));
  }
  public static boolean isFour(String number) {
    try { // start with parsing to int to avoid getting not int values
      int pin = Integer.parseInt(number);
      if(number.length() == 4 | number.length() == 6) {
        return true;
      } else {
        return false;
      }
    } catch(NumberFormatException exc) {
      return false;
    }
  }
}
