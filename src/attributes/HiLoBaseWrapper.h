
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileHiLoBaseAttributes.h
    \brief Definition of HiLoBase Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef HiLoBaseWrapper_H
#define HiLoBaseWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "HiLoBase.h"










namespace magics {

class MagRequest;



class HiLoBaseWrapper

{
public:
//  --  constructor
    HiLoBaseWrapper();
    HiLoBaseWrapper(HiLoBase*);
//  --  destructor
    virtual ~HiLoBaseWrapper();
    virtual void set(const MagRequest&);

    HiLoBase* me()   { return hilobase_; }

   	virtual HiLoBase* object() { return hilobase_; }


	virtual void object(HiLoBase* o) {
		// Remember to delete the previous object
		hilobase_ = o;
		

	}



protected:
    HiLoBase* hilobase_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const HiLoBaseWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif