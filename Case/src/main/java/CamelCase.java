class CamelCase {
  public static String camelCase(String input) {
    String answer = "";
    boolean isUsed = false;
    
    for (int i = 0; i < input.length(); i++) {
      if (input.charAt(i) >= 65 && input.charAt(i) <= 90 && isUsed == false) {
        answer += " ";
        i -= 1;
        isUsed = true;
        continue;
      }
      answer += input.charAt(i);
      isUsed = false;
    }
    return answer;
  }
}
