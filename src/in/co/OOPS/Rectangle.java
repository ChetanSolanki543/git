package in.co.OOPS;

// Core40 

public class Rectangle extends Shape {

	private int length = 0;		// this are properties
	private int width = 0;
	
	public void setLength(int length) {
		this.length = length;
	}							// private length ko use krne ke liye use method me use kiya 
	public int getLength() {
	
		return length;}			// length ko public banane ke bad get method se return kiya
	
	public void setWidth(int width) {
	this.width = width;
	}
	public int getWidth() { 
		
		return width;
	}
	
	public void area() {
	
	int area = getLength() * getWidth();
	
	System.out.println("Rectangle area = "+area);
	
}
}
