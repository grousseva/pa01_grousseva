// stats.cpp - implements statistician class as defined in stats.h
// YOUR NAME(S), DATE

#include <cassert>  // provides assert
#include "stats.h"  // defines what must be implemented

statistician::statistician()
{
    count = 0;
    total = 0;
}

void statistician::next(double r)
{
    if (count == 0)
    {
        max = r;
        min = r;
        total = 1;
        count = 1;
    }
    else
    {
        if (r > max)
        {
            max = r;
        }
        if (r < min)
        {
            min = r;
        }
        total += r;
        count += 1;
    }
}

void statistician::reset()
{
    this->count = 0;
    this->total = 0;
    this->min = 0;
    this->max = 0;
}


int statistician::length( ) const
{
    return this->count;
}


double statistician::sum( ) const
{
    return this->total;
}

double statistician::mean( ) const
{
    assert (this->count > 0);
    return (this->total / this->count);

}

double statistician::minimum( ) const
{
    assert (this->count > 0);
    return this->min;

}

double statistician::maximum( ) const
{
    assert (this->count > 0);
    return this->max;

}


