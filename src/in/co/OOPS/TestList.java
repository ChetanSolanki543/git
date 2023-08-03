package in.co.OOPS;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class TestList {

	public static void main(String[] args) {
		
		List list = new ArrayList();
		
		list. add("one");
		list.add(209);
		list.add("four");
		list.add (500); 
		list.add("shiva");
		
		Iterator it = list.iterator();

		while (it.hasNext()) {
			
			System.out.println(it.next ());
			
		}System.out.println(list);
		
	}

}
