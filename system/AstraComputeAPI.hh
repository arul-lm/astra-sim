#ifndef __COMPUTE_HH__
#define __COMPUTE_HH__
#include <cassert>
#include <fstream>
#include <iostream>
#include <string>
#include <cstdint>
class ComputeMetaData{
    public:
        uint64_t compute_delay; //delay in nanoseconds
};
class ComputeAPI{
    public:
        //These should be the last 2 lines of this function
        //fun_arg->compute_delay=20;
        //(*msg_handler)(fun_arg);
        virtual void compute(uint64_t M, uint64_t K, uint64_t N, void (*msg_handler)(void *fun_arg), ComputeMetaData* fun_arg)=0;
};
#endif
