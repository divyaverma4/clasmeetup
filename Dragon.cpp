
#include "Dragon.h"
Dragon::Dragon(const string& _name, const string& _image) : Cow(_name)
{
    setImage(_image);
    fireBreath = true;
}
bool Dragon::canBreatheFire()
{
    return fireBreath;
}
