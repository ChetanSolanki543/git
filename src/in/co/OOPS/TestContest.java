package in.co.OOPS;

import java.util.ArrayList;
import java.util.Collections;
import java.util.stream.Collectors;

public class TestContest {

	public static void main(String[] args) {

		ArrayList<Contestant> list = new ArrayList<Contestant>();
		
		list.add(new Contestant("Ram", "9912345678"));
		list.add(new Contestant("Shyam", "9912342222"));
		list.add(new Contestant("Ajay", "9912345770"));
		list.add(new Contestant("Vijay", "9912345678"));
		list.add(new Contestant("Jay", "9912345888"));
		list.add(new Contestant("Pappu", "9912345111"));
		list.add(new Contestant("InvalidNO", "11"));

		System.out.println("Winners !!");

		list.stream().map(f -> f.phone).filter(f -> f.length() == 10).distinct()
				.collect(Collectors.collectingAndThen(Collectors.toList(), f -> {
					Collections.shuffle(f);
					return f.stream();
					})).limit(3).forEach(f -> {
						System.out.println(f);
					});

	}
}

	class Contestant {
		public String name = null;
		public String phone = null;

		public Contestant(String n, String p) {
			name = n;
			phone = p;
		}
	


}
/*	map = source(input)
	filter = intermediate operations
	forEach = result(output)
	
	*/
