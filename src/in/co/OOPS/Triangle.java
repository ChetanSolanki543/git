package in.co.OOPS;

// Core 42

public class Triangle extends Shape {
	
	private int base = 0;
	private int height = 0;
	
	public int getHeight() {
		return height;
	}
	public void setHeight(int height) {
		this.height = height;
	}
	public int getBase() {
		return base;
	}
	public void setBase(int base) {
		this.base = base;
	}
	public void area() {
		double area = (getBase()*getHeight())/2;
		System.out.println(area);
	}

}
