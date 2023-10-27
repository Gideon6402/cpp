#include "strings.ih"
#include <iostream>     // debugg

Strings::Strings()
:   d_size{0}
,   d_capacity{1}
,   d_ptrArray{rawPointer(d_capacity)} 
{}
