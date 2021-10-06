class SumParts {
  public static int[] sumParts(int[] ls) {
    if(ls.length == 0) {
      return new int[] {0};
    } 
    int[] answer = new int[ls.length + 1];
    int sum = 0;
    for (int k = 0; k < ls.length; k++) {
      sum = 0;
      for (int p = k; p < ls.length; p++) {
        sum += ls[p];
      }
      answer[k] = sum;
    }
    return answer;
  }
}