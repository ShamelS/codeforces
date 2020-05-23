import static java.lang.System.out;
import java.util.Scanner;
public class football {
	public static void main(String[] args) {
        Scanner f=new Scanner(System.in);
        String str=f.nextLine();
        int count1=0;
        int count2=0;
        //char[] a=str.toCharArray();
        for(int k=0; k< str.length();k++){
            String b=str.substring(k,k+1);
            
            if(Integer.parseInt(b) == 1){
                count1++;
                if(count1>=7 ||count2>=7)
                break;
                count2=0;
            }
            else if (Integer.parseInt(b) == 0){
                count2++;
                if(count1>=7 ||count2>=7)
                break;
                count1=0;
            }
        }

        

        if(count1>=7 || count2>=7)
            out.println("YES");
            else
            out.println("NO");

        
		
    }
}