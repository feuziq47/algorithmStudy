import java.util.Scanner;
import java.util.Stack;

public class nandm_8 {
    static int n,m;
    static StringBuffer sb;
    static int[] intArr;
    static Stack<Integer> isContain;

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        sb= new StringBuffer();
        isContain = new Stack<>();
        intArr = new int[n];
        for(int i=0; i<n; i++){
            intArr[i] = sc.nextInt();
        }

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(intArr[i]>intArr[j]){
                    int temp = intArr[i];
                    intArr[i]= intArr[j];
                    intArr[j]= temp;
                }
            }
        }

        recur(0, "",0);
        System.out.println(sb.toString().trim());

    }

    public static void recur(int num, String str, int lastnum){
        if(num==m){
            sb.append(str.trim() + "\n");
        }else{
            num++;
            for(int i=0; i<n; i++){
                if(intArr[i]>=lastnum){
                    recur(num, str + " " + intArr[i], intArr[i]);
                }

            }
        }
    }

}
