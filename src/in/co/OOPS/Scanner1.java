package in.co.OOPS;

import java.util.Scanner;

public class Scanner1 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Name : " );
		String name = sc.nextLine();
		
		System.out.println("Empid : ");
		int empid = sc.nextInt();
		
		System.out.println("Salary : ");
		float salary = sc.nextFloat();
		
		System.out.println(name+" "+empid+" "+salary+" ");
	}

	}


