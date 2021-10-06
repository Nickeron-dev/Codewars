import java.util.Arrays;

public class Kata {
  public static int[] sortArray(int[] array) {
    for (int m = 0; m < array.length; m++) {
      for (int i = 0; i < array.length; i++) {
        if (!(array[i] % 2 == 0)) {
          for (int j = i + 1; j < array.length; j++) {
            if (!(array[j] % 2 == 0) && array[i] > array[j]) {
              int temp = array[i];
              array[i] = array[j];
              array[j] = temp;
            }
          }
        }
      }
    }
    System.out.println(Arrays.toString(array));
    return array;
  }
}
