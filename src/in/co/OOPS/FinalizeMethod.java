package in.co.OOPS;

public class FinalizeMethod {

	public static void main(String[] args){
		FinalizeMethod ob = new FinalizeMethod();
		System.out.println(ob.hashCode());
		ob = null;
		System.gc();
	    System.out.println(ob);
	}

	@Override
	protected void finalize(){

		System.out.println("in finalize");

	}

}
