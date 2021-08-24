#include<iostream.h>
#include<fstream.h>



int main(void)
{
     ofstream fout;
     ifstream fin;


    //open file and read from file
     fin.open("test1.txt");      //open file to access information
     while (getline(fin,sent))   //The test condition is TRUE
                                                  // only while there is something to read.
     {                                           //Works nicely as an end of file check.
          cout<<sent<<endl;
     }
     fin.close( );
     return 0;
}
