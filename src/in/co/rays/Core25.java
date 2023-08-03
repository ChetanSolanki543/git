package in.co.rays;

import java.text.SimpleDateFormat;
import java.util.Date;

public class Core25 {

	public static void main(String[] args) {
		
		Date d =new Date();
		
		System.out.println(d);
		
		SimpleDateFormat sdf = new SimpleDateFormat("yyyy/mm/dd");
		
		String s = sdf.format(d);
		
		System.out.println(s);

	}

}
