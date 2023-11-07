

#ifndef LAB07_DRAGON_H
#define LAB07_DRAGON_H
#include "Cow.h"
class Dragon: public Cow
{
protected:
    bool fireBreath;
public:
    Dragon(const string& _name, const string& _image);
    bool canBreatheFire();
};
#endif //LAB07_DRAGON_H
