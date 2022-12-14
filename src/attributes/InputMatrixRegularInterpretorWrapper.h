
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileInputMatrixRegularInterpretorAttributes.h
    \brief Definition of InputMatrixRegularInterpretor Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef InputMatrixRegularInterpretorWrapper_H
#define InputMatrixRegularInterpretorWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "InputMatrixRegularInterpretor.h"










namespace magics {

class MagRequest;



class InputMatrixRegularInterpretorWrapper

{
public:
//  --  constructor
    InputMatrixRegularInterpretorWrapper();
    InputMatrixRegularInterpretorWrapper(InputMatrixRegularInterpretor*);
//  --  destructor
    virtual ~InputMatrixRegularInterpretorWrapper();
    virtual void set(const MagRequest&);

    InputMatrixRegularInterpretor* me()   { return inputmatrixregularinterpretor_; }

   	virtual InputMatrixRegularInterpretor* object() { return inputmatrixregularinterpretor_; }


	virtual void object(InputMatrixRegularInterpretor* o) {
		// Remember to delete the previous object
		inputmatrixregularinterpretor_ = o;
		

	}



protected:
    InputMatrixRegularInterpretor* inputmatrixregularinterpretor_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const InputMatrixRegularInterpretorWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif