#include <iostream>
using namespace std;

class Student{
	int   index_no;
	char  name[20];
	public:
  void get_details();
		void show_details();
};

void Student :: get_details(){
	cout<<"Enter number: ";
	cin>>index_no;
	cout<<"\nname: ";
	cin>>name;
}

void Student :: show_details()
{
	
	cout<<"Name      :  "<<name;
	cout<<"Index number" << index_no;
}


int main(){
    Student s1;
    s1.get_details();
   s1.show_details(); 
    return 0;
}

