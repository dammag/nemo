
// util (utilities)

// nemo (network mobilizer)
// Copyright (C) 2012-2014 Damien Magoni

/*
    This file is part of nemo.

    nemo is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as 
    published by the Free Software Foundation, either version 3 of 
    the License, or (at your option) any later version.

    nemo is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with nemo.  If not, see <http://www.gnu.org/licenses/>.
*/

#if !defined(UTIL_H)
#define UTIL_H

#include <map>
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <ctime>
#include <cmath>
#include <boost/chrono.hpp>

typedef unsigned char byte;
typedef unsigned short word;
typedef unsigned long dword;
typedef unsigned long long qword;

namespace util
{
	void pause();
}

#endif
