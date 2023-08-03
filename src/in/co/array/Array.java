package in.co.array;

public class Array {

	public static void main(String[] args) {
		
		int []arr = {11,23,45,67,89};
		
		int sum = 0;
		
		for(int i = 0; i<arr.length;i++) 
		{
			System.out.print(arr[i]+"-");
			
			sum = sum+arr[i];
			
		}System.out.println();
		System.out.println("sum = "+sum);
		
		

	}

}
