import java.util.Scanner;
class mulTable{
    public static void main(String arg[]){
        Scanner reader = new Scanner(System.in);
        
        int num,i;
        System.out.println("Enter a number");
        num=reader.nextInt();
        
        for(i=1;i<=10;i++){
            System.out.println(num+"*"+i+"="+num*i);
        }
    }
}
