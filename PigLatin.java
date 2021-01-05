package classes;

public class PigLatin {
    public static String pigIt(String str) {
      String[] array = str.split(" ");
      str = ""; // cleaning string for return and not to create new one
      for(int i = 0; i < array.length; i++) {
        if((array[i].equals("!")) || (array[i].equals(".")) || (array[i].equals("?")) || (array[i].equals(","))) {
          str += " " + array[i]; // it is one more if to refuse placing ay at the end
          continue;
        }
        String buffer = array[i].substring(1, array[i].length()); // taking everything except first element
        String buffer2 = Character.toString(array[i].charAt(0)); // taking first element
        array[i] = buffer + buffer2; // combining
        array[i] += "ay"; //add "ay"
        str += " " + array[i];  // making string back with spaces
      }

      if(str.charAt(0) == ' ') { // in order to delete space at the beginning
        StringBuilder builder = new StringBuilder(str);
        builder.deleteCharAt(0);
        str = builder.toString();
      }
      return str;
    }

    public static void main(String[] args) {
      System.out.println("From 'Pig latin is cool' it returns: " +
        pigIt("Pig latin is cool") + " (correct)");
      System.out.println("This is my string' it returns: " +
        pigIt("This is my string") + " (correct)");
    }
}
