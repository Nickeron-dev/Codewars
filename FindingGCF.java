package classes;

class FindingGCF {
  public static int findGCF(int num1, int num2) {
    int lowerNumber = num1 <= num2 ? num1 : num2;  // taking larger number
    for(int i = lowerNumber; i >= 1; i--) {
      if(num1 % i == 0 && num2 % i == 0) return i; // if can be divided return it
    }
    return 1; // just for launching 
	}

  public static void main(String[] args) {
    System.out.println("Checking 20 and 8: " + findGCF(20, 8) + " (correct)");
    System.out.println("Checking 13 and 5: " + findGCF(13, 5) + " (correct)");
    System.out.println("Checking 100 and 100: " + findGCF(100, 100) + " (correct)");
  }
}
