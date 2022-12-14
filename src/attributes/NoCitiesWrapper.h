
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileNoCitiesAttributes.h
    \brief Definition of NoCities Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef NoCitiesWrapper_H
#define NoCitiesWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "Cities.h"










namespace magics {

class MagRequest;



class NoCitiesWrapper

{
public:
//  --  constructor
    NoCitiesWrapper();
    NoCitiesWrapper(NoCities*);
//  --  destructor
    virtual ~NoCitiesWrapper();
    virtual void set(const MagRequest&);

    NoCities* me()   { return nocities_; }

   	virtual NoCities* object() { return nocities_; }


	virtual void object(NoCities* o) {
		// Remember to delete the previous object
		nocities_ = o;
		

	}



protected:
    NoCities* nocities_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const NoCitiesWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif