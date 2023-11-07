
#include <string>
#include "Cow.h"
using namespace std;

Cow::Cow(const string& _name)
{
    _cowName = _name;
}
string& Cow::getName()
{
    string& _name = _cowName;
    return _name;
}
string& Cow::getImage()
{
    return _cowImage;
}
 void Cow::setImage(const string& _image)
{
    _cowImage = _image;
};