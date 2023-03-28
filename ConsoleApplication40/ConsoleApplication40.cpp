
#include <iostream>
using namespace std;
struct waterkiller {
	int weight = rand() % 45;
	int weightcrips = rand() % 2;
};
void print(waterkiller*& arr, int& size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i].weight << "   ";
	}
	cout << endl;
}


void addkiller(waterkiller*& killer, int& size, waterkiller utopian) {
	waterkiller* temp = new waterkiller[size + 1];
	for (int i = 0; i < size; i++) {
		temp[i] = killer[i];
	}
	temp[size] = utopian;
	delete[] killer;
	killer = temp;
	size++;
}
waterkiller create(){
	waterkiller s;
	s.weight = rand() % 45 + 40;
	s.weightcrips = rand() % 70 % 40;
	return s;
}
void del(int*& arr, int& size,int index) {
	if (index <= size) {
		int* temp = new int[size - 1];
		for (int i = 0; i < size; i++) {
			temp[i] = arr[i];
		}
		for (int i = 0; i < size; i++) {
			temp[i] = arr[i];
		}
		delete[] arr;
		arr = temp;
		size--;
	}
	else
		cout << "Vlad lox";

}

int main()
{
	
	int size = 20;
	
	waterkiller* new_killer = new waterkiller[size];
	print(new_killer, size);
	waterkiller s;
	srand(time(NULL));
	
	int *gg = new int[size];
	for (int i = 30; i > 0; i--) {
		int index = 0;
		cin >> index;
		s.weight += 1;
		print(new_killer, size);
		for (int i = 0; i < 20; i++) {
			waterkiller killer = create();
			addkiller(new_killer, size, killer);
			
		}
		print(new_killer, size);
	}

}

