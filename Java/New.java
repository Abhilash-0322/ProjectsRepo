import java.util.Set;
import java.util.Map;
import java.util.Arrays;
import java.util.HashMap;
import java.util.TreeSet;
import java.util.LinkedHashSet;
import java.util.TreeMap;

public class New{
    
    public static void main(String[] args) {
    int[] x={-99,5,6,3,2,1,7};
    Arrays.sort(x, 3,6);
    for(int i:x)
        {
            System.out.print(i);
            if(x[i]<5){
                System.out.println(",");
                }
        }
    }
}