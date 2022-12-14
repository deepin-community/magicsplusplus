
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileMetaDataAttributes.h
    \brief Definition of MetaData Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef MetaDataWrapper_H
#define MetaDataWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "MetaData.h"










namespace magics {

class MagRequest;



class MetaDataWrapper

{
public:
//  --  constructor
    MetaDataWrapper();
    MetaDataWrapper(MetaData*);
//  --  destructor
    virtual ~MetaDataWrapper();
    virtual void set(const MagRequest&);

    MetaData* me()   { return metadata_; }

   	virtual MetaData* object() { return metadata_; }


	virtual void object(MetaData* o) {
		// Remember to delete the previous object
		metadata_ = o;
		

	}



protected:
    MetaData* metadata_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const MetaDataWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif