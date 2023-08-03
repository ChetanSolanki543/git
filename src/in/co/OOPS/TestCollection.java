package in.co.OOPS;
// Collection is a interface
import java.util.ArrayList;
import java.util.Collection;

public class TestCollection {

	public static void main(String[] args) {
		
		Collection c1 = new ArrayList();
		
		c1. add(100);
		
		c1.add ("one");
		
		c1.add (true); 
		
		c1.add('c');
		
		System.out.println("c1 = "+c1);
		
		Collection c2 = new ArrayList();
		
		c2.add(1);
		
		c2.add ("ten");
		
		System.out.println("c2 = " + c2);
		
		c1.addAll (c2);
		
		System.out.println("c1 = " + c1);
				
		System.out.println("contains = "+ c1.contains("ten"));
						
		System.out.println("containsAll = " + c1. containsAll (c2));
						
		System.out.println("empty = " + c1.isEmpty());
						
		c1.remove("ten");
						
		System.out.println("remove = " +c1);
						
		c1.removeAll(c2);
						
		System.out.println("removeAll = "+ c1);
		
		c1.clear();
		
		System.out.println("c1 = "+c1);
		
		

	}

}

/* A collections framework is a unified architecture for
representing and manipulating collections.

It consists of
1. Interfaces - Collection, Set, List, Queue
2.Concrete Classes - ArrayList, Hashmap, HashSet, etc.
3. Algorithm - searching and sorting */
