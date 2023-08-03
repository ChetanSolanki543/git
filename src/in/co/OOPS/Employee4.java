package in.co.OOPS;

public class Employee4 {
	

		private int id = 0;
		private String name = null;
		private int salary = 0;

		public Employee4(int id, String name, int salary) {
			this.id = id;
			this.name = name;
			this.salary = salary;
		}

		public int getId() {
			return id;
		}

		public String getName() {
			return name;
		}

		public int getSalary() {
			return salary;
		}

		@Override
		public String toString() {
			return id + " " + name + " " + salary;
		}

		@Override
		public boolean equals(Object obj) {

			if (!(obj instanceof Employee)) {
				return false;
			}

			Employee4 e = (Employee4) obj;
			boolean b = this.id == e.id && this.name == e.name && this.salary == e.salary;
			return b;
		}

		@Override
		public int hashCode() {

			String str = this.id + this.name + this.salary;
			return str.hashCode();
		}

	}




