
#include <iostream>
#include <stdexcept>

using namespace std;

class Array {

	int N;
	int* data;
	
	

public:
	Array(int n) {
		N = n;
		data = new int[N];
	};

	~Array() {
		delete[] data;
	}

	void set(int i, int p) {

		if ((p < 0) && (p > N)) {

			throw out_of_range("error2");
		}
		
		if ((i >= -100) && (i <= 100) ) {
			data[p] = i;
		}
		else {
			throw invalid_argument("error1");
			
			}


	

	};

	int get(int index) {
		if (index >= 0 && index < N) {
			return data[index];
		}
		else {
			throw out_of_range("error3");
			

		}
	}

	Array(const Array& my_arr) {
		N = my_arr.N;
		data = new int[N];
		for (int i = 0; i < N; i++) {
			data[i] = my_arr.data[i];
		}
	}

	int sum (Array b) {
		for (int i = 0; i < N; i++) {
			data[i] += b.data[i];
		}
	}

	int minus(Array b) {
		for (int i = 0; i < N; i++) {
			data[i] -= b.data[i];
		}

	}

	 int add (int value) {
		int* new_data = new int[++N];
		if (new_data == 0) {
			throw bad_alloc();
		}
		for (int i = 0; i <= N; i++) {
			data = new_data;
		}
		delete[] data;
		
		
		data[N - 1] = value;
		}
};


  template <class T>
  class Massiv {
	  typedef T *data;
	int N;
  public:

	  Massiv(int n) {
		  T = n ;
		  data = new int [T];
	  };

	  ~Massiv() {
		  delete[] data;

	  }

}







int main() {
	Array my_arr(67);
	try
	{
		my_arr.set(13, 5);
	}
	catch (invalid_argument e)
	{
		cout << e.what();
	}
	catch (out_of_range c)
	{
		cout << c.what();
	}
	
	try
	{
		my_arr.get(5);
	}
	catch (out_of_range k)
	{
		cout << k.what();
	}


	
	cout << my_arr.get(5) << endl;
	Array my_arr_new(my_arr);
	cout << my_arr_new.get(5);
	
	return 0;
}
