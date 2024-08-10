import java.io.*;
class Class1{
    
    String name,id,orgn,dept;
 
    void getData()throws IOException{
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        System.out.println("Enter your name: ");
        name = br.readLine();
        System.out.println("Enter your ID: ");
        id = br.readLine();
        System.out.println("Enter your Organisation: ");
        orgn = br.readLine();
        System.out.println("Enter your Department: ");
        dept = br.readLine();
    }

    void display(){
        System.out.println("\nDetails of the employee are: \nName: " + name);
        System.out.println("ID: " + id);
        System.out.println("Organisation: " + orgn);
        System.out.println("Department: " + dept);
    }
    public static void main(String args[])throws IOException{
        Class1 obj = new Class1();
        obj.getData();
        obj.display();        
    }
}
