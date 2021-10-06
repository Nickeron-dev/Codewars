package classes;

public class Troll {
    public static String disemvowel(String str) {
      String[] vowels = {"a", "e", "i", "o", "u", "A", "E", "I", "O", "U"};
      for(int i = 0; i < vowels.length; i++) { // goes through an array of vowels
        String[] temp = str.split(vowels[i]); // splits by every vowel
        str = ""; // we don't need var str now so in order not to create one more I use it
        for(int j = 0; j < temp.length; j++) {
          str += temp[j]; // combines it back to a String
        }
      }
      return str;
    }

    public static void main(String[] args) {
      String str = "Ths wbst s fr lsrs LL!";
      System.out.println("From: " + str);
      System.out.println("It gives: " + disemvowel(str));
    }
}
