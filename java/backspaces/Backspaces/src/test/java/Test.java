import static org.junit.jupiter.api.Assertions.assertEquals;

public class Test {
	
	public static void main(String[] args) {
		testCleanString();
		System.out.println("Done");
	}
	
    public static void testCleanString() {
        final BackspacesInString bis = new BackspacesInString();
        assertEquals("ac", bis.cleanString("abc#d##c"));
        assertEquals("", bis.cleanString("abc####d##c#"));
    }
}