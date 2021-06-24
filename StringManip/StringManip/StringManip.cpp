#include "StringManip.h"
#include "StringManip.h"

#include <iomanip>

std::ostream& doubleManip(std::ostream& out)
{
	out << std::setfill('*') << std::setw(20) << std::setprecision(3) << std::scientific;

	return out;
}
