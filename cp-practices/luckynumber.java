
import java.util.Scanner;


public class luckynumber {
    public static void main (String []args){
    Scanner f=new Scanner(System.in);
    int n=f.nextInt();
    System.out.println( n%4==0?"YES":n%7==0?"YES":(""+n).replaceAll("[47]","").length()==0?"YES":retlfac(n,1)==0?"YES":"NO");
}

public static int retlfac(int n, int n2){
    if (n2==n)
        return 999;
    if(n%n2==0 && (n2%4==0 || n%7==0 || (""+n2).replaceAll("[47]","").length()==0 ))
    return 0;
    else
    return retlfac(n,n2+1);

}
}

