package classes;

public class FindOdd {
  public static int findIt(int[] a) {
    for(int i = 0; i < a.length - 1; i++) {
      int times = 0;
      for(int j = 0; j < a.length; j++) {
        if(a[i] == a[j]) {
          times += 1;
        }
      }
      if(times % 2 != 0) {
        return a[i];
      }
    }
    return a[a.length-1];
  }
}

class FindOddMain {
  public static void main(String[] args) {
    FindOdd finding = new FindOdd();
    System.out.println(finding.findIt(new int[]{20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}) + " It is correct answer");
  }
}
