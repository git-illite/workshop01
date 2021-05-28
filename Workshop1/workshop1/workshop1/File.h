//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           May 25 2021
//==============================================
// Workshop 01 Lab
//==============================================

#ifndef SDDS_FILE_H_ // replace with relevant names
#define SDDS_FILE_H_
#include "ShoppingRec.h"

namespace sdds {
	
	bool openFileForRead();
	
	bool openFileForOverwrite();
	
	void closeFile();
	
	bool freadShoppingRec(ShoppingRec* rec);
	
	void fwriteShoppintRec(const ShoppingRec* rec);

}

#endif