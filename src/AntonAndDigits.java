import java.util.Scanner;

public class AntonAndDigits {
    public static void main(String[] args){
        int two,three,five,six,tfs;
        long ans;
        Scanner sc = new Scanner(System.in);
        two = sc.nextInt();
        three = sc.nextInt();
        five = sc.nextInt();
        six = sc.nextInt();
        if(six<five){
           five=six;
        }
        tfs=five;
        if(two<five){
            tfs=two;
        }
        ans= (long) 256*tfs;
        two-=tfs;
        if(three<two){
            two=three;
        }
        ans += (long) 32*two;
        System.out.println(ans);
    }
}
