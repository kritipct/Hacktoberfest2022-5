import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int f= factorial(n);
        System.out.println(f);
    }

    public static int factorial(int n){
       if(n==1)
       return 1;

       int f1=factorial(n-1);
       int fn= n*f1;
       return fn;
       
        
    }

}