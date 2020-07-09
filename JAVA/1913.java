import java.util.Arrays;
import java.util.Scanner;

public class Study {
    static Scanner scan = new Scanner(System.in);
    public static void main(String[] argc) {
        int n, m;
        n = scan.nextInt();
        m = scan.nextInt();
        int arr[][] = new int[1001][1001];
        int tmp = 1;
        int xpos = (n + 1) / 2;
        int ypos = (n + 1) / 2;
        int k = 1;
        arr[xpos][ypos] = k;
        k++;
        int ans1 = 0,ans2 = 0;
        while (k < n*n) {
            if (tmp % 2 == 1) {
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < tmp; j++) {
                        if (i == 0) {
                            xpos--;
                            arr[xpos][ypos] = k;
                            k++;
                        } else {
                            ypos++;
                            arr[xpos][ypos] = k;
                            k++;
                        }
                        if(arr[xpos][ypos] == m)
                        {
                            ans1 = xpos;
                            ans2 = ypos;
                        }
                    }
                } tmp++;
            }
            else {
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < tmp; j++) {
                        if (i == 0) {
                            xpos++;
                            arr[xpos][ypos] = k;
                            k++;
                        } else {
                            ypos--;
                            arr[xpos][ypos] = k;
                            k++;
                        }
                        if(arr[xpos][ypos] == m)
                        {
                            ans1 = xpos;
                            ans2 = ypos;
                        }
                    }
                } tmp++;
            }

        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
                System.out.print(arr[i][j] + " ");
            System.out.println();
        }
        System.out.println(ans1 + " " + ans2);
    }
}