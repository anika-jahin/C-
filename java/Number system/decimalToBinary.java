import java.util.Scanner;
public class decimalToBinary {
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the decimal number: ");
        int decimal;
        decimal=sc.nextInt();
        int ans=0; //binary number
        int power=1;//power of 10

        while(decimal>0)
        {
            int parity=decimal%2;
            ans += (parity*power);
            power *= 10;
            decimal /=2;
        }
        System.out.println(ans);
        sc.close();
    }
}
