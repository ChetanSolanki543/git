package in.co.OOPS;

// TestEqualHashcode

public class TestEmployee4 {
	
	
		public static void main(String[] args) {
			
			Employee4 e1 = new Employee4(1, "kanak", 1000);
			
			Employee4 e2 = new Employee4(1, "kanak", 1000);
			
			String s = "java";
			
			System.out.println(e1.equals(e2));
			
			System.out.println(e1.hashCode());
			
			System.out.println(e2.hashCode());

		}

	



}
