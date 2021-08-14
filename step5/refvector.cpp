#include<iostream>
using namespace std;

struct Student {
   string name;
   string address;
   int id;
};

void print( Student &s){
    cout << s.name << " " << s.address << " " << s.id << endl;
    s.name="Bima";
}

int main(){
 struct Student s;
 s.name= "Ama";
 s.address ="Kandy";
 s.id= 40;
	cout << s.name << " " << s.address << " " << s.id << endl;
  print(s);
  cout << s.name << " " << s.address << " " << s.id << endl;
}
