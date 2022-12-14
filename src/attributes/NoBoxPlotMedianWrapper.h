
/*******************************  LICENSE  *******************************

 * (C) Copyright 1996-2016 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \fileNoBoxPlotMedianAttributes.h
    \brief Definition of NoBoxPlotMedian Attributes class.

    This file is automatically generated.
    Do Not Edit!

    Generated: 
*/


#ifndef NoBoxPlotMedianWrapper_H
#define NoBoxPlotMedianWrapper_H

#include "magics.h"
#include "ParameterManager.h"
#include "Factory.h"



#include "BoxPlotItem.h"










namespace magics {

class MagRequest;



class NoBoxPlotMedianWrapper

{
public:
//  --  constructor
    NoBoxPlotMedianWrapper();
    NoBoxPlotMedianWrapper(NoBoxPlotMedian*);
//  --  destructor
    virtual ~NoBoxPlotMedianWrapper();
    virtual void set(const MagRequest&);

    NoBoxPlotMedian* me()   { return noboxplotmedian_; }

   	virtual NoBoxPlotMedian* object() { return noboxplotmedian_; }


	virtual void object(NoBoxPlotMedian* o) {
		// Remember to delete the previous object
		noboxplotmedian_ = o;
		

	}



protected:
    NoBoxPlotMedian* noboxplotmedian_;


//  --  method
	virtual void print(ostream&) const;


private:
    string tag_;
	friend ostream& operator<<(ostream& s,const NoBoxPlotMedianWrapper& p)
	{ p.print(s); return s; }
};

} // namespace magics

#endif