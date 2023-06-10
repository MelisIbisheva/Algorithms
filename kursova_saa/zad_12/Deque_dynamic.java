//12.Да се проектира структура от данни дек - статична и динамична реализация. Да
//се реализират основните операции за работа с дек.
package zad_12;

import java.util.ArrayList;
import java.util.List;

public class Deque_dynamic {
    List<Integer> deque = new ArrayList<Integer>();
    public void insertFront(int element){
        System.out.println("Element added at front: "+ element);
        deque.add(0,element);
    }
    public void insertRear(int element){
//add element at the end of the deque
        System.out.println("Element added at rear: "+element);
        deque.add(element);
    }

    public void removeFront(){
        if(deque.isEmpty()){
            System.out.println("Deque is empty, unable to remove.");
            return;
        }

//remove an item from the beginning of the deque
        int rem = deque.remove(0);
        System.out.println("element removed from front: "+rem);
    }
    public void removeRear(){
        if(deque.isEmpty()){
            System.out.println("Deque is empty, unable to remove.");
            return;
        }

//remove an item from the beginning of the deque
        int rem = deque.remove(deque.size()-1);
        System.out.println("element removed from rear: "+rem);

    }
    public int peakFront(){
//gets the element from the front without removing it
        int item = deque.get(0);
        System.out.println("Element at first: "+item);
        return item;
    }



    public int peakRear(){
//gets the element from the rear without removing it
        int item = deque.get(deque.size()-1);
        System.out.println("Element at rear: "+item);
        return item;
    }
    public void display(){
        System.out.println("Elements in a deque are: ");
        for(Integer element: deque){
            System.out.print(element + " ");
        }
        System.out.println();
    }

    public static void main(String arg[]){
        Deque_dynamic deq = new Deque_dynamic();
        deq.insertFront(20);
        deq.insertRear(10);
        deq.display();
        deq.removeFront();
        deq.removeFront();
        deq.insertFront(15);
        deq.insertFront(9);
        deq.insertRear(25);
        deq.insertFront(34);
        deq.display();
        deq.removeRear();
        deq.display();
    }

}
