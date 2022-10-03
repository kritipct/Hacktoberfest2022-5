import java.util.*;
class EvenFibonacci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a=0,b=2;
        int c=0,sum=0;
        for(int i=1;i<=n;i++){
            c=a+b;
            if(c%2==0){
                sum =4*b+a;
                a=b;
                b=sum; 
            }
        }
        System.out.println(a);
    }
}
