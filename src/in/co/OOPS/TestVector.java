package in.co.OOPS;

import java.util.Enumeration;
import java.util.Vector;

public class TestVector {

	public static void main(String[] args) {
		
		Employee e1 = new Employee(1, "kanak", 15000);

		Employee e2 = new Employee(2, "devendra", 25000);

		Employee e3 = new Employee(3, "mahi", 55000);

		Employee e4 = new Employee(4, "shivam", 5000);

		Employee e5 = new Employee(5, "ayan", 20000);
		
		Vector v = new Vector();
		
		v.add(e1);
		v.add(e2);
		v.add(e3);
		v.add(e4);
		
		Enumeration e = v.elements();
		
		v.add(100);
		
		while(e.hasMoreElements()) {
			
			System.out.println(e.nextElement());
		}

	}

}
