package classes;

// This task needs to decode a String by "WUB"

public class Dubstep {
  public static String SongDecoder (String song)
  {
    String[] answerArray = song.split("WUB");  // spliting it by "WUB"
    String answer = "";
    point : // going here when component of an array is ""
    for(int i = 0; i < answerArray.length; i++) {
      if(answerArray[i].equals("")) {  // providing going to point
        continue point;
      }
      answer += " " + answerArray[i]; // adding space and an element
    }

    if(answer.charAt(0) == ' ') { // here I check if there is a space at the beginning
      StringBuilder sb = new StringBuilder(answer);
      sb.deleteCharAt(0); // removing it
      answer = sb.toString();
    }
    return answer;
   }

  public static void main(String[] args) {
    System.out.println("From 'WUBWUBABCWUB': " + SongDecoder("WUBWUBABCWUB"));
    System.out.println("From 'RWUBWUBWUBLWUB' : " + SongDecoder("RWUBWUBWUBLWUB"));
  }
}
