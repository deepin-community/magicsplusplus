
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileProj4MercatorAttributes.h
    \brief Definition of Proj4Mercator Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef Proj4MercatorWrapper_H
#define Proj4MercatorWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "Proj4Projection.h"



#include "Proj4ProjectionWrapper.h"








namespace magics {

class MagRequest;


class Proj4MercatorWrapper: public Proj4ProjectionWrapper

{
public:
//  --  constructor
    Proj4MercatorWrapper();
    Proj4MercatorWrapper(Proj4Mercator*);
//  --  destructor
    virtual ~Proj4MercatorWrapper();
    virtual void set(const MagRequest&);

    Proj4Mercator* me()   { return proj4mercator_; }

   	virtual Proj4Mercator* object() { return proj4mercator_; }


	virtual void object(Proj4Mercator* o) {
		// Remember to delete the previous object
		proj4mercator_ = o;
		Proj4ProjectionWrapper::object(o);
		

	}



protected:
    Proj4Mercator* proj4mercator_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const Proj4MercatorWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif