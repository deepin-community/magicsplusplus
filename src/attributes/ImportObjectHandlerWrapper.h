
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileImportObjectHandlerAttributes.h
    \brief Definition of ImportObjectHandler Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef ImportObjectHandlerWrapper_H
#define ImportObjectHandlerWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "ImportObjectHandler.h"










namespace magics {

class MagRequest;



class ImportObjectHandlerWrapper

{
public:
//  --  constructor
    ImportObjectHandlerWrapper();
    ImportObjectHandlerWrapper(ImportObjectHandler*);
//  --  destructor
    virtual ~ImportObjectHandlerWrapper();
    virtual void set(const MagRequest&);

    ImportObjectHandler* me()   { return importobjecthandler_; }

   	virtual ImportObjectHandler* object() { return importobjecthandler_; }


	virtual void object(ImportObjectHandler* o) {
		// Remember to delete the previous object
		importobjecthandler_ = o;
		

	}



protected:
    ImportObjectHandler* importobjecthandler_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const ImportObjectHandlerWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif