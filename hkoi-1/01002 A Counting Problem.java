import java.util.*;

class Temp {
    public static void main (String[] args){
        int i,x=0;
        Scanner scanner = new Scanner(System.in);
        String mainString = (String)scanner.nextLine();
        String subString = (String)scanner.nextLine();
        for(i=0;i<=mainString.length()-subString.length();i++) {
            /*System.out.println(mainString.substring(i, i+subString.length()).equals(subString));*/
            if(mainString.substring(i, i+subString.length()).equals(subString)) {
                x++;
            }
        }
        System.out.println(x);
        scanner.close();
    }
}
