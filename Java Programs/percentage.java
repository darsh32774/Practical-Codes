import java.util.Scanner;
class percentage{
    public static void main(String arg[]){
        Scanner reader = new Scanner(System.in);
        
        int grade;

        System.out.println("Enter percentage: ");
        grade = reader.nextInt();

        if(grade>90)
            System.out.println("Grade: A");
        else if((grade>80)&&(grade<=90))
            System.out.println("Grade: B");
        else if((grade>70)&&(grade<=80))
            System.out.println("Grade: C");
        else if((grade>60)&&(grade<=70))
            System.out.println("Grade: D");
        else if(grade<=60)
            System.out.println("Grade: F");    
    }
}
