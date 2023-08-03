package in.co.Exception;

public class ExceptionHandling1 {

	public static void main(String[] args) {
		try {
			int a = 10;
			int b = 2;
			int c = a/b;
			System.out.println("Division = "+c);
			
			String name = "chetan";
			System.out.println(name.charAt(7));
			}
		catch(Exception e) {
			System.out.println(e);
		}
		finally {
			System.out.println("finally block");
		}
		System.out.println("after catch block");


	}

}
