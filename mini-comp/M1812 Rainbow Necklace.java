import java.util.*;
class Temp{
    public static void main(String[] args){
        int answer=0;
        Map<Integer,Boolean> store = new HashMap<Integer,Boolean>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] necklace = new int[n];
        int m = sc.nextInt();
        if(m>n){
            m=n;
        }
        for(int i=0;i<n;i++){
            necklace[i]=sc.nextInt();
            store.put(necklace[i],false);
        }
        for(int i=0;i<=n-m;i++){
            int temp=0;
            Map<Integer,Boolean> used = new HashMap<Integer,Boolean>(store);
            for(int j=i;j<i+m;j++){
                if(used.get(necklace[j])==false){
                    used.put(necklace[j],true);
                    temp=temp+1;
                }
                if(temp==m||temp==store.size()){
                    answer=temp;
                    break;
                }
            }
            if(temp>answer){
                answer=temp;
            }
        }
        System.out.printf("%d\n",answer);
        sc.close();
    }
}
