public class DRoot {
  public static int digital_root(int n) {
    
    if (n == 0) {
      return 0;
    }
    
    // first time get sum. If it is < 10 return, else repeat until it won't be 
    int answer = 0;
    char [] array = Integer.toString(n).toCharArray();
    for (int i = 0; i < array.length; i++) {
      answer += Integer.parseInt(String.valueOf(array[i]));
    }
    
    while (answer > 9) {
      for ( ; n >= 0; n--) { // maximum number of repeatings is first number
        int newAnswer = 0;
        array = Integer.toString(answer).toCharArray();
        for (int i = 0; i < array.length; i++) {
          newAnswer += Integer.parseInt(String.valueOf(array[i]));
        }
        
        answer = newAnswer;
        if (answer < 10) {  // but in case if it is ready return
          return answer;
        }
      }
    }
    
    return answer;
  }
}
