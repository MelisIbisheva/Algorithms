package zad_12;

public class Main {
    public static void main(String[] args) {

        Deque_static dq = new Deque_static(5);

        dq.insertRear(5);
        dq.insertRear(10);
        dq.insertFront(20);
        dq.display();
        dq.deleteRear();
        dq.insertFront(15);
        dq.display();
        dq.getFront();
        dq.getRear();


    }
}