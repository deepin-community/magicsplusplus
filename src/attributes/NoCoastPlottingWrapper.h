
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileNoCoastPlottingAttributes.h
    \brief Definition of NoCoastPlotting Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef NoCoastPlottingWrapper_H
#define NoCoastPlottingWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "CoastPlotting.h"








#include "NoBoundariesWrapper.h"
#include "NoCitiesWrapper.h"


namespace magics {

class MagRequest;



class NoCoastPlottingWrapper

{
public:
//  --  constructor
    NoCoastPlottingWrapper();
    NoCoastPlottingWrapper(NoCoastPlotting*);
//  --  destructor
    virtual ~NoCoastPlottingWrapper();
    virtual void set(const MagRequest&);

    NoCoastPlotting* me()   { return nocoastplotting_; }

   	virtual NoCoastPlotting* object() { return nocoastplotting_; }


	virtual void object(NoCoastPlotting* o) {
		// Remember to delete the previous object
		nocoastplotting_ = o;
		

	}



protected:
    NoCoastPlotting* nocoastplotting_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const NoCoastPlottingWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif