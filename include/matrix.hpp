#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

class Matrix
{
private:
	int **matr;
	int st, cl;

public:
	Matrix();
	Matrix(int, int);
	Matrix(Matrix const &matrc);
	~Matrix();
	int rows()const;
	int columns()const;
	Matrix operator+ (const Matrix &mat_2) const;
	Matrix operator* (const Matrix &mat_2) const;
	Matrix& operator =(Matrix &);
	bool operator==(const Matrix&)const;
	friend istream& operator >> (istream& ist, Matrix& cmatr);
	friend ostream& operator << (ostream&, const Matrix&);
};
