//package com.fivefourdee.playground;
import java.util.*;
class Temp{
    int pair1,pair2;
    long mi;
    public Temp(int pair1,int pair2) {
        this.pair1=pair1;
        this.pair2=pair2;
        this.mi=pair1*pair1+pair2*pair2;
    }
    long getMi() {
        return this.mi;
    }
    int getPair1() {
        return pair1;
    }
    int getPair2() {
        return pair2;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        Temp[] things = new Temp[N];
        long[] sort = new long[N];
        for(int i=0;i<N;i++) {
            things[i]=new Temp(sc.nextInt(),sc.nextInt());
            sort[i]=things[i].getMi();
        }
        Arrays.sort(sort);
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) {
                if(things[j].getMi()==sort[i]) {
                    System.out.printf("%d %d\n",things[j].getPair1(),things[j].getPair2());
                    break;
                }
            }
        }
        sc.close();
    }
}
