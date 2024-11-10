import java.util.Scanner;

class per_Today {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a size of arrya");
        int size = sc.nextInt();
        int[] arr = new int[size];
        int count = 0;

        for (int i = 0; i < size; i++) {
            System.out.println("Enter a element number" + (i + 1) + "=");
            arr[i] = sc.nextInt();

        }
        for (int i = 0; i < arr.length; i++) {
            boolean  result  =countPrime(arr[i]);
            if(result==true){
                System.out.println(arr[i]);
            }

        }

    }
    public static boolean countPrime(int n){
        for(int i=0 ;i<n;i++){
            if(n%2==0){
                return false;
            }
        }
        return true;

    }
}