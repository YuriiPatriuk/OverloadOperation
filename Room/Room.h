#pragma once
#include<string>
using std::string;
class Room
{
public:
	Room(const size_t& width = 3, const size_t& length = 4, const size_t& height = 3, const string& name = "Noname");
	Room& operator ++ ();
	Room operator ++ (int);
	bool operator == (const Room&other) const;
	bool operator != (const Room&other) const;
	size_t& operator [] (const string& nameSize);
	explicit operator int() const;
	void operator () (const size_t& width = 3, const size_t& length = 4, const size_t& height = 3, const string& name = "Noname");

	const string& getName()const;
	void print() const;

private:
	size_t height, width, length;
	string name;
};

inline  const string& Room:: getName()const
{
	return name;
}

