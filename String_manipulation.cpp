// String Manipulation

#include<bits/stdc++.h>
using namespace std;

void manipulation(string s)
{
        int count=2;
        while(count<s.length())
        {
                int i=0;
                while(i<s.length())
                {
                        cout<<s[i];
                        i+=count;
                }
                cout<<"\n";
                count*=2;
        }
        cout<<s[0];
}
int main()
{
        string s;
        cout<<"Enter String here: ";
        getline(cin,s);
        cout<<s;
        cout<<"\n";
        manipulation(s);
}


/*

Why you choose this language for Programming?

I have choose c++ Because it executes really fast and memory efficiently compared to most other languages.
C++ generated code tends to be most efficient. It is very compact.C++ provides low-level hardware access
making it great for writing device drivers and operating system kernels and embedded software.c++ is a 
object-oriented programming language.C++ supports different ways of programming like procedural, object-oriented, functional.

*/

