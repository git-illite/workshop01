//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NBB
// Date:           Feb 19 2021
//==============================================
// Workshop 05 DIY - All written by me
//==============================================
#ifndef SDDS_MARK_H_
#define SDD_MARK_H_
#include <iostream>
namespace sdds {
	class Mark {
		int m_mark;
		bool m_usable;
		void setEmpty();
		bool valid();
	public:
		Mark();
		Mark(int value);
				
		operator int()const;
		operator double()const;
		operator char()const;
		Mark& operator+=(int value);
		Mark& operator-=(int value);
		Mark& operator=(int value);
		Mark& operator<<(Mark& rightOper);
		Mark& operator>>(Mark& leftOper);

	};
	int operator+=(int &value, const Mark& rightOper);
	

}
#endif // !SDDS_MARK_H
