#include <iostream>
#include <string>
using namespace std;

class item {
private:
	int id;
	string name;
	float price;
public:
	void item0() //конструкт по умолчанию
	{
		id = 0;
		name = "noname";
		price = 0;
	}

	void Set(int a,string b, float c) //конструкт с параметрами
	{
		id = a;
		name = b;
		price = c;
	}

	void GetID()
	{
		cout << id;
	}
	void GetNAME()
	{
		cout << name;
	}
	void GetPRICE()
	{
		cout << price << endl;
	}

	float PRICE() {
		return price;
	}

	void print()
	{
		cout << id << '\n' << name << '\n' << price << endl << endl;
	}
};

int main() {

	int i{}, j{}, n;
	string d;
	float e;

	cout << "enter bumber of items: ";
	cin >> n;
	cout << endl;
	item Item[40];

	for (i == 1; i < n; i++)
	{
		cout << "enter name of " << i << " item: ";
		cin >> d;
		cout << "enter price of " << i << " item: ";
		cin >> e;
		Item[i].Set(i, d, e);
		cout << endl;
	}
	//заполнение данных

	for (j == 1; j < n; j++)
	{
		Item[j].GetID();
		cout << " | ";
		Item[j].GetNAME();
		cout << " | ";
		Item[j].GetPRICE();
		cout << "----------------------------" << endl;
	}
	//вывод данных в таблицу

	int ans;
	cout << "\nedit data? (0 - NO, 1 - YES): ";
	cin >> ans;
	cout << endl;
	
	int num;
	string a;
	float b;
	if (ans == 1)
	{
		cout << "enter id of item: ";
		cin >> num;
		cout << "enter name of item: ";
		cin >> a;
		cout << "enter price of item: ";
		cin >> b;
		Item[num].Set(num, a, b);
		cout << endl;
	}else{
		cout << "------" << endl;
	}
	// изменение данных

	int I{};
	for (I == 1; I < n; I++)
	{
		Item[I].GetID();
		cout << " | ";
		Item[I].GetNAME();
		cout << " | ";
		Item[I].GetPRICE();
		cout << "----------------------------" << endl;
	}
	cout << endl;
	//вывод данных в таблицу

	int ans2, num2;
	cout << "order items? (0 - NO, 1 - YES): ";
	cin >> ans2;
	cout << endl;
	if (ans2 == 1)
	{
		int amount;
		cout << "enter id of item: ";
		cin >> num2;
		cout << "enter amount of items to order: ";
		cin >> amount;
		cout << "order amount: " << amount * Item[num2].PRICE() << endl;
	}else{
		cout << "-----------" << endl;
	}
	//заказ деталей
	return 0;
}