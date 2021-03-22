package classes;

import java.util.Arrays;
import java.util.ArrayList;

class Meeting {
  public static String meeting(String s) {
      s = s.toUpperCase();
      String[] array = s.split(";");
      // using ArrayList just because I need more practice with it
      ArrayList<String> map = new ArrayList<String>();

      // Filling ArrayList with names and last names
      for(int i = 0; i < array.length; i++) {
        String[] person = array[i].split(":");
        map.add(person[0]);
        map.add(person[1]);
      }

      // 2D array to get last name and name easier
      String[][] lastNames = new String[map.size() / 2][2];
      for (int i = 0, j = 0; i < map.size(); i += 2, j++) {
        lastNames[j][0] = map.get(i);
        lastNames[j][1] = map.get(i + 1);
      }

      // making proper output and moving everything into 1D array
      // because only it can be sorted by Arrays.sort(...);
      String[] answer = new String[lastNames.length];
      for(int i = 0; i < lastNames.length; i++) {
        answer[i] = "(";
        answer[i] += lastNames[i][1];
        answer[i] += ", " + lastNames[i][0] + ")";
      }
      Arrays.sort(answer);

      s = ""; // clearing old variable and using it to reduce space usage
      for (int i = 0; i < answer.length; i++) {
        s += answer[i]; // filling String for answer
      }
      return s;
    }
}
