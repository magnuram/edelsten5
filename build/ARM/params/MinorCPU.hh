#ifndef __PARAMS__MinorCPU__
#define __PARAMS__MinorCPU__

class MinorCPU;

#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/MinorFUPool.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/BranchPredictor.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/BaseCPU.hh"

struct MinorCPUParams
    : public BaseCPUParams
{
    MinorCPU * create();
    unsigned fetch1LineSnapWidth;
    unsigned fetch1FetchLimit;
    unsigned executeIssueLimit;
    unsigned executeLSQMaxStoreBufferStoresPerCycle;
    unsigned decodeInputWidth;
    unsigned executeMemoryIssueLimit;
    bool decodeCycleInput;
    unsigned executeLSQTransfersQueueSize;
    Cycles fetch1ToFetch2ForwardDelay;
    unsigned executeMemoryCommitLimit;
    bool enableIdling;
    Cycles executeBranchDelay;
    unsigned executeInputWidth;
    bool executeCycleInput;
    bool executeAllowEarlyMemoryIssue;
    unsigned executeInputBufferSize;
    MinorFUPool * executeFuncUnits;
    bool executeSetTraceTimeOnIssue;
    unsigned fetch2InputBufferSize;
    Cycles fetch2ToDecodeForwardDelay;
    Cycles fetch1ToFetch2BackwardDelay;
    Cycles decodeToExecuteForwardDelay;
    unsigned executeLSQRequestsQueueSize;
    bool fetch2CycleInput;
    unsigned executeMaxAccessesInMemory;
    unsigned executeMemoryWidth;
    unsigned executeLSQStoreBufferSize;
    bool executeSetTraceTimeOnCommit;
    unsigned executeCommitLimit;
    unsigned fetch1LineWidth;
    BPredUnit * branchPred;
    unsigned decodeInputBufferSize;
};

#endif // __PARAMS__MinorCPU__
