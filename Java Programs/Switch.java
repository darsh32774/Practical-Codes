import java.util.Scanner;
class Switch{
    public static void main(String arg[]){
        Scanner reader = new Scanner(System.in);
        
        int choice=0,ans,num1,num2;
        while(choice!=5){
            System.out.println("\nEnter your choice\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit");
            choice=reader.nextInt();
        
            switch(choice){
                case 1:
                    System.out.println("\nEnter 2 numbers: ");
                    num1=reader.nextInt();
                    num2=reader.nextInt();
                    ans=num1+num2;
                    System.out.println(num1+" + "+num2+" = "+ans);
                    break;
                case 2:
                    System.out.println("\nEnter 2 numbers: ");
                    num1=reader.nextInt();
                    num2=reader.nextInt();
                    ans=num1-num2;
                    System.out.println(num1+" - "+num2+" = "+ans);
                    break;
                case 3:
                    System.out.println("\nEnter 2 numbers: ");
                    num1=reader.nextInt();
                    num2=reader.nextInt();
                    ans=num1*num2;
                    System.out.println(num1+" * "+num2+" = "+ans);
                    break;
                case 4:
                    System.out.println("\nEnter 2 numbers: ");
                    num1=reader.nextInt();
                    num2=reader.nextInt();
                    ans=num1/num2;
                    System.out.println(num1+" / "+num2+" = "+ans);
                    break;
                case 5:
                    break;
                default:
                    System.out.println("Wrong input.");
                    break;
            }
        }
    }
}
