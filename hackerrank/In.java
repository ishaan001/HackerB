import java.util.*;
public class Main {
    public static void main(String args[]) {
          String str1, str2, s, str5, str4, str6;
       Scanner scan = new Scanner(System.in);

       System.out.print("Enter a String : ");
       str1 = scan.nextLine();
       s = scan.nextLine();
       str4 = scan.nextLine();
       str2 = str1.replaceAll("[aeiouAEIOU]", "#");
       // adding AEIOU to capture Vowels in uppercase.
       str5 = s.replaceAll("(?![aeiouAEIOU])[a-z]", "!").replaceAll("(?![aeiouAEIOU])[A-Z]", "!");
       str6 = str4.toUpperCase();
       System.out.println("All Vowels Removed Successfully");

       System.out.print(str2);
       System.out.print(str5);
       System.out.print(str6);
    }
}