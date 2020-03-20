import java.util.Scanner;

public class Watermeleon {
    public static void main(String[] args){
        int w;
        Scanner sc = new Scanner(System.in);
        w = sc.nextInt();

        if(w<=2){
            System.out.println("NO");
        }else if(w % 2==0){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }

    }
}
