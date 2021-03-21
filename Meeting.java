import java.util.Arrays;
import java.util.ArrayList;

class Meeting {
    public static String meeting(String s) {
      s = s.toUpperCase();
      String[] array = s.split(";");
      System.out.println("This is actial liine\n");
      System.out.println(Arrays.toString(array));
      ArrayList<String> map = new ArrayList<String>();
      for(int i = 0; i < array.length; i++) {
        String[] person = array[i].split(":");
        System.out.println("\n This is names:\n " + person[0] + " " + person[1]);
        map.add(person[0]);
        map.add(person[1]);
      }
      System.out.println("Map: " + map);

      String[][] lastNames = new String[map.size() / 2][2];
      System.out.println("\n");
      for (int i = 0, j = 0; i < map.size(); i += 2, j++) {
        System.out.println(map.get(i));
        lastNames[j][0] = map.get(i);
        lastNames[j][1] = map.get(i + 1);
      }
      System.out.println(Arrays.deepToString(lastNames));
      Arrays.sort(lastNames);
      System.out.println("\n" + Arrays.toString(lastNames));
      return s;
    }
}
