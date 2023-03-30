
#include <iostream>
using namespace std;
struct waterkiller {
	int weight = rand() % 45;
	int weightcrips = rand() % 5;
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
void del(waterkiller*& arr, int& size,int index ) {
	if (index <= size) {
		waterkiller* temp = new waterkiller[size - 1];
		for (int i = 0; i < index; i++) {
			temp[i] = arr[i];
		}
		for (int j = index + 1; j < size - 1; j++) {
			temp[j] = arr[j];
		}
		delete[] arr;
		arr = temp;
		size--;
	}
	else
		cout << "Vanya ne cherepashka ninja";

}

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "ru");
	int x;
	int size = 20;
	waterkiller* killer = new waterkiller[size];
	long costcrips = 0;
	int costmeat = 0;
	int meat = 0;
	int crips = 0;
	
	FILE* text;



	for (int i = 0; i < 31; i++) {
		for (int j = 0; j < size; j++) {
			killer[j].weight += 1;
			killer[j].weightcrips += 2;
		}
		if (i % 5 == 0) {
			for (int x = 0; x < 5; x++) {
				waterkiller new_killer = create();
				addkiller(killer, size, new_killer);
			}
		}
		do
		{
			meat += killer[0].weight;
			crips += killer[0].weightcrips;
			del(killer, size,1);
		} while (meat < 45);
		meat -= 45;
	}
	
	cout << "утопцев  " << size << endl;
	cout << "утопчина  " << meat << endl;
	cout << "чешуя  " << crips << endl;
	costmeat = meat * 273;
	costcrips = crips * 40;
	cout << costmeat << "  стоимость мяса" << endl;
	cout << costcrips << "  стоимость чешуи";

}

