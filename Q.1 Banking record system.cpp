/*Q.No. 1 Banking Record System.
File handling has been effectively used for each feature of this project
Operations
? Add Record:
? Show/List Data:
? Search Record:
? Edit Record:
? Delete Record:
*/

#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string name;
	string s2;
	cout<<" Add records";
	getline(cin, records);
	cout<<" list data";
	getline(cin,list data);
	cout<<" search records";
	getline(cin, search records);
	cout<<" edit records";
	getline(cin,edit records);


	ofstream out2("bank_record_system.txt")
	out2<<add records<<list data<<search records<<edit records;
	out2.close();
	ifstream in("bank_record_system.txt");
	getline(cin,s2)
	cout>>s2;
	
	string line;
	ofstream out;
	out.open("bank_record_system.txt", ios::app);
	cout<<"\nEnter data(type 'quit' to exit)";
	 
	 while(true)
	 {
	 	getline(cin,line);
	 	if(=='quit')
	 }
}
int main()
{
	
	return(0);
}