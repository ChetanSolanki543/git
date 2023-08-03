package in.co.OOPS;

// Parent Class

public class Core37 {

		private String color = null;
		private int borderWidth = 0;
		
		
		// this is constructor
		public Core37(String color, int borderWidth) {
		
		System.out.println("two param constructor");
		
		this.color = color;
		
		this.borderWidth = borderWidth;}
		
		
		public void setColor (String color) {
			
			this.color = color;}
		
		
		public String getColor () {
		
			return color;}
		
		
		public void setBorderwidth(int borderWidth) {
			
			this.borderWidth=borderWidth;}
		
		
		public int getBorderwidth() {
			
			return borderWidth;}

	}


