// import java.util.*;
// // interface Test {
// //     public void testing(String name);
// // }



// class today {
//     public static void getBig(int arr[]) {
//         int big = arr[0];
    
//         for (int i = 0; i < arr.length; i++) {
//             if (arr[i] > big) {
//                 big = arr[i];
//             }
//             System.out.println(big);
//         };
        
//     }
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter a size of arrya");
//         int size = sc.nextInt();
//         int[] arr = new int[size];

//         for (int i = 0; i < size; i++) {
//             System.out.println("Enter a data number " + (i + 1) + ":");
//             arr[i] = sc.nextInt();
//         }

//         getBig(arr);
//     }
// }

import java.util.*;

class today{
    // public static void sortOrder(int arr[]){
       
    // }
    public static void main(String[] args)
    {
         Scanner sc =new Scanner(System.in);
         System.out.println("Enter a size of arrya");
         int size = sc.nextInt();
        int[] arr =new int [size];

        for(int i=0; i<size; i++){
            System.out.println("Enter a element number"+(i+1)+":");
            arr[i]=sc.nextInt();
        }
        for(int i=0 ; i<=arr.length; i++){
            if(arr[i]>arr[i+1]){
              int a=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=a;
              System.out.println(a);
            }
            else{
                System.out.println(arr[i]);
            }

      }
       
        }
}