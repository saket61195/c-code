// #include <iostream>
// #include <fstream>
// #include <string>
 
// using namespace std;
 
// int main()
// {
//     // declaring an object of the type ifstream
//     ifstream in;
//     //declaring string variable st
//     string st;
//     //opening the text file into in
//     in.open("sample60.txt");
 
//     // giving output the string lines by storing in st until the file reaches the end of it
//     while (in.eof()==0) 
//     {
//         // using getline to fill the whole line in st
//         getline(in,st);
//         cout<<st<<endl;
//     }
//     return 0;
// }

#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    ifstream in;
    string str;
    in.open("test.txt");
    while(in.eof()==0)
    {
        getline(in,str);
        cout<<str<<endl;
    }
    in.close();

}
