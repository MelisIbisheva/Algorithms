//11.A и B са естествени числа от интервала [1…10001]. Да се състави рекурсивна
//функция, чрез която се извежда сумата на цифрите на всички числа от числовия
//интервал [A...B].
package zad_11;

import java.util.Scanner;

public class zad_11 {
    public static int sum(int a, int b ){
        if(b>=a){
            return b+sum(a,b-1);
        }else {
            return b;
        }
    }
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter 2 numbers A and B between 1 and 10001:");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int result = 0;

        if(a<1 || a>10001 || b<a || b>10001) {
            System.out.println("not correct numbers");
            return;
        }
        result = sum(a,b);
        System.out.printf("The result is : %d%n", result);

    }

}

