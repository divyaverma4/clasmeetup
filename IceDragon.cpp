
#include "IceDragon.h"
IceDragon::IceDragon(const string& _name, const string& _image) : Dragon(_name, _image)
{
    fireBreath = false;
}
bool IceDragon::canBreatheFire()
{
    return fireBreath;
}
