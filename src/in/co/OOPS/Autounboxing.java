package in.co.OOPS;

public class Autounboxing {

	public static void main(String[] args) {
		
		int a = 10;
		Integer b = a;      // new method
		Integer c = 70;
		
		double d = 5.5;
		Double d1 = new Double(d);		// old method
		double d2 = d1.doubleValue();

	}

}
