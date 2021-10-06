package classes;
import java.util.Arrays;
public class StringSplit {
    public static String[] solution(String s) {
      char[] array = s.toCharArray();
      String[] answer = new String[(array.length + 1)/2];
      int j = 0;
      for(int i = 0; i < array.length; i++) { //here
        String addition = "";
        if(i + 1 == array.length) {
          addition += Character.toString(array[i]) + "_";
          answer[j] = addition;
          break;
        }
        addition += Character.toString(array[i]) + Character.toString(array[i + 1]);
        i += 1;
        answer[j] = addition;
        j += 1;
      }
      //System.out.println(Arrays.toString(answer));
      return answer;
    }
    public static void main(String[] args) {
      System.out.println("From: abcde: " + Arrays.toString(solution("abcde")));
    }
}
