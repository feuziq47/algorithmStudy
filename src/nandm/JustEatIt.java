import java.util.Scanner;

public class JustEatIt {
    static int t,n;
    static int[] a;

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        t=sc.nextInt();

        for(int j=t; j>0;j--){
            n=sc.nextInt();
            a= new int[n];
            for(int i=0; i<n; i++){
                a[i]=sc.nextInt();
            }
            if(solve()){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }

        }




    }

    public static boolean solve(){
        long sum=0;
        for(int i=0; i<n; i++){
            sum += a[i];
            if(sum<=0){return false;}
        }
        sum=0;
        for(int i=n-1; i>=0; i--){
            sum+=a[i];
            if(sum<=0){ return false;}
        }
        return true;
    }

}
