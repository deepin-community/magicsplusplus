
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileWindAttributes.h
    \brief Definition of Wind Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef WindWrapper_H
#define WindWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "Wind.h"








#include "WindPlottingWrapper.h"


namespace magics {

class MagRequest;



class WindWrapper

{
public:
//  --  constructor
    WindWrapper();
    WindWrapper(Wind*);
//  --  destructor
    virtual ~WindWrapper();
    virtual void set(const MagRequest&);

    Wind* me()   { return wind_; }

   	virtual Wind* object() { return wind_; }


	virtual void object(Wind* o) {
		// Remember to delete the previous object
		wind_ = o;
		

	}



protected:
    Wind* wind_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const WindWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif