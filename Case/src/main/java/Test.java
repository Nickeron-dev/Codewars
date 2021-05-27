import static org.junit.jupiter.api.Assertions.assertEquals;

public class Test {
    public static void main(String[] args) {
    	tests();
    }
    
    public static void tests() {
      assertEquals("camel Casing", CamelCase.camelCase("camelCasing"));
      assertEquals("camel Casing Test", CamelCase.camelCase("camelCasingTest"));
      assertEquals("camelcasingtest", CamelCase.camelCase("camelcasingtest"));
      System.out.println("Works!");
    }
}
