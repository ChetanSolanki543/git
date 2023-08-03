package in.co.Exception;

public class TestLoginException {

	public static void main(String[] args) throws LoginException {
		
		String name = "admi";
				
		if (name.equals("admin")) {
				
			System.out.println("Valid User..!!!");
			
		}else {
			
			throw new LoginException ();

	}

}
}