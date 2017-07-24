#include<iostream>
#include<fstream>

using namespace std;

int main()
{
char name[20];

ifstream infile;
infile.open("file1",ios::app);
int p=infile.tellg();
cout<<p;
while(infile){
	infile>>name;
}
infile.close();

ofstream outfile;
outfile.open("file2");
outfile<<name;
outfile.close();
return 0;
}
