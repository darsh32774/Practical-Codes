import Calculator1.*;
import java.util.Scanner;

class Main1{
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter two numbers: ");
		int num1 = sc.nextInt();
		int num2 = sc.nextInt();
		
		int choice = 0;
		
		while(choice != 5){
			System.out.println("Enter your choice: \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
			choice  = sc.nextInt();
			
			switch(choice){
				case 1:{
					Addition a = new Addition();
					System.out.println("The addition is: " + a.add(num1, num2));
					break;
				}
				case 2:{
					Subtraction s = new Subtraction();
					System.out.println("The subtraction is: " + s.sub(num1, num2));
					break;
				}
				case 3:{
					Multiplication m = new Multiplication();
					System.out.println("The multiplication is: " + m.mul(num1, num2));
					break;
				}
				case 4:{
					Division d = new Division();
					System.out.println("The division is: " + d.div(num1, num2));
					break;
				}
				case 5:
					break;
				default: 
					System.out.println("Invalid input.");
			}
		}
		
		
		sc.close();
		
	}
}
