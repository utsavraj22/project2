import java.util.*;
public class strings{
    public static void print(String name){
        for(int i=0;i<name.length();i++){
            System.out.print(name.charAt(i)+" ");
        }
    }
    public static void main(String[] args) {
       String first_name="utsav";
       String last_name="raj";
       String full_name=first_name + " "+last_name;
       System.out.println(full_name);
       print(full_name);
    }
}