#pragma once
#ifndef BOOKS_H
#define BOOKS_H

#include<string>
#include<iostream>


using namespace std;
class Books
{
public:
	Books();

	void setName(string);
	string getName();


	void setAuthor(string);
	string getAuthor();

	void setNum(double);
	double getNum();

private:
	string name;
	string author;
	double cost;


};
#endif 

