#include "Books.h"
#include<string>
#include<iostream>
using namespace std;

void Books::setAuthor(string Aname){
	author = Aname;
}
string Books::getAuthor(){
	return author;
}
void Books::setName(string Bnames) {
	name = Bnames;
}
string Books::getName() {
	return name;
}

void Books::setNum(double price) {
	cost = price;
}
double Books::getNum() {
	return cost;
} 

Books::Books() {
	name = "Unidentified";
	author = "Unidentified";
	cost = 0.00;
}
