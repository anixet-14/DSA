#include<iostream>
using namespace std;
int main(){
    
    cout<<"Question-1"<<endl;
    int a, b = 1;
    a=10;
    if(++a){ //Because ++a is true already, so if statement with b=1 will be executed only.
        cout<<b;
    }
    else{
        cout<<++b;
    }
    cout<<endl;

    cout<<"Question-2"<<endl;
    int c=1;
    int d=2;
    if(c-->0 && ++d>2){ //Incase of &&, both conditions on left and right is executed inorder to calculate if it's true or not. Hence both c and d value will be changed.
        cout<<"Stage1 - Inside If"<<endl;
    } else {
        cout<<"Stage2 - Inside Else"<<endl;
    }
    cout<<c<<" "<<d<<endl;   
    
    cout<<"Question-3"<<endl;
    int e=1;
    int f=2;
    if(e-->0 || ++f>2){ //Incase of ||(or), as soon as any condition is true, rest left conditions are not checked, Hence only e value will be changed.
        cout<<"Stage1 - Inside If"<<endl;
    } else {
        cout<<"Stage2 - Inside Else"<<endl;
    }
    cout<<e<<" "<<f<<endl;

    cout<<"Question-4"<<endl;
    int number = 3;
    cout<<(25*(++number))<<endl;

    cout<<"Question-5"<<endl;
    int g = 1;
    int h = g++;
    int i = ++g;
    cout<<h<<" "<<i<<endl;


    cout<<"Question - 6"<<endl;
    for (int i=0; i<=5; i++){
        cout<< i <<" ";
    }
    cout<<endl;

    cout<<"Question - 7"<<endl;
    for (int i=0; i<=15; i+=2){
        cout<<i<<" ";
        if(i&1){
            continue; //While i is odd, hence i&1 is true, continue will be executed, hence i++ will be skipped.
        }
        i++;
    }
    cout<<endl;

    cout<<"Question - 8"<<endl;
    for (int i = 0; i<5; i++){
        for(int j = i; j<=5; j++){
            cout<<i<<" "<<j<<endl;
        }
    }


    cout<<"Question - 9"<<endl;
    for (int i = 0; i<5; i++){
        for (int j = i; j<=5; j++){
            if(i+j==10){
                break;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}
