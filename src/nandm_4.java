import java.util.Scanner;

public class nandm_4 {
    static int n,m;
    static StringBuilder sb;
    static int lastnum;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        sb = new StringBuilder();

        recur(0,"", 0);
        System.out.println(sb.toString().trim());

    }

    public static void recur(int num, String str,int lastnum){
        if(num==m){
            sb.append(str.trim() + "\n");
        }else{
            num++;
            for(int i=1; i<=n; i++){
                if(lastnum<=i){
                    recur(num, str+" "+i,i);
                }

            }
        }
    }

}
