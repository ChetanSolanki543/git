package in.co.OOPS;

	class Core27 {

	public int sum (int a,int b)
	{
		int c = a+b;
		
		System.out.println("sum = "+c);
		
		return c;
	}
	
	public int mult(int a,int b) 
	{
		int c = a*b;
		
		System.out.println("Multiply = "+c);
		
		return c;
	}
	
	public void max(int a,int b)
	{
		if(a>b)
		{
			System.out.println("a is greater ");
		}
		else 
		{
			System.out.println("b is greater ");	
		}
	}
	}


