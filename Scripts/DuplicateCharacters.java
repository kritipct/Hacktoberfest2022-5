
import java.util.*;
public class DuplicateCharacters
{
	public static void main(String[] args) {
		
	Scanner sc = new Scanner(System.in);
	String s1 = sc.nextLine();
	String lower = s1.toLowerCase();
	String s2 = "";
	int l = lower.length();
	char ch[] = lower.toCharArray();
	for(int i=0;i<l;i++){//0<8//s
	    for(int j=i+1;j<l;j++){//s
	        if(ch[i]==ch[j]){//s
	            if(s2.indexOf(ch[j])==-1){//
	              s2 = s2 +ch[j];//s
	           }
	        }
	    }
	 }
	   System.out.println(s2);
	}
	
}
