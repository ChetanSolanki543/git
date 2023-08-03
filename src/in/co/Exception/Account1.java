package in.co.Exception;

public class Account1 {
	private int balance = 0;
	
	public void setBalance(int balance) {
			this.balance = balance;}
	
	public int getBalance() {
			return balance;}
	
	public void deposite (int amount) {
		int total = getBalance() + amount;
			
		setBalance(total);
			
		System.out.println( "Balance after deposite = " + getBalance());
     }

	public void withdrawl (int amount) throws InsufficientBalance {
		int total = getBalance() - amount;
		if (total < 2000) {
		throw new InsufficientBalance();
		} else {
		setBalance(total);
		System.out.println(" Balance after withdraw) = " + getBalance());}
	}

}
