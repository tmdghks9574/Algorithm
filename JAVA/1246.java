import java.util.Arrays;
import java.util.Scanner;

public class Main {
    static Scanner scan = new Scanner(System.in);
    public static void main(String[] argc) {
        int a,b;
        a = scan.nextInt();
        b = scan.nextInt();
        int[] arr = new int[b];
        for(int i = 0; i < b; i++)
            arr[i] = scan.nextInt();
        Arrays.sort(arr);
        int[] price = new int[b];
        int egg = 0;
        for(int i = 0; i < b; i++)
        {
            int tmp = a;
            for(int j = i; j < b; j++)
            {
                if(tmp > 0)
                {
                    price[i] += arr[i];
                    tmp--;
                }
                else
                    break;
            }
        }
        int max = price[0];
        int tmp = 0;
        for(int i = 1; i < b; i++)
        {
            if(price[i] > max)
            {
                tmp = i;
                max = price[i];
            }
        }
        System.out.println(arr[tmp] + " " + max);
    }
}