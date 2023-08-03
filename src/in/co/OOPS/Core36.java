package in.co.OOPS;

import java.text.ParseException;
import java.text.SimpleDateFormat;


public class Core36 {
	
	public static void main(String[] args) throws ParseException {
	
		String str = "11/11/2022";
		
		SimpleDateFormat sdf = new SimpleDateFormat ("dd/MM/yyyy");
		
		Core35 c = new Core35();
		
		c.setId(10);
		
		c.setName ("Kanak");
		
		c.setDob (sdf.parse(str));
		
		System.out.println(c.getId());
		
		System.out.println(c.getName());
		
		System.out.println(sdf.format(c.getDob()));
	}
}
