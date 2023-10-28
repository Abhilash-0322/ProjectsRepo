import java.util.Scanner;
public class test{
    public static void main(String[] args){
        System.out.print("Enter your age");
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int age=Integer.parseInt(s);

        if (age>=18){
            System.out.println("You are an adult");
        }
        else{
            System.out.println("you are not an adult");
            System.out.println("Enter your Fav Food:");
            String food=sc.nextLine();
            if (food.equals("pizza")){
                System.out.println("Mine too");
            }
        }
    }
}