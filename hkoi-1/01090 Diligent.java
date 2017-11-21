//package com.fivefourdee.playground;

import java.util.*;

class Temp {
    public static void main (String[] args){
        Scanner scanner = new Scanner(System.in);
        Map<Integer, Boolean> map = new HashMap<>();
        int n = scanner.nextInt();
        for(int i=0;i<n;i++) {
            int x = scanner.nextInt();
            if(!map.getOrDefault(x,false)) {
                System.out.println("in");
                map.put(x, true);
            }else{
                System.out.println("out");
                map.put(x, false);
            };
        }
        scanner.close();
    }
}
