#pragma once

const int DEFAULT_CAPACITY = 10;

class ArrayExeption {};

class Array {
	void increaseCapacity(int newCapacity);

public:
	int* ptr;
	int size, capacity;
	explicit Array(int startCapacity = DEFAULT_CAPACITY);
	~Array();
	Array(const Array& arr);
	Array& operator = (const Array& arr);
	int& operator [](int index);
	void insert(int elem, int index);
	void insert(int elem);
	void remove(int index);
	int getSize() const;
	//friend ostream& operator << (ostream& out, const Array& arr);

};
