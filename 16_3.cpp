#include<bits/stdc++.h>
using namespace std;

class A{
    int x;
public:
    A(){
        x = 0;
    }

    A(int a){
        x = a;
    }

    A operator ++(int){
        A res;
        res.x = x++;
        return res;
    }

    A operator ++(){
        A res;
        res.x = ++x;
        return res;
    }

    A operator --(int){
        A res;
        res.x = x--;
        return res;
    }

    A operator --(){
        A res;
        res.x = --x;
        return res;
    }

    friend A operator -(A);

    int getval(){
        return x;
    }
};

A operator -(A res){
    res.x = (-1) * res.x;
    return res;
}

int main(){
    int n, ch;
    cout << "Enter no: ";
    cin >> n;
    A a1(n), a2;
    do{
        cout << "\n\tMENU:\n1. ++n\n2. n++\n3. --n\n4. n--\n5. -n\n6. Exit\nEnter your choice: ";
        cin >> ch;
        switch(ch){
        case 1:
            a2 = ++a1;
            cout << "\nBefore execution: " << a2.getval() << "\nAfter execution: " << a1.getval();
            break;
        case 2:
            a2 = a1++;
            cout << "\nBefore execution: " << a2.getval() << "\nAfter execution: " << a1.getval();
            break;
        case 3:
            a2 = --a1;
            cout << "\nBefore execution: " << a2.getval() << "\nAfter execution: " << a1.getval();
            break;
        case 4:
            a2 = a1--;
            cout << "\nBefore execution: " << a2.getval() << "\nAfter execution: " << a1.getval();
            break;
        case 5:
            a2 = -a1;
            cout << "\nBefore execution: " << a2.getval() << "\nAfter execution: " << a1.getval();
            break;
        case 6:
            cout << "EXIT";
            break;
        default:
            cout << "Invalid choice!!!!\n";
        }
    }while(ch != 6);
    return 0;
}
