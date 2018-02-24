import java.util.*;
class MyClass {
    public static void main(String args[]) {
        Map<Long,Double> products = new HashMap<Long,Double>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            products.put(sc.nextLong(),sc.nextDouble());
        }
        int m = sc.nextInt();
        double sum=0.0;
        for(int i=0;i<m;i++){
            sum=sum+products.get(sc.nextLong());
        }
        System.out.printf("%.1f",sum);
    }
}
