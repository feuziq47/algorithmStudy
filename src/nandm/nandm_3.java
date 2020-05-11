import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.util.Scanner;
import java.util.Stack;

public class nandm_3 {
    static int N, M;
    static StringBuilder sb;
    static Stack<Integer> alreadyIn;

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        N=sc.nextInt();
        M=sc.nextInt();

        sb=new StringBuilder();
        alreadyIn = new Stack<>();

        recur(0, " ");
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        bw.write(sb.toString().trim());
        bw.close();
    }

    public static void recur(int applyNum, String makingStr){
        if(applyNum == M){
            sb.append(makingStr.trim() + "\n");
        }else{
            ++applyNum;
            for(int i=1; i<=N; i++){
                if(alreadyIn.empty() || i>= alreadyIn.peek()){
                    alreadyIn.push(i);
                    recur(applyNum, makingStr + " " + i);
                    alreadyIn.pop();
                }
            }
        }
    }
}
