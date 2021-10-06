import java.util.Arrays;

public class NextBiggerNumberFinderSecond {
    public static long nextBiggerNumber(long n) {
      System.out.println("with: " + n); // if 1 from end is greater than another nearer to beginning
      String strMain = Long.toString(n);
      for(int i = strMain.length() - 1; i > 0; i--) {
        for(int k = strMain.length() - 2; k >= 0; k--) {
          int a = Integer.parseInt(Character.toString(strMain.charAt(i)));
          int b = Integer.parseInt(Character.toString(strMain.charAt(k)));
          System.out.println(a + "b: " + b);
          if(a > b) {
            System.out.println("I am");
            char[] array = strMain.toCharArray();
            char temp = array[i];
            array[i] = array[k];
            array[k] = temp;
            System.out.println("Change: " + a + " " + b);
            String str = new String(array);
            System.out.println("str" + str);
            long number = Long.parseLong(str);
            System.out.println("here");
            System.out.println("k: " + k);
            for(int j = k + 1; j < strMain.length() - 1; j++) {
              System.out.println("j: " + j);
              int c = Integer.parseInt(Character.toString(array[j]));
              int d = Integer.parseInt(Character.toString(array[j + 1]));
              if(c > d) {
                System.out.println("Hi with: " + j + " " + (j + 1));
                char[] array1 = strMain.toCharArray();
                char temp1 = array[j];
                array[j] = array[j+1];
                array[j+1] = temp1;
                String str1 = new String(array);
                number = Long.parseLong(str1);
              }
            }
            System.out.println("number: " + number);
            if(number > n) return number;
            else return -1;
          }
        }
      }
      System.out.println("give -1");
      return -1;
    }
}
