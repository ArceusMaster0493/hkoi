import java.util.*;
class playground{
    public static void main(String args[]){
        Map<Integer,Boolean> sieve = new HashMap<Integer,Boolean>();
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int i=2;i<N+1;i++){
            sieve.put(i,true);
        }
        for(int i=2;i<N+1;i++){
            if(sieve.get(i)==true){
                int per = i;
                for(int j=i;j<N+1;j+per){
                    sieve.put(j,false);
                }
                System.out.printf(sieve.get(i));
            }
        }
        sc.close();
    }
}

// mush's

/*

import java.util.*;
public class playground{
    public static void main(String args[]){
        Map<Integer,Boolean> sieve = new HashMap<Integer,Boolean>();
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int i=3;i<N+1;i+=2){
            sieve.put(i,true);
        }
        System.out.printf("2\n");
        
        for(int i=3;i<N+1&&i<1000;i+=2){
            if(sieve.get(i)==true){
                for(int j=i*i;j<N+1;j+=2*i){
                    sieve.put(j,false);
                }
                System.out.println(i);
            }
        }
        for(int i=1001;i<N;i+=4){
            if(sieve.get(i)==true){
                System.out.println(i);
            }
            i+=2;
             if(sieve.get(i)==true){
                System.out.println(i);
            }
        }
        sc.close();
    }
}
