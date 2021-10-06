package classes;

public class FindDiffBetweenMaxAndMin {

  public static int maxDiff(int[] lst) {
    if(lst.length <= 1) return 0;
    int max, min = max = lst[0];
    for(int i = 0; i < lst.length; i++) {
      max = max > lst[i] ? max : lst[i];
      min = min < lst[i] ? min : lst[i];
    }
    return max-min;
  }

  public static void main(String[] args) {
    System.out.println("Answer: 4" + " Returns: " + maxDiff(new int[]{ 1, 2, 3, 4, 5, 5, 4 }));
    System.out.println("Answer: 30" + " Returns: " + maxDiff(new int[]{ -4, -5, -3, -1, -31 }));
    System.out.println("Answer: 10" + " Returns: " + maxDiff(new int[]{ 1, 2, 3, 4, -5, 5, 4 }));
    System.out.println("Answer: 0" + " Returns: " + maxDiff(new int[]{ 1000000 }));
    System.out.println("Answer: 0" + " Returns: " + maxDiff(new int[]{}));
  }
}
