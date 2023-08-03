package in.co.rays;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Core26 {

	public static void main(String[] args) throws ParseException{
		
		String s = "01/01/2001";
		
		SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
		
		Date d = sdf.parse(s);
		
		System.out.println(d);

	}

}
