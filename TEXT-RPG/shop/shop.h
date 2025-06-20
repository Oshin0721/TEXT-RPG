#include <iostream>
#include <string>
#include <vector>


using namespace std;

class Character; // 아직 없어서 전방 선언 해놓은 것임
class Item; // 아직 없어서 전방 선언 해놓은 것임
 
class Shop {
private:
	vector<Item*>availableItems;
public:
		void displayItems();

		void buyItem(int index, Character* player);

		
		void sellItem(int index, Character* player);
		Shop();
		

};