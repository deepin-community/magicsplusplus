
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file Proj4Meteosat0Attributes.h
    \\brief Definition of Proj4Meteosat0 Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "Proj4Meteosat0Wrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



Proj4Meteosat0Wrapper::Proj4Meteosat0Wrapper(): proj4meteosat0_(new Proj4Meteosat0())


{


	
	Proj4ProjectionWrapper::object(proj4meteosat0_);
	

}
Proj4Meteosat0Wrapper::Proj4Meteosat0Wrapper(Proj4Meteosat0* proj4meteosat0): proj4meteosat0_(proj4meteosat0)
{

	
	Proj4ProjectionWrapper::object(proj4meteosat0_);
	
}

Proj4Meteosat0Wrapper::~Proj4Meteosat0Wrapper()
{

}

void Proj4Meteosat0Wrapper::set(const MagRequest& request)
{

	

	Proj4ProjectionWrapper::set(request);
	

	
	
}

void Proj4Meteosat0Wrapper::print(ostream& out)  const
{
	out << "Proj4Meteosat0Wrapper[]";
}


