package in.co.OOPS;

// Core43

public class Circle extends Shape {
	
	private int radius = 0;

	public int getRadius() {
		return radius;
	}

	public void setRadius(int radius) {
		this.radius = radius;
	}
	public void area() {
		double area = 3.14 * getRadius() * getRadius();
		System.out.println(area);
		
		
	}
}
