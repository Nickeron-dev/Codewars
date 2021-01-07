public class CountingDuplicates {
  public static int duplicateCount(String text) {
    text = text.toLowerCase();
    System.out.println(text);
    char[] array = text.toCharArray();
    int[] temp = new int[text.length()];
    int answer = 0;
    for(int i = 0; i < array.length; i++) {
      for(int j = i + 1; j < array.length; j++) {
        if(array[i] == array[j]) {
          System.out.println(array[i] + " equals " + array[j]);
          temp[i] += 1;
          array[i] = 0;
        }
      }
    }
    int max = 0;
    for(int i = 0; i < temp.length; i++) {
      //if(max < temp[i]) max += temp[i];
      if(temp[i] != 0) max += 1;
    }
    return max;
  }
}
