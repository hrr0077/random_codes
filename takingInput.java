import java.util.Scanner;

class Ops {
    int number;
    int sum;
}

class takingInput{
    public static void main(String[] args){
        Ops o = new Ops();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Number to Square = ");
        o.number = sc.nextInt();
        sc.close();
        o.sum = o.number * o.number;
        System.out.println("Result = "+o.sum);

    }
}
