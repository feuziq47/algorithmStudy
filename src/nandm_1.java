import java.util.Scanner;
import java.util.Stack;

public class nandm_1 {
    static int n,m;
    static StringBuilder sb;
    static Stack<Integer> in;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        m=sc.nextInt();
        sb = new StringBuilder();
        in = new Stack<>();

        recur(0,"");
        System.out.println(sb.toString().trim());
    }

    public static void recur(int num, String str){
        if(num==m){
            sb.append(str.trim() + "\n");
        }
        else{
            ++num;
            for(int i=1; i<=n; i++){
                if(!in.contains(i)){
                    in.push(i);
                    recur(num, str+" "+i);
                    in.pop();
                }

            }
        }
    }

}
