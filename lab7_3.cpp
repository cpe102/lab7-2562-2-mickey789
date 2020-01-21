//status = "ONE-NIGHT-STAND";
#include<iostream>
using namespace std;

int main(){
    int A, T, M;
    string status;
    cout << "Age : ";
    cin >> A;
    if(A <= 20){
        cout << "How Tall : ";
        cin >> T;
        if(T < 160){
            status = "UNFRIEND";
        }else if(T < 175){
            status = "FRIEND";
        }else{
            cout << "Asset : ";
            cin >> M;
            if(M > 69000000){
                status = "MARRIED";
            }else{
                status = "ONE-NIGHT-STAND";
            }
        }
    }else if(A < 30){
        cout << "Asset : ";
        cin >> M;
        if(M > 10000000){
            status = "BEST FRIEND";
        }else{
            status = "UNFRIEND";
        }
    }else{
        status = "UNFRIEND";
    }
    
    cout << status;

    return 0;

}