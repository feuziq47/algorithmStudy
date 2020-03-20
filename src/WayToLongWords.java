import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class WayToLongWords {
    static int n;
    static String[] wordlist;
    public static void main(String[] args) throws IOException {
        Scanner sb=new Scanner(System.in);
        String p1= sb.nextLine();
        int n=Integer.parseInt(p1);
        String s[]=new String[n];
        int i=0;
        for(i=0;i<n;i++) {
            s[i]=sb.nextLine();
        }
        for(i=0;i<n;i++) {
            String c=s[i]+"";
            if((c.length())>10) {
                System.out.println(c.charAt(0)+""+(c.length()-2)+""+c.charAt(c.length()-1));
            }
            else   {
                System.out.println(s[i]);
            }
        }


    }
}
