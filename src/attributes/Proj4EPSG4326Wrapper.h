
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileProj4EPSG4326Attributes.h
    \brief Definition of Proj4EPSG4326 Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef Proj4EPSG4326Wrapper_H
#define Proj4EPSG4326Wrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "Proj4Projection.h"



#include "Proj4ProjectionWrapper.h"








namespace magics {

class MagRequest;


class Proj4EPSG4326Wrapper: public Proj4ProjectionWrapper

{
public:
//  --  constructor
    Proj4EPSG4326Wrapper();
    Proj4EPSG4326Wrapper(Proj4EPSG4326*);
//  --  destructor
    virtual ~Proj4EPSG4326Wrapper();
    virtual void set(const MagRequest&);

    Proj4EPSG4326* me()   { return proj4epsg4326_; }

   	virtual Proj4EPSG4326* object() { return proj4epsg4326_; }


	virtual void object(Proj4EPSG4326* o) {
		// Remember to delete the previous object
		proj4epsg4326_ = o;
		Proj4ProjectionWrapper::object(o);
		

	}



protected:
    Proj4EPSG4326* proj4epsg4326_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const Proj4EPSG4326Wrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif