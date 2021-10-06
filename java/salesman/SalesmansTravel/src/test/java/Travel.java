import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;

public class Travel {
    public static String travel(String r, String zipcode) {
      
      String [] array = r.split(",");
      List<String> answer = new ArrayList<String>(array.length);
      
      // getting only zipcodes	
      for (int i = 0; i < array.length; i++) {
        if (array[i].substring(array[i].length() - 8, array[i].length()).equals(zipcode)) {
          for (int j = 0; j < array[i].length(); j++) {
            if (array[i].charAt(j) >= 65 && array[i].charAt(j) <= 122) {
              answer.add(array[i].substring(j, array[i].length() - 9));		// if zip passes add place and number to arraylist
              answer.add(array[i].substring(0, j - 1));
              break;
            }
          }
          
        }
      }
      String finalAnswer = "";
      try {
        finalAnswer += answer.get(0); // adding first place
      } catch (Exception exc) {
        
      }

      for (int i = 1; i < answer.size(); i++) {
        try {
            Integer.parseInt(answer.get(i));
            continue;
          } catch (Exception exc) {
            
            finalAnswer += "," + answer.get(i); 	// adding commas with other places
            
          }
      }
      
      boolean isSlashAdded = false; // set true if it was set not to add it many times
      boolean comma = false; // the same for comma
      // adding numbers
      for (int i = 1; i < answer.size(); i++) {
        try {
          Integer.parseInt(answer.get(i));
          if (!isSlashAdded) {
            finalAnswer += "/";
            isSlashAdded = true;
          }
          
          if (comma) {
            finalAnswer += ",";
          }
          comma = true;
          finalAnswer += answer.get(i);
        } catch (Exception exc) {
          
        }
      }

      if (finalAnswer.length() == 0) {
        return zipcode + ":/"; // in case if not found
      }
      return zipcode + ":" + finalAnswer;
    }
}