class Updown {
    
    public static String arrange(String strng) {
      strng = strng.toLowerCase();
      String [] array = strng.split(" ");
      
      // to manage when loop should check >= and when <=
      boolean low = false; // for <=
      boolean high = true; // for >=
      
      for (int i = 0; i < array.length; i++) {
        try {
          if (!low) {
           if (array[i].length() > array[i + 1].length()) {
            String temp = array[i + 1]; // swapping if length is lower
              array[i + 1] = array[i];
              array[i] = temp;
            }
           	// changing managing variables
            low = true;
            high = false; // so then this another part will work
            continue;
          }
          
          if (!high) {	// second time this part works
            if (array[i].length() < array[i + 1].length()) {
              String temp = array[i + 1];
              array[i + 1] = array[i];
              array[i] = temp;
            }
            low = false;
            high = true;
            continue;
          }
      } catch(ArrayIndexOutOfBoundsException exc) {
          // skip if reached the end of an array
        }
    } 
    try {
      for (int i = 1; i < array.length; i += 2) {
        array[i] = array[i].toUpperCase();	// moving to upper case each second element
      }
    } catch (ArrayIndexOutOfBoundsException exc) {
    	// skip if reached the end of an array
    }
      
    String answer = String.join(" ", array);	// moving back to String from array
    System.out.println(answer);
    return answer;
  }
}
  