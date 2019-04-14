#include<iostream>
#define MAX_STACK_SIZE 10
using namespace std;

struct Element {
    int top, data[MAX_STACK_SIZE];
}stack;


        void init() {
        stack.top==-1;
        }
        
        
        bool isEmpty() {
            if (stack.top==-1) {
                return 1;
            } else {
                return 0;
            }
        }
        
        
        bool isFull() {
            if (stack.top==MAX_STACK_SIZE-1) {
                return 1;
            } else {
                return 0;
            }
        }
        
        
        void push() {
            if (isFull()) {
                cout<<"Stack Penuh"<<endl;
            } else {
                cout<<"Masukkan Data : ";
                cin>>stack.data[stack.top];
                cout<<"Data "<<stack.data[stack.top]<<" masuk ke stack"<<endl;
            }
        }
        
        
        void pop() {
            if (isEmpty()) {
                cout<<"Data Kosong"<<endl;
            } else {
                cout<<"Data "<<stack.data[stack.top]<<" sudah dihapus"<<endl;
            }
        }
        
        
        void PrintStackList() {
            if (isEmpty()) {
                cout<<"Stack Kosong";
            } else {
                cout<<"Stack : ";
                for(int i=stack.top; i>=0; i--)
                cout<<stack.data[i]<<((i==0) ? "" : ",");
            }
        }
        
        
        void getTop() {
            if (isEmpty()) {
                cout<<"Stack Kosong";
            } else {
                cout<<"Element di atas sekarang adalah : "<<stack.data[stack.top];
                cout<<endl;
            }
        }


int main() {
    int pil;
    cout<<"\t||=====================================================||"<<endl;
    cout<<"\t||                                                     ||"<<endl;
    cout<<"\t||     ELSHINTA MILENIA (1857051012)                   ||"<<endl;
    cout<<"\t||                                                     ||"<<endl;
    cout<<"\t||=====================================================||"<<endl<<endl;
    cout<<"\t\t     STACK WITH LINKED LIST CONCEPT"<<endl<<endl;

    init() ;
    do {
        PrintStackList();
            cout<<"\n\n MENU :"<<endl;
            cout<<"1. Push"<<endl;
            cout<<"2. Pop"<<endl;
            cout<<"3. Get Top"<<endl;
            cout<<"4. Exit"<<endl;
            cout<<"\n Pilihan : ";cin>>pil;
            
        switch (pil) {
            case 1    : push();
                  break;
            case 2    : pop();
                  break;
            case 3    : getTop();
                  break;
            case 4    : cout<<"\nThankYou";
                  break;
            default : cout<<"\nPilihan Tidak Tersedia";
                  break;
        } 
    } while (pil!=4);
    return 0;
}
