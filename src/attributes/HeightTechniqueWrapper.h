
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileHeightTechniqueAttributes.h
    \brief Definition of HeightTechnique Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef HeightTechniqueWrapper_H
#define HeightTechniqueWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "HeightTechnique.h"










namespace magics {

class MagRequest;



class HeightTechniqueWrapper

{
public:
//  --  constructor
    HeightTechniqueWrapper();
    HeightTechniqueWrapper(HeightTechnique*);
//  --  destructor
    virtual ~HeightTechniqueWrapper();
    virtual void set(const MagRequest&);

    HeightTechnique* me()   { return heighttechnique_; }

   	virtual HeightTechnique* object() { return heighttechnique_; }


	virtual void object(HeightTechnique* o) {
		// Remember to delete the previous object
		heighttechnique_ = o;
		

	}



protected:
    HeightTechnique* heighttechnique_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const HeightTechniqueWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif