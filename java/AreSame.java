package classes;

public class AreSame {
	public static boolean comp(int[] a, int[] b) {
    if((a == null | b == null) || (a.length == 0 & b.length != 0)) {
      return false; // if null or both of arrays are [] return false
    } else {
      point :
      for(int i = 0; i < a.length; i++) {
        boolean isSquare = false; // var for better checking
        int numberOfA = 0;  // create a variables which contain number of same squares
        int numberOfB = 0;
        for(int j = 0; j < b.length; j++) {
          if(Math.pow(a[i], 2) == b[j]) {
            isSquare = true;
            b[j] = -1; // not to check same one more time
            continue point;
          }
        }
        if(isSquare == false) return false;
      }
    }
    return true;
  }

  public static void main(String[] args) {
    int[] a = new int[]{121, 144, 19, 161, 19, 144, 19, 11};
    int[] b = new int[]{121, 14641, 20736, 361, 25921, 361, 20736, 361};
    System.out.println("Array b has got all squares of array a: " + comp(a, b));
  }
}
