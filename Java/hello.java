public class hello{
    public static void main(String[] args){
        System.out.println("hello world");
        System.out.println("hello");
        for (int a=0;a<=3;a++){
            System.out.println(a+" when doubled:"+doubler(a));
        }
    }
    public static int doubler(int a){
        int b=2;
        return b*a;
    }
}