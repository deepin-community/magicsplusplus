
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileAkima760MethodAttributes.h
    \brief Definition of Akima760Method Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef Akima760MethodWrapper_H
#define Akima760MethodWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "Akima760Method.h"



#include "ContourMethodWrapper.h"








namespace magics {

class MagRequest;


class Akima760MethodWrapper: public ContourMethodWrapper

{
public:
//  --  constructor
    Akima760MethodWrapper();
    Akima760MethodWrapper(Akima760Method*);
//  --  destructor
    virtual ~Akima760MethodWrapper();
    virtual void set(const MagRequest&);

    Akima760Method* me()   { return akima760method_; }

   	virtual Akima760Method* object() { return akima760method_; }


	virtual void object(Akima760Method* o) {
		// Remember to delete the previous object
		akima760method_ = o;
		ContourMethodWrapper::object(o);
		

	}



protected:
    Akima760Method* akima760method_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const Akima760MethodWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif