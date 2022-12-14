
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file Proj4PolarNorthAttributes.h
    \\brief Definition of Proj4PolarNorth Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "Proj4PolarNorthWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



Proj4PolarNorthWrapper::Proj4PolarNorthWrapper(): proj4polarnorth_(new Proj4PolarNorth())


{


	
	Proj4ProjectionWrapper::object(proj4polarnorth_);
	

}
Proj4PolarNorthWrapper::Proj4PolarNorthWrapper(Proj4PolarNorth* proj4polarnorth): proj4polarnorth_(proj4polarnorth)
{

	
	Proj4ProjectionWrapper::object(proj4polarnorth_);
	
}

Proj4PolarNorthWrapper::~Proj4PolarNorthWrapper()
{

}

void Proj4PolarNorthWrapper::set(const MagRequest& request)
{

	

	Proj4ProjectionWrapper::set(request);
	

	
	
}

void Proj4PolarNorthWrapper::print(ostream& out)  const
{
	out << "Proj4PolarNorthWrapper[]";
}


