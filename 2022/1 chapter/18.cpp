
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cout << "Enter size your array(more than 3, but less than 48):" << endl;
	cin >> n;
	int *arr = new int[n];                                                  //объ€вление массива
	int i;
	if (n>=4) 
	{                                                         //если массив более чем из 4х 
		cout << "Your array from the Fibonacci series: ";    //чисел, то выполнение программы 
		cout << "1 1 ";                                      // может быть продолженно
		arr[1] = 1;
		arr[2] = 1;
		for (i = 3; i < n+1; ++i) 
		{
			arr[i] = arr[i-1] + arr[i-2];
			cout << arr[i] << " ";
		}
	}
	else 
	{                                                                 //если размер массива не
		cout << "Warning! Your array can't be so small" << endl;     //превышает 4х,
        }                                                                 //нам выдаст ошибку 
		
	cout << endl;
        system("pause");
	return 0;
}