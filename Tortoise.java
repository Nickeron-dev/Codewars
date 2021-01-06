package classes;

import java.util.Arrays;

public class Tortoise {
    public static int[] race(int v1, int v2, int g) {
      double a; // creating a variable for a container of all seconds
      if(v2 > v1) a = (g * 1.0 / (v2 - v1)) * 3600; // if v2 > v1 get time in hours and parse to seconds
      else return null;  // else return false(by the instruction)
      int[] array = new int[3];
      while(a >= 3600) { // if time is more thay 3600sec(1 hour) add 1 to array[0]
        a -= 3600;
        array[0] += 1;
      }
      while(a >= 60) { // same but with minutes
        a -= 60;
        array[1] += 1;
      }
      array[2] = (int) a; // adding rest to seconds(we know that it can't be more than 60sec)
      return array;
    }

    public static void main(String[] args) {
      System.out.println(Arrays.toString(race(720, 850, 70)) + " (correct)");
    }
}
