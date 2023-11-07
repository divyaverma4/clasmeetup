

#ifndef LAB07_COW_H
#define LAB07_COW_H
#include <string>

using namespace std;
class Cow
{
private:
    string _cowName;
    string _cowImage;
public:
    Cow(const string& _name);
    string& getName();
    string& getImage();
    virtual void setImage(const string& _image);
};
#endif //LAB07_COW_H
