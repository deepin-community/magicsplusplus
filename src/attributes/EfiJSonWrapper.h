
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileEfiJSonAttributes.h
    \brief Definition of EfiJSon Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef EfiJSonWrapper_H
#define EfiJSonWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "EfiJSon.h"










namespace magics {

class MagRequest;



class EfiJSonWrapper

{
public:
//  --  constructor
    EfiJSonWrapper();
    EfiJSonWrapper(EfiJSon*);
//  --  destructor
    virtual ~EfiJSonWrapper();
    virtual void set(const MagRequest&);

    EfiJSon* me()   { return efijson_; }

   	virtual EfiJSon* object() { return efijson_; }


	virtual void object(EfiJSon* o) {
		// Remember to delete the previous object
		efijson_ = o;
		

	}



protected:
    EfiJSon* efijson_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const EfiJSonWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif