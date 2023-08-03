package in.co.OOPS;

// explicity

public class Rectangle3 extends Shape3 {
	
	private int length = 0;
	private int width = 0;
	
	public Rectangle3(int length, int width, String color, int borderwidth) {
		super(color,borderwidth);
		this.length = length;
		this.width = width;
		System.out.println("rectangle 4 parameter constructor");
	}
	public int getLength() {
		return length;
	}
	public int getWidth() {
		return width;
	}

}
