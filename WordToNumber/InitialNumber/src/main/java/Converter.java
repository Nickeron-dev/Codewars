import java.util.Arrays;

class Converter{
  public static long convert(String word){
    if (word == "") {
      return 0;
    }
    
    word = word.toLowerCase();
    
    char[][] array = new char[2][10];	// first dimension for distinct characters and second for numbers(saved as chars)
    int number = 1;
    int arrayIndex = 2;	// actions will be repeated after 2nd element of the array
    String answer = "";
    for (int i = 0; i < word.length(); i++) {
      if ((int) array[0][0] == 0) { // firstly, solve with first element
        array[0][0] = word.charAt(i);
        array[1][0] = (char) number;
        number = 0; // setting next number
        answer += Integer.toString((int) array[1][0]);
        continue;
      }
      
      if ((int) array[0][1] == 0 && word.charAt(i) != array[0][0]) { 
    	  // since second element of the number must be 0 I have to solve it manually
        array[0][1] = word.charAt(i); // filling the array
        array[1][1] = (char) number;
        number += 2;
        answer += Integer.toString((int)array[1][1]);
        continue;
      }
      
      try {
      if ((int) array[0][arrayIndex] == 0) { // solving after 2nd distinct char
        boolean contains = false;
        
        // checking if it contains char
        for (int m = 0; m < array[0].length; m++) {
          if (array[0][m] == word.charAt(i)) {
            contains = true;
            break;
          }
        }
        
        if (contains) {
          int found = -1;
          for (int j = 0; j < array[0].length; j++) {
            if (array[0][j] == word.charAt(i)) {
              found = (int) array[1][j];
              break;
            }
          }
          answer += Integer.toString(found);
          continue;
        } else {
          array[0][arrayIndex] = word.charAt(i);
          array[1][arrayIndex] = (char) number;
          number++;
          answer += Integer.toString((int) array[1][arrayIndex]);
          arrayIndex++;
          }
        }
      } catch (ArrayIndexOutOfBoundsException exc) { 
    	  // in case if word wasn't ended but all letters 
    	  //were used(following letters were used for a few times that's why there are already saved in an array)
         int found = -1;
          for (int j = 0; j < array[0].length; j++) {
            if (array[0][j] == word.charAt(i)) {
              found = (int) array[1][j];
              break;
            }
          }
          answer += Integer.toString(found);
      }
    }
    return Long.parseLong(answer);
  }
}
