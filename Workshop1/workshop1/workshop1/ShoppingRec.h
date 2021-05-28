//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           May 25 2021
//==============================================
// Workshop 01 Lab
//==============================================

#ifndef SDDS_SHOPPINGREC_H_ 
#define SDDS_SHOPPINGREC_H_

namespace sdds {
	const int MAX_TITLE_LENGTH = 50;
	const int MAX_QUANTITY_VALUE = 50;
	struct ShoppingRec {
		char m_title[MAX_TITLE_LENGTH + 1];
		int m_quantity;
		bool m_bought;
	};
	ShoppingRec getShoppingRec();
	
	void displayShoppingRec(const ShoppingRec* shp);
	
	void toggleBoughtFlag(ShoppingRec* rec);
	
	bool isShoppingRecEmpty(const ShoppingRec* shp);
}

#endif