import java.util.*;
class Temp{
    static int[] arr = new int[500001];
    public static void main(String[] args){
        Temp temp = new Temp();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(),difference = sc.nextInt(),count=n,min=2000000000,max=-2000000000;
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
            if(arr[i]<min){
                min=arr[i];
            }else if(arr[i]>max){
                max=arr[i];
            }
        }
        for(int width=1;width<n-1;width++){
            for(int start=0;start<n-width;start++){
                int end=start+width;
                if(temp.testAllPairs(start,end,difference)==true){
                    count=count+1;/*
                    System.out.printf("True ");*/
                }/*else{
                    System.out.printf("False ");
                }*/
            }
        }
        if(max-min<=difference||max-min>=difference*-1){
            count=count+1;
        }
        System.out.printf("%d\n",count);
        sc.close();
    }
    public boolean testAllPairs(int start,int end,int difference){
        for(int i=start;i<end;i++){
            for(int j=i+1;j<end+1;j++){
                if(arr[i]-arr[j]>difference||arr[i]-arr[j]<difference*-1){
                    return false;
                }
            }
        }
        return true;
    }
}
