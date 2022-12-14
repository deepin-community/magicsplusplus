
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileTephiGridAttributes.h
    \brief Definition of TephiGrid Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef TephiGridWrapper_H
#define TephiGridWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "TephiGrid.h"










namespace magics {

class MagRequest;



class TephiGridWrapper

{
public:
//  --  constructor
    TephiGridWrapper();
    TephiGridWrapper(TephiGrid*);
//  --  destructor
    virtual ~TephiGridWrapper();
    virtual void set(const MagRequest&);

    TephiGrid* me()   { return tephigrid_; }

   	virtual TephiGrid* object() { return tephigrid_; }


	virtual void object(TephiGrid* o) {
		// Remember to delete the previous object
		tephigrid_ = o;
		

	}



protected:
    TephiGrid* tephigrid_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const TephiGridWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif