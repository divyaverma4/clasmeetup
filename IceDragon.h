

#ifndef LAB07_ICEDRAGON_H
#define LAB07_ICEDRAGON_H
#include "Dragon.h"
class IceDragon : public Dragon
{
private:
public:
    IceDragon(const string& _name, const string& _image);
    bool canBreatheFire();
};
#endif //LAB07_ICEDRAGON_H
