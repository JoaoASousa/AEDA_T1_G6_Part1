#include "Address.h"

Address::Address() {

}

Address::~Address() {

}

std::ostream & operator<<(std::ostream & stream, Address address) {
	// IN PROGRESS
	stream << "Town: " << address.town;
	stream << "District: " << address.district;
	stream << "Street: " << address.street;
	stream << "Number: " << address.number;
}