import java.util.Arrays;
import java.io.PrintWriter;
import java.util.ArrayList;

class SumParts {

  public static int[] sumParts(int[] ls) {
    PrintWriter pw = new PrintWriter(System.out, true);
    pw.println(Arrays.toString(ls));
    pw.println(ls.length);
    if(ls.length == 0) {
      int[] answer = {0};
      return answer;
    }
    int lengthList = ls.length;
    int[] answer = new int[lengthList + 1];
    int counter = 1;
    for (int i = 0; i < answer.length; i++) {
      int sum = 0;
      for (int k = 0; k < ls.length; k++) {
        pw.println(ls[k]);
        sum += ls[k];
        pw.println("result: " + sum);
        pw.flush();
      }
      answer[i] = sum;
      int[] newArray = new int[ls.length - 1];
      for (int m = 1; m < newArray.length; m++) {
        newArray[m - 1] = ls[m];
      }
      ls = newArray;
      pw.println(Arrays.toString(newArray));
    }
    return answer;
  }
}
