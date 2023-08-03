package in.co.Exception;

// Account1, InsufficientBalance 
public class TestAccount1 {

	public static void main(String[] args) {
		Account1 a = new Account1();
		
	 System.out.println(a);
		
		a.deposite(5000);
		
		try {
				a.withdrawl (3500);}
		
		catch (InsufficientBalance e) {
		
		System.out.println(e);}
		
		a.deposite(5000);
		

	}

}
