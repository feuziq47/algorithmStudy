
import java.util.*;

public class nandm_9 {
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
        HashSet<Integer> tempSet = new HashSet<Integer>();
        for(int i=0; i<intArr.length; i++){
            tempSet.add(intArr[i]);
        }
        n= tempSet.size();
        Iterator it = tempSet.iterator();






        recur(0, "",0);
        System.out.println(sb.toString().trim());

    }

    public static void recur(int num, String str, int lastnum){
        if(num==m){
            sb.append(str.trim() + "\n");
        }else{
            num++;
            for(int i=0; i<n; i++){
                if(!isContain.contains(intArr[i])) {
                    isContain.push(intArr[i]);
                    if(intArr[i]>lastnum){
                        recur(num, str + " " + intArr[i], intArr[i]);
                    }
                    isContain.pop();

                }
            }
        }
    }

}
