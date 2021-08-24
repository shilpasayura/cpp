#include <iostream>
using namespace std;

int main(){
    int T;
    int f=0;
    int l=0;
    int i=0;
    //cin>>T;
    T=1;
    int A;
    for (int i =1 ; i <= T; i++) {
        cin>>A;
        l=A % 10;
        cout << l << endl;
        A=A/10;
        f=l;
	while (A >0){
	    f=A % 10;
	    cout << A << " " << f << endl;
        A=A/10;
	}

	cout << f + l << endl;
    }
    return 0;
}
