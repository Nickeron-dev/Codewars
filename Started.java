import java.util.List;
import java.util.ArrayList;

class Converter{
  public static long convert(String word){
    if (word == "") {
      return 0;
    }
    
    ArrayList<ArrayList<Character>> list = new ArrayList<>(10);
    for (int i = 0; i < 10; i++) {
      list.add( new ArrayList(2));
    }
    System.out.println(list);
    int counter = 0;
    for (int i = 0; i < word.length(); i++) {
      if (!list.get(i).contains(word.charAt(i))) {
        list.add((Character)word.charAt(i));
        list.get(list.length()).add(counter);
        counter++;
      }
      
      
    }
    System.out.println(list);
    return 0L;
  }
}