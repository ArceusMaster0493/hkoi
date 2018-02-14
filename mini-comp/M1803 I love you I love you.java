//package com.fivefourdee.playground
import java.util.*;
class Temp{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        while(input.contains("I love you")){
            input=input.replaceAll("I love you","");
            while(input.contains(" .")||input.contains("  ")||input.contains("..")) {
                input=input.replaceAll(" \\.",".");
                input=input.replaceAll("  "," ");
                input=input.replaceAll("\\.\\.",".");
            }
        }
        System.out.printf("%s",input);
        sc.close();
    }
}
