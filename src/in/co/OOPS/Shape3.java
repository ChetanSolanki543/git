package in.co.OOPS;

public class Shape3 {
	
	private String color = null;
	private int borderWidth = 0;
	
	public Shape3 ( ) {
	System.out.println("Shape default const");}
	
	public Shape3 (String color, int borderWidth) {
		this ();
		this.color = color;
		this.borderWidth = borderWidth;}
	
	public String getColor () {
	return color;}
	
	public int getBorderWidth() {
	return borderWidth;}

}
