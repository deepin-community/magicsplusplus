
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileWrepJSonAttributes.h
    \brief Definition of WrepJSon Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef WrepJSonWrapper_H
#define WrepJSonWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "EpsJSon.h"










namespace magics {

class MagRequest;



class WrepJSonWrapper

{
public:
//  --  constructor
    WrepJSonWrapper();
    WrepJSonWrapper(WrepJSon*);
//  --  destructor
    virtual ~WrepJSonWrapper();
    virtual void set(const MagRequest&);

    WrepJSon* me()   { return wrepjson_; }

   	virtual WrepJSon* object() { return wrepjson_; }


	virtual void object(WrepJSon* o) {
		// Remember to delete the previous object
		wrepjson_ = o;
		

	}



protected:
    WrepJSon* wrepjson_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const WrepJSonWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif