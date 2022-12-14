
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileGridPlottingAttributes.h
    \brief Definition of GridPlotting Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef GridPlottingWrapper_H
#define GridPlottingWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "GridPlotting.h"



#include "NoGridPlottingWrapper.h"








namespace magics {

class MagRequest;


class GridPlottingWrapper: public NoGridPlottingWrapper

{
public:
//  --  constructor
    GridPlottingWrapper();
    GridPlottingWrapper(GridPlotting*);
//  --  destructor
    virtual ~GridPlottingWrapper();
    virtual void set(const MagRequest&);

    GridPlotting* me()   { return gridplotting_; }

   	virtual GridPlotting* object() { return gridplotting_; }


	virtual void object(GridPlotting* o) {
		// Remember to delete the previous object
		gridplotting_ = o;
		NoGridPlottingWrapper::object(o);
		

	}



protected:
    GridPlotting* gridplotting_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const GridPlottingWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif