#ifndef __PARAMS__MinorFUTiming__
#define __PARAMS__MinorFUTiming__

class MinorFUTiming;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>
#include <vector>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MinorOpClassSet.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/TimingExpr.hh"

#include "params/SimObject.hh"

struct MinorFUTimingParams
    : public SimObjectParams
{
    MinorFUTiming * create();
    Cycles extraAssumedLat;
    std::string description;
    std::vector< Cycles > srcRegsRelativeLats;
    bool suppress;
    uint64_t mask;
    Cycles extraCommitLat;
    MinorOpClassSet * opClasses;
    uint64_t match;
    TimingExpr * extraCommitLatExpr;
};

#endif // __PARAMS__MinorFUTiming__
