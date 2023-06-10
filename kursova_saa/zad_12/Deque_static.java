//12.Да се проектира структура от данни дек - статична и динамична реализация. Да
//се реализират основните операции за работа с дек.

package zad_12;
class Deque_static {
    static final int MAX = 20;
    int arr[];
    int front;
    int rear;
    int size;

    public Deque_static(int size){

        arr = new int[MAX];
        front = -1;
        rear = 0;
        this.size = size;
    }


    // Checks whether Deque is full or not.
     public boolean isFull(){

        return ((front == 0 && rear == size - 1)
                || front == rear + 1);
    }

    // Checks whether Deque is empty or not.
    public boolean isEmpty() {
        return (front == -1); }

    // Inserts an element at front
    public void insertFront(int element)
    {
        // check whether Deque if  full or not
        if (isFull()) {
            System.out.println("Overflow");
            return;
        }

        // If deque is initially empty
        if (front == -1) {
            front = 0;
            rear = 0;
        }

        // front is at first position of deque
        else if (front == 0) {
            front = size - 1;

        }

        else {
            front = front - 1;
        }

        // insert current element into Deque
        arr[front] =element;
        System.out.printf("The added element at front is: %d%n",element);
    }

    // function to inset element at rear end
    // of Deque.
    public void insertRear(int element)
    {
        if (isFull()) {
            System.out.println("Overflow");
            return;
        }

        // If deque is initially empty
        if (front == -1) {
            front = 0;
            rear = 0;
        }

        // rear is at last position of queue
        else if (rear == size - 1) {
            rear = 0;
        }

            // increment rear end by '1'
        else {
            rear = rear + 1;
        }

        // insert current element into Deque
        arr[rear] = element;
        System.out.printf("The added element at rear is: %d%n",element);
    }

    // Deletes element at front end of Deque
    public void deleteFront()
    {
        // check whether Deque is empty or not
        if (isEmpty()) {
            System.out.println("Deque is empty");
            return;
        }

        // Deque has only one element
        if (front == rear) {
            System.out.printf("The deleted element is %d%n", arr[front]);
            front = -1;
            rear = -1;

        } else if (front == size - 1) {
            System.out.printf("The deleted element is %d%n", arr[front]);
            front = 0;
        } else {
            System.out.printf("The deleted element is %d%n", arr[front]);
            front = front + 1;
        }

    }

    // Delete element at rear end of Deque
    public void deleteRear()
    {
        if (isEmpty()) {
            System.out.println("Deque is empty");
            return;
        }

        // Deque has only one element
        if (front == rear) {
            System.out.printf("The deleted element is %d%n", arr[rear]);
            front = -1;
            rear = -1;

        } else if (rear == 0) {
            System.out.printf("The deleted element is %d%n", arr[rear]);
            rear = size - 1;
        } else {
            System.out.printf("The deleted element is %d%n", arr[rear]);
            rear = rear - 1;
        }
    }

    // Returns front element of Deque
    public void getFront()
    {
        // check whether Deque is empty or not
        if (isEmpty()) {
            System.out.println("Deque is empty");

        }else {
            System.out.printf("The value of the element at front is: %d%n", arr[front]);

        }

    }

    // function return rear element of Deque
    public void getRear()
    {
        // check whether Deque is empty or not
        if (isEmpty() || rear < 0) {
            System.out.println("Deque is empty");
        }else {
            System.out.printf("The value of the element at rear is %d%n", arr[rear]);
        }
    }

    public void display()
    {
        int i=front;
        System.out.println("Elements in a deque are: ");

        while(i!=rear)
        {
            System.out.printf("%d ",arr[i]);
            i=(i+1)%size;
        }
        System.out.printf("%d",arr[rear]);
        System.out.println();
    }





}
