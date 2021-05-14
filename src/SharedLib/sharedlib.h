#ifndef SHAREDLIB_H
#define SHAREDLIB_H

#include "sharedlib_global.h"

#include <QString>


class SHAREDLIBSHARED_EXPORT SharedLib
{

public:
    SharedLib();

    QString printHello();
};

#endif // SHAREDLIB_H
