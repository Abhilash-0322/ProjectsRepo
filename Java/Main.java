import java.util.Scanner;
import java.util.Set;
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Type Your No:");
        int x=sc.nextInt();
        
        int count=1;
        while(x!=10){
            System.out.println("Type 10....");
            System.out.print("type your no:");
            x=sc.nextInt();
            count++;
        }
        System.out.println("you tried "+ count +" times");
    }
}