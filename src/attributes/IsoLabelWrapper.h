
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileIsoLabelAttributes.h
    \brief Definition of IsoLabel Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef IsoLabelWrapper_H
#define IsoLabelWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "IsoLabel.h"



#include "NoIsoLabelWrapper.h"








namespace magics {

class MagRequest;


class IsoLabelWrapper: public NoIsoLabelWrapper

{
public:
//  --  constructor
    IsoLabelWrapper();
    IsoLabelWrapper(IsoLabel*);
//  --  destructor
    virtual ~IsoLabelWrapper();
    virtual void set(const MagRequest&);

    IsoLabel* me()   { return isolabel_; }

   	virtual IsoLabel* object() { return isolabel_; }


	virtual void object(IsoLabel* o) {
		// Remember to delete the previous object
		isolabel_ = o;
		NoIsoLabelWrapper::object(o);
		

	}



protected:
    IsoLabel* isolabel_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const IsoLabelWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif