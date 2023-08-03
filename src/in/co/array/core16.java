package in.co.array;

// prg to print Second largest value

public class core16 {

	public static void main(String[] args) {
		
		int [] arr= {11,13,1,5,8,12};
		
		int a=0;
		int b=0;
		
		for(int i=0; i<arr.length; i++) {
			
			if(arr[i]>b) {
				
				a=b;
				b=arr[i];
			}
			
			if(arr[i]<b && arr[i]>a) {
				
				a=arr[i];
			}
		}
			System.out.println(a);
		

	}

}
