import java.io.BufferedReader;
import java.util.*;
import java.math.*;
import java.io.*;

public class Study {

    private static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static void main(String[] argc) throws IOException {
        int T;
        T = Integer.parseInt(br.readLine().trim());
        while(T > 0)
        {
            String inputStr = br.readLine();
            inputStr = br.readLine();

            StringTokenizer st = new StringTokenizer(inputStr);

            int arr1Size = Integer.parseInt(st.nextToken());
            int[] arr1 = new int[arr1Size];

            int arr2Size = Integer.parseInt(st.nextToken());
            int[] arr2 = new int[arr2Size];

            st = new StringTokenizer(br.readLine());
            //while(st.hasMoreTokens()){
            //    int i = Integer.parseInt(st.nextToken());
            //}

            for(int i=0; i<arr1Size; ++i){
                arr1[i] = Integer.parseInt(st.nextToken());
            }
            st = new StringTokenizer(br.readLine());
            for(int i=0; i<arr2Size; ++i){
                arr2[i] = Integer.parseInt(st.nextToken());
            }

            Arrays.sort(arr1);
            Arrays.sort(arr2);
            int i = 0, j = 0;
            while(i != arr1Size && j != arr2Size)
            {
                if(arr1[i] > arr2[j])
                    j++;
                else if(arr1[i] < arr2[j])
                    i++;
                else
                    j++;
            }
            if(i == arr1Size)
                System.out.println("B");
            else if(j == arr2Size)
                System.out.println("S");
            else
                System.out.println("C");
            T--;
        }
    }
}