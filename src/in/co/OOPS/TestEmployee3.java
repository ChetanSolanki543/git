package in.co.OOPS;

	import java.util.ArrayList;
	import java.util.Collections;
	import java.util.Iterator;
	import java.util.List;
	
	public class TestEmployee3 {

	public static void main(String[] args) {

			Employee3 e1 = new Employee3(1, "kanak", 15000);

			Employee3 e2 = new Employee3(2, "devendra", 25000);

			Employee3 e3 = new Employee3(3, "mahi", 55000);

			Employee3 e4 = new Employee3(4, "shivam", 5000);

			Employee3 e5 = new Employee3(5, "ayan", 20000);

			Employee3 e6 = new Employee3(6, "mahi", 55000);

			List list = new ArrayList();

			list.add(e1);

			list.add(e2);

			list.add(e3);

			list.add(e4);

			list.add(e5);

			list.add(e6);
											// collections is a class and collection is a interface
			Collections.sort(list);			// arrange all objects

			Iterator it = list.iterator();

			while (it.hasNext()) {

				Object object = it.next();

				Employee3 e = (Employee3) object;

				System.out.println(e);

			}
		}

	


}
