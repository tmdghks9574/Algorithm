import java.util.Arrays;
import java.util.Scanner;

public class Study {
    static Scanner scan = new Scanner(System.in);
    public static void main(String[] argc) {
        String s1,s2;
        s1 = scan.nextLine();
        s2 = "";
        int cnt = 0;
        if(s1.equals("X"))
        {
            System.out.println("-1");
            return ;
        }
        for(int i = 0; i < s1.length(); i++)
        {
            if(s1.charAt(i) == 'X')
                cnt++;
            else if(s1.charAt(i) == '.')
            {
                if(cnt != 0 && cnt % 2 == 1)
                {
                    System.out.println("-1");
                    return ;
                }
                while(cnt > 0)
                {
                    if(cnt >= 4)
                    {
                        s2 += "AAAA";
                        cnt -= 4;
                    }
                    else if(cnt >= 2)
                    {
                        s2 += "BB";
                        cnt -= 2;
                    }
                }
                s2 += ".";
            }
        }
        if(cnt % 2 == 1)
        {
            System.out.println("-1");
            return ;
        }
        while(cnt > 0)
        {
            if(cnt >= 4)
            {
                s2 += "AAAA";
                cnt -= 4;
            }
            else if(cnt >= 2)
            {
                s2 += "BB";
                cnt -= 2;
            }
        }
        System.out.println(s2);
    }
}