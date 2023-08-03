package in.co.OOPS;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;

public class TestStream1 {
	public static void main(String[] args) {
	
			String[] arr = { "one", "two", "three", "four" };

			Stream<String> s = Arrays.stream(arr);

			s.forEach(e -> {
				System.out.println(e);
			});

		

	}


}
