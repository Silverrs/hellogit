#include <iostream>
#include "Books.h"
#include "Source.cpp"
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int linearSearch(auto data, auto key){
	for(int i=0; i < data.size(); i++){
		if(data[i].getName()==key){
			return i;
			}
		}
		return -1;
	}


int main() {
	string amount = "";
	int acamount = 0;
	int i = 0;
	string cost = "";
	double bcost = 0;
	string bname = "";
	string bauthor = "";
	vector<Books> v;
	Books obj;
	string searchkey="";
	int result=0;





	cout << "Welcome please enter the amount of books you wwill be entering today"<<"\n";
	getline(cin,amount);
	acamount = stoi(amount);
	while ( i < acamount) {
		

		cout << "Please enter book author" << "\n";
		getline(cin,bauthor);
		obj.setAuthor(bauthor);

		cout << " please enter the book title" << "\n";
		getline(cin,bname);
		obj.setName(bname);

		cout << "please enter book cost" << "\n";
		getline(cin, cost);
		bcost = stod(cost);
		obj.setNum(bcost);

		cout << i+1<< " of "<<amount<<" Entered"<<"\n" ;
		v.push_back(obj);
		i++;

	}
	for (int y = 0; y < v.size(); y++) {
		cout << "Title: " << v[y].getName() << " Author: " << v[y].getAuthor()
			<< " Cost: $" << fixed << setprecision(2)<< v[y].getNum() << "\n";
	}
	cout<<"Please enter the name of the book";
	getline(cin,searchkey);
	
	result = linearSearch(v,searchkey);
	
	 if (result == -1)
          cout<<"not found";
        else
          cout<<"found at index "<<result;
          
	
}

