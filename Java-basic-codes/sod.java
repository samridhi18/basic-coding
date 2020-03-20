import java.util.*;

class Main{
  public static int sum(int x){
    if((x/10) == 0){
      return x;
    }
    else{
      return sum(x/10)+(x%10);
    }
  }

  public static void main(String[] args){
    Scanner s = new Scanner(System.in);
    int x;
    x = s.nextInt();
    System.out.println(sum(x));
  }
}