import java.util.Scanner;

public class IntenseHeat {
    static double[] a= new double[5001];
    static double[] psum = new double[5001];
    static int n,k;
    static double ans;

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        k = sc.nextInt();

        for(int i=0; i<n; i++){
            a[i] = sc.nextInt();
        }

        for(int i=1; i<=n; i++){
            psum[i] = psum[i-1]+a[i-1];
        }
        ans = 0;
        for(int r=1; r<=n; r++){
            for(int l=r; l<=n; l++){
                if(l-r+1 <k){
                    continue;
                }else{
                    ans = Double.max(ans,(double)(psum[l]-psum[r-1])/(l-r+1));
                }
            }
        }
        System.out.println(String.format("%.15f",(ans)));
    }
}
