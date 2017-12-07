import java.util.*;
class playground{
    public static void main(String args[]){
        String a,b;
        Scanner sc = new Scanner(System.in);
        a = sc.nextLine();
        b = sc.nextLine();
        a = a.toLowerCase(Locale.ENGLISH);
        b = b.toLowerCase(Locale.ENGLISH);
        int x = a.compareTo(b);
        if(x==0){
            System.out.printf("Equal\n");
        }else if(x>0){
            System.out.printf("Greater\n");
        }else{
            System.out.printf("Smaller\n");
        }
        sc.close();
    }
}
