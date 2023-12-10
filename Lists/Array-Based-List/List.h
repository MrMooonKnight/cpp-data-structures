#ifndef LIST_H
#define LIST_H

#include <iostream>

using namespace std;



class List {

private:

	int * array;
	int size;

public:

	List();
	List(int size);
	List(int * arr, int size);

	void setSize(int siz);
	
	void insertIndex(int idx, int val);
	void insertEnd( int val);
	void insertStart(int val);

	void removeStart();
	void removeEnd();
	void removeIndex(int idx);
	

	int next(int val);
	int previous(int val);

	void clear();
	void display();
	int search(int x);
	~List();


	int sort();
	void replace(int idx, int val);
	bool isEmpty();
	bool duplicate();
};

#endif
