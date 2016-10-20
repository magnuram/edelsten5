#ifndef __PARAMS__MinorFU__
#define __PARAMS__MinorFU__

class MinorFU;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MinorOpClassSet.hh"
#include <vector>
#include "params/MinorFUTiming.hh"
#include <vector>
#include "base/types.hh"

#include "params/SimObject.hh"

struct MinorFUParams
    : public SimObjectParams
{
    MinorFU * create();
    Cycles issueLat;
    Cycles opLat;
    MinorOpClassSet * opClasses;
    std::vector< MinorFUTiming * > timings;
    std::vector< unsigned > cantForwardFromFUIndices;
};

#endif // __PARAMS__MinorFU__
