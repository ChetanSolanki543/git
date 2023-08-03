package in.co.OOPS;

import java.util.Comparator;

public class Employee5 implements Comparator<Employee> {

		@Override
		public int compare(Employee o1, Employee o2) {
			return o1.getId() - o2.getId();
		}

	}

	class OrderByNameAsc implements Comparator<Employee>{

		@Override
		public int compare(Employee o1, Employee o2) {
			
			return o1.getName().compareTo(o2.getName());
		}
		
	}

	class OrderByNameDsc implements Comparator<Employee>{

		@Override
		public int compare(Employee o1, Employee o2) {
			
			return o2.getName().compareTo(o1.getName());
		}
		
	




}
