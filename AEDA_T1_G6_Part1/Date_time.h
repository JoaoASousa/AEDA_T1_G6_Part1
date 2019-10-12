#ifndef DATE_TIME_H
#define DATE_TIME_H

#include <ctime>
#include <iostream>

class Date {
	size_t day;
	size_t month;
	size_t year;

public:
	Date();
	Date(std::string s);
	Date(unsigned short int day, unsigned short int month, unsigned short int year);

	~Date();

	size_t get_day() const;
	size_t get_month() const;
	size_t get_year() const;

	std::string str() const;

	friend bool operator==(const Date & l, const Date & r);
	friend bool operator<(const Date & l, const Date & r);  //const??
	friend std::ostream & operator<<(std::ostream & stream, const Date & date);

};

#endif
