#include "Vector.h"
#include "algorithm"
#include <iostream>
using namespace std;


Vector::Vector(int capacity) {
	data = new int[capacity];
	/*this->capacity = capacity;*/
}
Vector::Vector(const Vector& source) {
	capacity = source.capacity;
	size = source.size;
	data = new int[capacity];
	std::copy(source.data, source.data + size, data);
}
Vector::~Vector() {
	if (data)
		delete[]data;
	data = nullptr;
}
void Vector::setData(int value) {	//לבדוק אם ככה עושים
	for (int i = 0; i < size; i++)
	{
		data[i] = value;
	}
}
void Vector::setCapacity(int capacity) {
	this->capacity = capacity;
}
void Vector::setSize(int size) {
	this->size = size;
}
int Vector::getCapacity()const {
	return capacity;
}
int Vector::getSize() const{
	return size;
}
void Vector::clear() {

	for (int i = 0; i < size; i++)
	{
		data[i] = 0;
	}
	size = 0;
}
void Vector::delLast() {
	if (size > 0) {
		--size;
		data[size] = 0;  
	}
	else {
		cout << "ERROR: Vector is empty." << endl;
	}
}



void Vector::insert(int val) {
	if (capacity >= size) {
		size *= 2;
		int* newData = new int[size];
		for (int i = 0; i < size / 2; i++) {
			newData[i] = data[i];
		}
		delete[] data;
		data = newData;
	}
	data[size] = val;
	size++;
}

void Vector::print() {
	cout << "capacity: " << capacity << " size: " << size << " values: ";
	for (int i = 0; i < size; i++) {
		cout << data[i] << " ";
	}
	cout << endl; 
}

std::ostream& operator<<(std::ostream& l, const Vector& vec) {
	for (size_t i = 0; i < vec.getSize(); i++)
	{
		l << vec.data[i] << " ";
	}
	l << "\n";
	return l;
}

bool Vector:: operator==(const Vector& other) const{
	if (size != other.size)
		return false;
	for (int i = 0; i < size; i++)
	{
		if (other.data[i] != data[i])
			return false;
	}
	return true;
}
bool Vector::operator!=(const Vector& other)const {
	return operator==(other);
}
int& Vector::operator[](int index) {
	if (index >= 0 && index < size) {
		return data[index];
	}
	else {
		cout << "ERROR" << endl;
		return data[0];  
	}
}
Vector Vector::operator*(int scalar) const {
	Vector result(*this);  // וקטור חדש 
	for (int i = 0; i < size; ++i) {
		result.data[i] *= scalar;
	}
	return result;
}

Vector operator*(int scalar, const Vector& vec) {
	Vector result(vec);  // וקטור חדש
	for (int i = 0; i < vec.size; ++i) {
		result.data[i] *= scalar;
	}
	return result;
}
Vector& Vector::operator*=(int scalar) {
	for (int i = 0; i < size; ++i) {
		data[i] *= scalar;
	}
	return *this;
}
Vector Vector:: operator++(int x) {
	Vector temp = *this;
	for (int i = 0; i < temp.getSize(); i++)
	{
		temp.data[i]++;
	}
	return temp;
}
Vector Vector:: operator--(int x) {
	Vector temp = *this;
	for (int i = 0; i < temp.getSize(); i++)
	{
		temp.data[i]--;
	}
	return temp;
}
Vector Vector::operator~()const {
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += static_cast<double> (data[i] * data[i]);
	}
	return sqrt(sum);
}
bool Vector::operator<(const Vector& vect) {
	return ~(*this) < ~(vect);
}
bool Vector::operator<=(const Vector& vect) {
	return ~(*this) <= ~(vect);
}
bool Vector::operator> (const Vector& vect) {
	return ~(*this) > ~(vect);
}
bool Vector::operator>= (const Vector& vect) {
	return ~(*this) >= ~(vect);
}