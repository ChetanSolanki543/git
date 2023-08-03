package in.co.array;

//prg to print using 3D array with nested for loop

public class Core20 {

	public static void main(String[] args) {
		
		int [][][]table = new int [10][10][10];
	
		for (int i = 0; i < table.length; i++) {
			
			for (int j = 0; j < table.length; j++) {
				
				for (int k = 0; k < table.length; k++) {
					
					table[i][j][k] = (i+1)*(j+1)*(k+1);
					
					System.out.print(table[i][j][k]+"\t");
					
				}
				
			}	System.out.println();
			System.out.println();
			
		}
		

	}

}
