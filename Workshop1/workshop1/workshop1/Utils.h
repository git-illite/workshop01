//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NDD
// Date:           May 25 2021
//==============================================
// Workshop 01 Lab
//==============================================

#ifndef SDDS_UTILS_H_ // replace with relevant names
#define SDDS_UTILS_H_

namespace sdds {

	void flushkeys();
	
	bool ValidYesResponse(char ch);
	
	bool yes();
	
	void readCstr(char cstr[], int len);
	
	int readInt(int min, int max);

}
#endif