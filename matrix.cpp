#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Maths{
    public:
        int a,b,l,z,fact=1,numbers[10],p[4],q[4],c[4];
        string word;
        void getNumbers();
        void factorial();
        void add_matric(); 
        void Palindrome();        
};
void Maths::add_matric(){
    cout << "First Matrix: \n";
    for (size_t i=0;i<4;i++){
        cout << "Enter Number at position " << i+1 << " of First Matrix:";
        cin >> p[i];
    }
    cout << "Second Matrix: \n";
    for (size_t i=0;i<4;i++){
        cout << "Enter Number at position " << i+1 << " of Second Matrix:";
        cin >> q[i];
    }
    for (size_t i=0;i<4;i++){
        c[i]=p[i]+q[i];
    }
    cout << "New Matrix is:";
    for (size_t i=0;i<4;i++){
        cout << c[i]<<" ";
    }

}
void Maths::getNumbers(){      //Slope resolution of data
            cout << "Enter number: ";
            cin >> z;
            if(z>=0)
              a=z;
            else{
                cout << "\nEnter Only positive numbers \n" << endl;
                getNumbers();
            }  
        }
void Maths::factorial(){
    for(int i=1;i<=a;i++){              //for(int i=positiveNum;i<=2;i--){
        fact=fact*i;                    // Answer= Answer*1;    
    }
    cout << "Factorial is " << fact << endl;
}
void Maths::Palindrome(){
    cout << "Type the Word:";
    cin >> word;
    l=word.length();
    for (size_t i=0;i<l/2;i++){
        if (word[i] != word[word.length() - i - 1])
        cout << "No";
        else
        cout << "Yes";
    }
}

int main(){
    int method,b;
    
    
    cout << "What do you wish to do: \n";
    cout << "Factorial : 1 \n"; 
    cout << "Addition of 2*2 Matrix: 2 \n";
    cout << "Checking Palindrome: 3 \n";
    cin >> b;

    Maths m;
    switch (b){
    case 1:
        m.getNumbers();
        m.factorial();
        break;
    case 2:
        m.add_matric();
        break;
    case 3:
        m.Palindrome();
        break;
    default:
        break;
    }
    return 0;
}