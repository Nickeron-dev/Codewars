package classes;

public class DuplicateEncoder {
	static String encode(String word){
    word = word.toLowerCase();
    String answer = "";
    for(int i = 0; i < word.length(); i++) { // going through the entire string
      int counter = 0;
      for(int j = 0; j < word.length(); j++) {
        if(word.charAt(j) == word.charAt(i)) {
          counter += 1;  // counting occurrences
        }
      }
      if(counter > 1) {
        answer += ")"; // adding ")" if element appears more than time
      }

      else {
        answer += "(";  // adding "(" if element appears less than 1 time
      }
    }
    return answer;
  }

  public static void main(String[] args) {
    String question = "Prespecialized";
    System.out.println("Given: " + question);
    System.out.println("Return: " + encode(question));
  }
}
