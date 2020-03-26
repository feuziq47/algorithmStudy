import java.util.Scanner;

public class NumberOfWays {
    // 배열을 세 부분으로 나누어서 세 부분의 합이 동일할 수 있는 경우의 수를 모두 구하시오.
    static int[] a = new int[500005];
    static long[] p = new long[500005];
    static int[] toTheRight = new int[500005];
    static long ans;
    static long sum, sumd3;

    public static void main(String[] args) {
        int i, j, n;
        ans = 0;


        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for (i = 1; i <= n; i++) {
            a[i] = sc.nextInt();
        }
        p[0] = 0;
        for (i = 1; i <= n; i++) {
            p[i] = p[i - 1] + a[i];
        }
        sum = p[n];
        if (sum % 3 != 0) {
            ans = 0;
        } else {
            sumd3 = sum / 3;
            int k = 0;
            for (j = n - 1; j >= 2; j--) {
                if (p[j] == sumd3 * 2) k++;
                toTheRight[j] = k;
            }
            for (i = n - 2; i >= 1; i--) {
                if (p[i] == sumd3) {
                    ans += toTheRight[i + 1];
                }
            }

        }
        System.out.println(ans);
    }
}
