#include <iostream>
#include "Room.h"
using std::cout;
using std::endl;

Room::Room(const size_t& width, const size_t& length, const size_t& height, const string& name)
    : width(width),length(length), name(name)
{
    this->height = height;
}

Room& Room::operator++()
{
    ++height;
    ++width;
    ++length;
    return *this;
}

Room Room::operator++(int)
{
    Room old = *this;
    ++* this;
    return old;
}

bool Room::operator==(const Room& other) const
{
    return height == other.height 
        && length==other.length
        && width == other.width;
}

bool Room::operator!=(const Room& other) const
{
    return !(*this==other);
}

size_t& Room::operator[](const string& nameSize)
{
    static size_t error;
    if (nameSize == "width")
        return width;
    if (nameSize == "height")
        return height;
    if (nameSize == "length")
        return length;
    return error;
}

Room::operator int() const
{
    return length * width;
}

void Room::operator()(const size_t& width, const size_t& length, const size_t& height, const string& name)
{
    this->height = height;
    this->length = length;
    this->width = width;
    if (!name.empty())
       this->name = name;
}

void Room::print() const
{
    cout << "Room: " << "'" << name <<"'"<< endl;
    cout << "Width: "<<width<<"\tLength: "<<length<<"\tHeight: "<<height<<endl;
}
