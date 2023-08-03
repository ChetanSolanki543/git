package in.co.OOPS;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class TestEmployee {

	public static void main(String[] args) {

		Employee c1 = new Employee(1, "kanak   ",   25000);
		Employee c2 = new Employee(2, "Devendra",25000);
		Employee c3 = new Employee(3, "Mahi    ",    25000);
		Employee c4 = new Employee(4, "Shivam  ",  25000);
		Employee c5 = new Employee(5, "Ayan    ",    25000);
		Employee c6 = new Employee(6, "Mushkan ", 25000);

		List list = new ArrayList();
		list.add(c1);
		list.add(c2);
		list.add(c3);
		list.add(c4);
		list.add(c5);
		list.add(c6);
		
//		System.out.println(list);

		Iterator it = list.iterator();
		while (it.hasNext()) {

			Object object = it.next();

			Employee e = (Employee) object;
//			System.out.println(e);
			System.out.print(e.getId());
			System.out.print("  " + e.getName());
			System.out.println("  " + e.getSalary());

		}

	}
}
