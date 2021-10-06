public class BackspacesInString {
  public String cleanString(String s) {
    
    if (s.length() == 0) {
      return "";
    }
    
    StringBuffer answer = new StringBuffer(s);
    
    for (int i = 0; i < answer.length(); i++) {
      if (answer.charAt(i) == '#') {
        try {
          answer.deleteCharAt(i); // deleting 2 times because if it found # it certainly can remove it
          
          answer.deleteCharAt(i - 1); // this action might be not always performed
          i = 0; // we deleted so the string was cut but index i wasn't changed
        } catch (Exception exc) {
          System.out.println(exc);
        }
      }
    }
    
    try {
      if (answer.toString().charAt(0) == '#') {
        answer.deleteCharAt(0);
      }
    } catch (StringIndexOutOfBoundsException exc) {
    }
    
    return answer.toString();
  }
}
