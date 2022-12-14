
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileSimpleOutLayerTechniqueAttributes.h
    \brief Definition of SimpleOutLayerTechnique Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef SimpleOutLayerTechniqueWrapper_H
#define SimpleOutLayerTechniqueWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "OutLayerTechnique.h"



#include "NoOutLayerTechniqueWrapper.h"








namespace magics {

class MagRequest;


class SimpleOutLayerTechniqueWrapper: public NoOutLayerTechniqueWrapper

{
public:
//  --  constructor
    SimpleOutLayerTechniqueWrapper();
    SimpleOutLayerTechniqueWrapper(SimpleOutLayerTechnique*);
//  --  destructor
    virtual ~SimpleOutLayerTechniqueWrapper();
    virtual void set(const MagRequest&);

    SimpleOutLayerTechnique* me()   { return simpleoutlayertechnique_; }

   	virtual SimpleOutLayerTechnique* object() { return simpleoutlayertechnique_; }


	virtual void object(SimpleOutLayerTechnique* o) {
		// Remember to delete the previous object
		simpleoutlayertechnique_ = o;
		NoOutLayerTechniqueWrapper::object(o);
		

	}



protected:
    SimpleOutLayerTechnique* simpleoutlayertechnique_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const SimpleOutLayerTechniqueWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif