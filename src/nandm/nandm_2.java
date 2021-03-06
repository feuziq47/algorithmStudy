import java.util.Scanner;
import java.util.Stack;

public class nandm_2 {
    static int n;
    static int m;
    static int lastnum;
    static StringBuilder sb;
    static Stack<Integer> in;

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        sb = new StringBuilder();

        recur(0,"", 0);

        System.out.println(sb.toString().trim());
    }
    public static void recur(int num, String str, int lastnum){
        if(num==m){
            sb.append(str.trim()+"\n");
        }else{
            num++;
            for(int i=1; i<=n; i++){
                if(lastnum<i){
                    recur(num,str+" "+i, i);
                }
            }
        }
    }

}
