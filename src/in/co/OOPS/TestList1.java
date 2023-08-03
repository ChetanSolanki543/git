package in.co.OOPS;

import java.util.ArrayList;
import java.util.List;

public class TestList1 {

	public static void main(String[] args) {
		
		List list = new ArrayList();
		
		list.add("one");
		list.add (200); 
		list.add("four"); 
		list.add(500);
		list.add("anis");
		
		System.out.println("list = "+ list);
		System.out.println("get = " + list.get(0));			// indexing
		
		list.set(0,"anis");									// sent anis in index of 0
		
		System.out.println("list = " + list);
		
		System.out.println("index of = " + list.indexOf("anis"));			// for find which index
		
		System.out.println("last Index of = " + list.lastIndexOf("anis"));			// for find of last anis
		
		System.out.println("list = " + list.subList(0, 3));

	}

}
