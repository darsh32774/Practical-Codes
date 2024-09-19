import java.util.Scanner;
class Palin{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the word: ");
		String word = sc.nextLine();
		
		int cnt = 0;
		for(int i=0;i<word.length();i++){
			int j = (word.length()-1) - i;
			
			if(word.charAt(i)!=word.charAt(j)){
				cnt++;
			}
		}
		
		if(cnt == 0){
			System.out.println("The word is a palindrome.");
		}
		else{
			System.out.println("The word is not a palindrome.");
		}
		
		sc.close();
	}
}
