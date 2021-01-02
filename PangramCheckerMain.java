package classes;

class PangramChecker {
  public boolean check(String sentence){
    char[] alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char[] alphabetTwo = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    sentence = sentence.toLowerCase();
    String[] givenStringSplit = sentence.split(" ");
    String array = "";
    for(int i = 0; i < givenStringSplit.length; i++) {
      array += givenStringSplit[i];
    }
    char[] givenArrayToChar = array.toCharArray();
    for(int i = 0; i < givenArrayToChar.length; i++) {
      for(int j = 0; j < alphabet.length; j++) {
        if(givenArrayToChar[i] == alphabet[j]) {
          alphabet[j] = ' '; // make it uncheckable
        }
      }
    }
    for(int i = 0; i < alphabet.length; i++) {
      if(alphabet[i] == ' ') continue;
      else return false;
    }
    return true;
  }
}

public class PangramCheckerMain {
  public static void main(String[] args) {
    String pangram1 = "The quick brown fox jumps over the lazy dog.";
    PangramChecker pc = new PangramChecker();
    String pangram2 = "You shall not pass!";

    System.out.println("Result one: " + pc.check(pangram1) + " \nResult two:"
    + pc.check(pangram2) + "\nAll of them are correct");
  }
}
