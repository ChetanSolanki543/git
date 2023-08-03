package in.co.OOPS;

		import java.util.ArrayList;
		import java.util.Collections;
		import java.util.Iterator;
		import java.util.List;

		public class TestEmployee5 {

			public static void main(String[] args) {

				Employee e1 = new Employee(1, "kanak", 15000);

				Employee e2 = new Employee(2, "devendra", 25000);

				Employee e3 = new Employee(3, "mahi", 55000);

				Employee e4 = new Employee(4, "shivam", 5000);

				Employee e5 = new Employee(5, "ayan", 20000);

				List list = new ArrayList();

				list.add(e1);

				list.add(e2);

				list.add(e3);

				list.add(e4);

				list.add(e5);

				Collections.sort(list, new OrderByNameDsc());

				Iterator it = list.iterator();

				while (it.hasNext()) {

					Object object = it.next();

					Employee e = (Employee) object;

					System.out.println(e);

				}
			}

}
