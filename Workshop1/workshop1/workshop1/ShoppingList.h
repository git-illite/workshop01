//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           May 25 2021
//==============================================
// Workshop 01 Lab
//==============================================

#ifndef SDDS_SHOPPINGLIST_H_ 
#define SDDS_SHOPPINGLIST_H_


namespace sdds {
	
	const int MAX_NO_OF_RECS = 15;
		

	bool loadList();
	void displayList();
	void removeBoughtItems();
	void removeItem(int index);
	bool saveList();
	void clearList();
	void toggleBought();
	void addItemToList();
	void removeItemfromList();
	bool listIsEmpty();
}

#endif