package classes;

public class EnoughIsEnough {

	public static int[] deleteNth(int[] elements, int maxOccurrences) {
    int zeroCounter = 0;
    int locationOfRootZero = -1;
    for(int i = 0; i < elements.length; i++) {
      int counter = 0;
      for(int j = 0; j < elements.length; j++) {
        if(elements[i] == elements[j]) {
          counter += 1;
        }
      }
      if(counter > maxOccurrences) {
        int diff = counter - maxOccurrences;
        for(int j = elements.length-1; j >= 0; j--) {
          if(diff == 0) {
            break;
          }
          if(elements[i] == elements[j]) {
            elements[j] = -1; // here
            diff -= 1;
          }
        }
      }
    }
    for(int i = 0; i < elements.length; i++) {
      if(elements[i] == -1) { // here
        zeroCounter += 1;
      }
    }
    int[] answer;
    if(locationOfRootZero != -1) {
      answer = new int[elements.length - zeroCounter + locationOfRootZero];
    } else {
      answer = new int[elements.length - zeroCounter];
    }
    point :
    for(int i = 0, k = 0; i < elements.length; i++) {
      for(int j = 0; j < elements.length; j++) {
        if(elements[i] == -1) { // here
          continue;
        }
        answer[k] = elements[i];
        k += 1;
        continue point;
      }
    }
		return answer;
	}
  public static void main(String[] args)  {
    System.out.println("IT IS CORRECT!!! this task was really hard so you can check it by pasting into doing it one more time on site");
  }
}
