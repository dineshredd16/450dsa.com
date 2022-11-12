import java.util.*;

public class ReverseAnArray {
  public static void main(String[] args){
    Scanner readUser = new Scanner(System.in);
    System.out.println("enter the number of test cases: ");
    int t = readUser.nextInt();
    for(int i=0; i<t; i++){
      System.out.println("enter the size of array: ");
      int n = readUser.nextInt();
      int a[] = new int[n];
      for (int x=0; x<n; x++){
        a[x] = readUser.nextInt();
      }
      int y = n-1;
      for (int x=0; x<n/2; x++){
        int temp = a[x];
        a[x] = a[y];
        a[y] = temp;
        y--;
      }
      for (int x=0; x<n; x++){
        System.out.print(a[x] + " ");
      }
      System.out.println(" ");
    }
  }
}
