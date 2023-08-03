package in.co.OOPS;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Stream;

public class TestStream {

	public static void main(String[] args) {

		List<String> list = new ArrayList();

		list.add("one");
		list.add("two");
		list.add("three");
		list.add("three");
		list.add("four");
		list.add("five");

		Stream<String> s = list.stream();

		s.map(e -> e.toUpperCase()).distinct().limit(3).forEach(e -> {
			System.out.println(e);
		});

	}

}
