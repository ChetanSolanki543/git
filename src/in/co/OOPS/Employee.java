package in.co.OOPS;

public class Employee {
	
	private int id = 0;
	private String name = null;
	private int salary = 0;
	
	public Employee(int id, String name, int salary) {
	this.id = id;
	this.name = name;
	this.salary = salary;

	}
	public int getId() {
	return id;}
	
	public String getName() {
	return name;}
	
	public int getSalary () {
	return salary;}
	
	@Override
    public String toString() {
	return id +" "+ name+" " + salary;}

}
