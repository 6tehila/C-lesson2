#pragma once
class Vector
{
	int *data;
	int capacity;
	int size;

public:
	Vector(int capacity=2);
	Vector(const Vector& source);
	~Vector();
	void setData(int);
	void setCapacity(int);
	void setSize(int);
	int getCapacity()const;
	int getSize()const;
	void clear();
	void delLast();
	void insert(int);
	void print();

	friend std::ostream& operator<<(std::ostream& l, const Vector& vec);

	bool operator==(const Vector& other) const;
	bool operator!=(const Vector& other) const;
	int& operator[](int);
	Vector operator*(int scalar) const;
	friend Vector operator*(int scalar, const Vector& vec);
	Vector& operator*=(int scalar);
	Vector operator++(int);
	Vector operator--(int);
	Vector operator~()const;
	bool operator<(const Vector& const);	
	bool operator<=(const Vector& const);
	bool operator>(const Vector& const);
	bool operator>=(const Vector& const);
};

