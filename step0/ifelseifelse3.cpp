include<iostream>
using namespace std;

int main(){
        int points;

        cout<<"Enter Points: ";
        cin>>points;
        cout<<endl;
        cout<<"Your get ";
        if(points >=75 && points <= 100) {
                cout<<"Gold coin";
        }
        else if(points >=60 && points <= 79)
        {
                cout<<"Silver Coin";
        }
        else if(points >=40 && points <= 59)
        {
                cout<<" Bronze Coin";
        }
        else
        {
                cout<<"Nothing";
        }

        return 0;
}