/*
Let there are two files ‘abc.txt’ and ‘def.txt’. 
Write a C++ program which copies 20 bytes from 
the file ‘abc.txt’ and writes in the file ‘ghi.txt’ 
and then copies 20 bytes from the file ‘def.txt’
and writes in the file ‘ghi.txt’. The process 
goes on until both the files, abc.txt and def.txt, end.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in1("abc.txt", ios::binary);
    ifstream in2("def.txt", ios::binary);
    ofstream out("ghi.txt", ios::binary);

    char buffer[20];

    while (!in1.eof() && !in2.eof())
    {
        in1.read(buffer, 20);
        out.write(buffer, in1.gcount());
        in2.read(buffer, 20);
        out.write(buffer, in2.gcount());
    }

    if (in1.eof() && !in2.eof())
    {
        while (!in2.eof())
        {
            in2.read(buffer, 20);
            out.write(buffer, in2.gcount());
        }
    }
    else if (!in1.eof() && in2.eof())
    {
        while (!in1.eof())
        {
            in1.read(buffer, 20);
            out.write(buffer, in1.gcount());
        }
    }

    in1.close();
    in2.close();
    out.close();

    return 0;
}
