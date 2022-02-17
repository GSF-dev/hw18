#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;
//������������ �������
inline float meanFunc(float num1, float num2) {
	float mean = (num1 + num2) / 2;
	return mean;
}
//������������� �������
int maxEl(int arr[], int length);
float maxEl(float arr[], int length);
double maxEl(double arr[], int length);
//��������� �������
template <typename T> T maxElement(T arr[], int length);

int main() {
	setlocale(LC_ALL, "Russian");
	//������ 1
	cout << "������ 1 (������������ �������)" << endl;
	cout<<"������� �������������� ����� 16 � 34 = "<<meanFunc(16, 34)<<endl;
	//������ 2
	cout << "\n������ 2 (������������� ������)"<<endl;
	int arr1[3] = { 17, -6, 420 };
	cout << "������������ ������� �� { 17, -6, 420 } =  " << maxEl(arr1, 3)<<endl<<endl;
	float arr2[3] = { 17.8, -9.5, 17.9 };
	cout << "������������ ������� �� { 17.8, -9.5, 17.9 } =  " << maxEl(arr2, 3)<<endl<<endl;
	double arr3[3] = { 4.26, -6.61, 4.21 };
	cout << "������������ ������� �� { 4.26, -6.61, 4.21 } =  " << maxEl(arr3, 3)<<endl<<endl;
	//������ 3 (��������� �� �� �������, ��� � � ������ 2)
	cout << "������ 3 (��������� �������)" << endl;
	cout << "������������ ������� ������� { 17, -6, 420 } =  " << maxElement(arr1, 3) << endl << endl;
	cout << "������������ ������� ������� { 17.8, -9.5, 17.9 } =  " << maxElement(arr2, 3) << endl << endl;
	cout << "������������ ������� ������� { 4.26, -6.61, 4.21 } =  " << maxElement(arr3, 3) << endl << endl;
	
	return 0;
}
int maxEl(int arr[], int length) {
	int max = arr[0];
	for (int i = 0; i < length; i++)
		max = max > arr[i] ? max : arr[i];
	return int(max);
}
float maxEl(float arr[], int length) {
	float max = arr[0];
	for (int i = 0; i < length; i++)
		max = max > arr[i] ? max : arr[i];
	return float(max);
}
double maxEl(double arr[], int length) {
	double max = arr[0];
	for (int i = 0; i < length; i++)
		max = max > arr[i] ? max : arr[i];
	return double(max);
}

template<typename T>
T maxElement(T arr[], int length)
{
	T max = arr[0];
	for (int i = 0; i < length; i++)
		max = max > arr[i] ? max : arr[i];
	return T(max);
}
