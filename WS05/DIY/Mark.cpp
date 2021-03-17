//==============================================
// Name:           Abdalla Aden
// Student Number: 021720057
// Email:          aaaden1@myseneca.ca
// Section:        NBB
// Date:           Feb 19 2021
//==============================================
// Workshop 05 DIY - All written by me
//==============================================
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Mark.h"
using namespace std;
namespace sdds {
	char grades[] = {'F','D','C','B','A','\0'};
	double gradeNums [] = { 0.0, 1.0, 2.0, 3.0, 4.0};
	void Mark::setEmpty()
	{
		m_mark = 0;
		m_usable = true;
	}

	bool Mark::valid()
	{
		
		if ((m_mark >= 0) && (m_mark <= 100)) m_usable = true;
		else m_usable = false;
		return m_usable;
	}

	Mark::Mark()
	{
		setEmpty();
	}

	Mark::Mark(int value)
	{
		m_mark = value;

		if (valid()) {
			m_usable = true;
		}
		else {
			m_mark = 0;
			//setEmpty();
			m_usable = false;
		}
	}

	Mark::operator int() const
	{
		if (m_usable)return m_mark;
		else return 0;
	}

	Mark::operator double() const
	{
		double grade = 0.0;
		if ((m_mark >= 1) && (m_mark < 50)) grade = gradeNums[0];
		else if ((m_mark >= 50) && (m_mark < 60)) grade = gradeNums[1];
		else if ((m_mark >= 60) && (m_mark < 70)) grade = gradeNums[2];
		else if ((m_mark >= 70) && (m_mark < 80)) grade = gradeNums[3];
		else if ((m_mark >= 80) && (m_mark <= 100)) grade = gradeNums[4];
		//else if ((m_mark <= 0) || (m_mark > 100))grade = 0.0;

		
		return grade;
	}

	Mark::operator char() const
	{
		char grade = 'X';
		if (m_usable) {
			if ((m_mark > 0) && (m_mark < 50)) grade = grades[0];
			else if ((m_mark >= 50) && (m_mark < 60))grade = grades[1];
			else if ((m_mark >= 60) && (m_mark < 70))grade = grades[2];
			else if ((m_mark >= 70) && (m_mark < 80))grade = grades[3];
			else if ((m_mark >= 80) && (m_mark <= 100))grade = grades[4];


		}
		return grade;
	}

	Mark& Mark::operator+=(int value)
	{
		if ((value + m_mark) <= 100) {
			m_mark += value;
		}
		else m_usable = false;
		return *this;
	}
	/*Mark& Mark::operator-=(int value)
	{
		if ((value - m_mark) >= 0) {
			m_mark -= value;
		}
		else m_usable = false;
		return *this;
	}*/

	Mark& Mark::operator=(int value)
	{
		m_mark = value;
		if (valid()) m_mark = value;
		else m_mark = 0;
		return *this;
	}

	/*Mark& Mark::operator<<(Mark& rightOper)
	{
		if ((valid()) && (rightOper.valid())) {
			m_mark = rightOper.m_mark;
			rightOper.m_mark = 0;
		}
		return *this;
	}
	Mark& Mark::operator>>(Mark& leftOper)
	{
		if ((valid()) && (leftOper.valid())) {
			 leftOper.m_mark = m_mark;
			leftOper.m_mark = 0;
		}
		return *this;
	}*/
	
	
	int operator+=(int &value, const Mark& rightOper)
	{
		if ((value >= 0) && (value <= 100) /*&& (value + rightOper.operator int() <= 100)*/) {
			value += rightOper.operator int();
		}
		return value;
	}
	
}