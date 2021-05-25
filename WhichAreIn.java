import java.util.ArrayList;
import java.util.Collections;


public class WhichAreIn {

	public static String[] inArray(String[] array1, String[] array2) {
    boolean isIn = false; // variable that will indicate if there was a duplicate
    ArrayList<String> answer = new ArrayList<String>();

		for (int i = 0; i < array1.length; i++) {
      for (int j = 0; j < array2.length; j++) {

        if (array2[j].contains(array1[i])) { // checking if it contains

          for (int k = 0; k < answer.size(); k++) {
            if (array1[i].equals(answer.get(k))) {
              isIn = true;
              break; // just to optimize
            }
          }

          if (!isIn) {
            answer.add(array1[i]);
          }
          isIn = false;
        }
      }
    }
    Collections.sort(answer); // sorting alphabetically
    String[] answerArray = new String[answer.size()];

    for (int m = 0; m < answer.size(); m++) {
      answerArray[m] = answer.get(m); // ArrayList to Array
    }

    return answerArray;
	}
}
