
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file Proj4EPSG32661Attributes.h
    \\brief Definition of Proj4EPSG32661 Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "Proj4EPSG32661Wrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



Proj4EPSG32661Wrapper::Proj4EPSG32661Wrapper(): proj4epsg32661_(new Proj4EPSG32661())


{


	
	Proj4ProjectionWrapper::object(proj4epsg32661_);
	

}
Proj4EPSG32661Wrapper::Proj4EPSG32661Wrapper(Proj4EPSG32661* proj4epsg32661): proj4epsg32661_(proj4epsg32661)
{

	
	Proj4ProjectionWrapper::object(proj4epsg32661_);
	
}

Proj4EPSG32661Wrapper::~Proj4EPSG32661Wrapper()
{

}

void Proj4EPSG32661Wrapper::set(const MagRequest& request)
{

	

	Proj4ProjectionWrapper::set(request);
	

	
	
}

void Proj4EPSG32661Wrapper::print(ostream& out)  const
{
	out << "Proj4EPSG32661Wrapper[]";
}


