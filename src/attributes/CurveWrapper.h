
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileCurveAttributes.h
    \brief Definition of Curve Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef CurveWrapper_H
#define CurveWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "Curve.h"



#include "GraphWrapper.h"








namespace magics {

class MagRequest;


class CurveWrapper: public GraphWrapper

{
public:
//  --  constructor
    CurveWrapper();
    CurveWrapper(Curve*);
//  --  destructor
    virtual ~CurveWrapper();
    virtual void set(const MagRequest&);

    Curve* me()   { return curve_; }

   	virtual Curve* object() { return curve_; }


	virtual void object(Curve* o) {
		// Remember to delete the previous object
		curve_ = o;
		GraphWrapper::object(o);
		

	}



protected:
    Curve* curve_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const CurveWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif