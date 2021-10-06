import java.util.*;
import java.util.List;
import java.util.ArrayList;

public class Shiritori {
 public static List<String> theGame(List<String> words) {
   List<String> answer = new ArrayList<String>(words.size());
   
   for (int i = 0; i < words.size(); i++) {
     System.out.println("Comparing: " + words.get(i));
     try {
      if (words.get(i).charAt(words.get(i).length() - 1) == words.get(i + 1).charAt(0)) {
         answer.add(words.get(i));
        System.out.println("Comparing: " + words.get(i) + " " +  words.get(i + 1));
      } else {
        if (answer.size() < words.size()) {
          answer.add(words.get(i));
        }
        System.out.println("I am here");
         return answer;
       }
    } catch (StringIndexOutOfBoundsException exc) {
       String [] array = new String[answer.size() + 1];
       for (int k = 0; k < array.length; k++) {
         try {
          array[k] = answer.get(k);
        } catch (Exception excep) {
           array[k] = words.get(k);
            }
       }
       try {
        if (array[1] == "") {
         System.out.println(new ArrayList<String>());
        return new ArrayList<String>();
        }
         } catch (Exception e) {
         return new ArrayList<String>();
       }
        System.out.println("I am here");
        
         return Arrays.asList(array);
     } catch (Exception exc) {
       System.out.println(exc);
       answer.add(words.get(i));
     }
   }

   System.out.println(answer.size());
   try {
    if (answer.get(3) == "") {
      System.out.println(new ArrayList<String>());
       return new ArrayList<String>();
     }
    } catch (Exception exc) {
     System.out.println(exc);
     if (answer.size() < words.size()) {
     System.out.println("Hey");
          //answer.add(words.get(answer.size()));
        }
     return answer;
   }
   if (answer.size() < words.size()) {
     System.out.println("Hey");
          answer.add(words.get(answer.size()));
        }
    return answer;
  }

}