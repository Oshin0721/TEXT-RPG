#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Character; // ���� ��� ���� ���� �س��� ����
class Item; // ���� ��� ���� ���� �س��� ����
 
class Shop {
private:
	vector<Item*>availableItems;
public:
		void displayItems();

		void buyItem(int index, Character* player);

		
		void sellItem(int index, Character* player);
		Shop();
		

};