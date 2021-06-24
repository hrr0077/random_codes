import java.util.Scanner;
public class handshake {
    int no_person;
    int result;

    int calHandshake(int N){
        if(N>0){
            result = (N-1) + calHandshake(N-1);
        }
        else{
            return 0;
        }
        return result;
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        handshake h = new handshake();
        System.out.println("Enter the Number of People Which shakes hand in a Party = ");
        h.no_person = sc.nextInt();
        System.out.println("Total Number of Handshakes = "+h.calHandshake(h.no_person));
    }
    
}
