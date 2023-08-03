package in.co.OOPS;
// Core41
public class TestShape {

	public static void main(String[] args) {
		
		Shape s = new Rectangle();
		Rectangle r = (Rectangle) s;
		
		r.setLength (10);
		
		r.setWidth(20);
		
		s.area();

	}

}
