import java.util.Scanner;

public class DivisibleBy7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int temp = num;

        while (temp > 70) {
            int lastDigit = temp % 10;
            temp = temp / 10 - 2 * lastDigit;
        }

        if (temp % 7 == 0)
            System.out.println(num + " is divisible by 7");
        else
            System.out.println(num + " is not divisible by 7");
    }
}
