#include<iostream>
#include<string>
using namespace std;

const int MAX_SIZE = 100;

class FoodQueue{
    private:
        string items[MAX_SIZE];
        int front;
        int rear;
        int count;

    public:
        FoodQueue() {
            front = 0;
            rear = -1;
            count = 0;
        }

        bool isFull(){
            return count==MAX_SIZE;
        }

        bool isEmpty(){
            return count == 0;
        }

        void enQueue(string foodItem){
            if (isFull()) {
                cout<<"Queue is full"<<endl; 
                return;
            }
            rear = (rear + 1)%MAX_SIZE;
            items[rear] = foodItem;
            count++;
            cout<<"Added "<<foodItem<<endl;
        }

        void deQueue(){
            if (isEmpty()){
                cout<<"There is not food in Queue"<<endl;
                return;
            }
            front = (front + 1)% MAX_SIZE;
            count--;
        }

        void peek(){
            if(isEmpty()){
                cout<<"Queue is Empty";
                return;
            }
            cout<<"Next meal is "<<items[front]<<endl;
        }

        int size(){
            return count;
        }

}; //FoodQueue class

int main(){
    FoodQueue queue;
    int choise = 0;
    string fooditem;

    while(choise != 4){
    cout << "\n--- SDG 2: Zero Hunger Food Distribution (Class Queue) ---\n";
    cout << "1. Donate Food Meal\n";
    cout << "2. Distribute Meal to Next Person\n";
    cout << "3. Check Next Meal in Queue\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
    cin >> choise;

    switch (choise){
        case 1:
            cout<<"Enter the food Item:- ";
            cin>>fooditem;
            queue.enQueue(fooditem);
            break;
        case 2:
            queue.deQueue();
            break;
        case 3:
            queue.peek();
            break;
        case 4:
            break;
        default:
            cout<<"Wrong input"<<endl;
            break;
    }
    }

    return 0;
}
