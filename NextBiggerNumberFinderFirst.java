import java.util.Arrays;

public class NextBiggerNumberFinderFirst {
    public static long nextBiggerNumber(long n) {
      String strMain = Long.toString(n);
      //char[] array = str.toCharArray();
      int[] allInRowByIncreasing = new int[strMain.length() * strMain.length() + 1];
      int[][] allInRowByIncreasingTwo = new int[10][allInRowByIncreasing.length * allInRowByIncreasing.length + 1];
      allInRowByIncreasing[allInRowByIncreasing.length - 1] = (int)n;
      int index = 0;
        for(int i = strMain.length() - 1; i >= 0; i--) {
          point :
          for(int j = strMain.length() - 1; j >= 0; j--) {
            if(i == j) continue point;
            char[] array = strMain.toCharArray();
            char temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            String str = new String(array);
            int number = Integer.parseInt(str);
            allInRowByIncreasing[index] = number;
            allInRowByIncreasingTwo[0][index] = number;
            index++;
          }
        }
      if(strMain.length() > 4) {
        for(int i = 0; i < allInRowByIncreasing.length; i++) {
          allInRowByIncreasingTwo[0][i] = allInRowByIncreasing[i];
        }
        int times = strMain.length() - 4;
        while(times != 0) {
          for(int p = 1; p < allInRowByIncreasingTwo.length; p++) {
            int index2 = 0;
            for(int k = 0; k < allInRowByIncreasingTwo[p].length; k++) {

              String str = Integer.toString(allInRowByIncreasingTwo[p-1][k]);
              for(int i = str.length() - 1; i >= 0; i--) {
                point :
                for(int j = str.length() - 1; j >= 0; j--) {
                  if(i == j) continue point;
                  char[] array = str.toCharArray();
                  char temp = array[i];
                  array[i] = array[j];
                  array[j] = temp;
                  //System.out.println("result: " + Arrays.toString(array));
                  String string = new String(array);
                  int number = Integer.parseInt(string);
                  try {
                    allInRowByIncreasingTwo[p][k] = number;
                  } catch(ArrayIndexOutOfBoundsException exc) {
                    continue;
                  }
                  index2++;
                }
              }
            }
          }
          times -= 1;
        }
      }
      //System.out.println(Arrays.toString(allInRowByIncreasing));
      for(int i = 0; i < allInRowByIncreasing.length; i++) {
        for(int j = 0; j < allInRowByIncreasing.length; j++) {
          if(allInRowByIncreasing[i] < allInRowByIncreasing[j]) {
            int temp = allInRowByIncreasing[i];
            allInRowByIncreasing[i] = allInRowByIncreasing[j];
            allInRowByIncreasing[j] = temp;
          }
        }
      }
      //System.out.println("By increasing:" + Arrays.toString(allInRowByIncreasing));
      place :
      for(int i = 0; i < allInRowByIncreasing.length; i++) {
        if(allInRowByIncreasing[i] == n) {
          try {
            if(allInRowByIncreasing[i] == allInRowByIncreasing[i + 1]) {
              continue place;
             }
            //System.out.println(Arrays.deepToString(allInRowByIncreasingTwo));
            for(int j = 0; j < allInRowByIncreasingTwo.length; j++) {
              for(int p = 0; p < allInRowByIncreasingTwo[j].length; p++) {
                if(allInRowByIncreasing[i] < allInRowByIncreasingTwo[j][p] && allInRowByIncreasing[i + 1] > allInRowByIncreasingTwo[j][p]) return allInRowByIncreasingTwo[j][p];
              }
            }
            return allInRowByIncreasing[i + 1];
          } catch(ArrayIndexOutOfBoundsException exc) {
            System.out.println(Arrays.toString(allInRowByIncreasing));
            return -1;
          }
        }
      }
      System.out.println(Arrays.toString(allInRowByIncreasing));
      return -1;
    }
}
