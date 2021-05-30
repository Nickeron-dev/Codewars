import static org.junit.Assert.assertEquals;

import org.junit.Test;

public class SolutionTest{
	
	public static void main(String [] args) {
		SolutionTest test = new SolutionTest();
		test.convert_test0();
		test.convert_test1();
		
	}
        
    @Test
    public void convert_test0(){
        int R = 10234567;
        String s = "CodeWars";
        
        assertEquals(R, Converter.convert(s));
        System.out.println("done");
    }
    
    @Test
    public void convert_test1(){
        int R = 1020;
        String s = "KATA";
        
        assertEquals(R, Converter.convert(s));
        System.out.println("done");
    }
}