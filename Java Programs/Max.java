import java.io.*;
class Compp{
    
    int a,b,c,grt;
    
    void compare()throws IOException{
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        
        
        a = Integer.parseInt(br.readline());
        b = Integer.parseInt(br.readline());
        c = Integer.parseInt(br.readline());

        grt =         

        System.out.println("The greatest number is: " + grt); 
    }
}

class Max{
    public static void main(String args[])throws IOException{
        Compp obj = new Compp();
        obj.compare();
    }
}
