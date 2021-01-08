package classes;

public class CountingDuplicates {
  public static int duplicateCount(String text) {
    text = text.toLowerCase(); // to make same letters in different cases equal
    int answer = 0;
    for(int i = 0; i < text.length(); i++) {
      if(text.charAt(i) == '!') continue; // to avoid ready elements
      for(int j = i + 1; j < text.length(); j++) {
        if(text.charAt(i) == text.charAt(j)) {
          answer += 1; // found equal elements
          text = text.replace(text.charAt(i), '!');
          break; // not to repeat if found already
        }
      }
    }
    return answer;
  }

  public static void main(String[] args) {
    System.out.println("Repeated letters in 'Invisibility': " + duplicateCount("Invisibility"));
  }
}
