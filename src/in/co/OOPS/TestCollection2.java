package in.co.OOPS;

import java.util.ArrayList;
import java.util.Collection;

public class TestCollection2 {

	public static void main(String[] args) {
		
		Collection c1 = new ArrayList();
		
		c1.add (100); 
		
		c1. add("one"); c1.add(true);
		
		c1.add('c');
		
		c1. add(1);
		
		c1.add("ten");
		
		System.out.println("c1 = " + c1);
		
				Collection c2 = new ArrayList();
		
				c2. add (1);
		
				c2.add("ten");
				
		System.out.println("c2 = " + c2);
		
		c1.retainAll (c2);
		
		System.out.println("c1 = " + c1);

	}

}
