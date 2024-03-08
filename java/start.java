// import java.util.Scanner;

// public class start {
//     public static void main(String[] args) {
//         // Scanner sc = new Scanner(System.in);
//         // String sk = sc. nextLine();
//         // System.out.println(sk);
        
//     }
// }


// import java.io.*;
import java.util.*;
// import java.text.*;
// import java.math.*;
// import java.util.regex.*;

 class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        
        String Input = new StringBuilder()
        .append("magic\tproject\n")
        .append("     database: oracle\n")
        .append("dependencies:\n")
        .append("spring:foo:bar\n")
        .append("\n")  // Note that the input ends with a blank line
        .toString();
        Scanner sc = new Scanner(Input);

        // FileReader fr=new FileReader("D:\\testout.txt");    
        // BufferedReader sc= new BufferedReader(fr);
        // bufferreader class never accept the hasnextline()
        
         int a =0;
    while(sc.hasNext() ){
        String f = sc.next();
        a++;
        System.out.println(a+" "+f);
    }
    
sc.close();
}
}