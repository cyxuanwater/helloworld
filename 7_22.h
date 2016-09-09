#include <string>
#include <iostream>


class Person{
	friend std::istream &read(std::istream& , Person&);
	friend std::ostream &print(std::ostream& , const Person&);
public : 
	Person() = default;
	Person(const std::string sname, const std::string saddress):name(sname),address(saddress){};	
	const std::string& get_name() const {return name;};
	const std::string& get_address() const {return address;};
private :
	std::string name;
	std::string address;
};
std::istream &read(std::istream& is, Person& person){
	is >> person.name >> person.address;
	return is;
}
std::ostream &print(std::ostream& os, const Person& person){
	os << person.name <<" "<<person.address;
	return os;
};
