
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file SkewtGridAttributes.h
    \\brief Definition of SkewtGrid Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "SkewtGridWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



SkewtGridWrapper::SkewtGridWrapper(): skewtgrid_(new SkewtGrid())


{


	
	TephiGridWrapper::object(skewtgrid_);
	

}
SkewtGridWrapper::SkewtGridWrapper(SkewtGrid* skewtgrid): skewtgrid_(skewtgrid)
{

	
	TephiGridWrapper::object(skewtgrid_);
	
}

SkewtGridWrapper::~SkewtGridWrapper()
{

}

void SkewtGridWrapper::set(const MagRequest& request)
{

	

	TephiGridWrapper::set(request);
	

	
	
}

void SkewtGridWrapper::print(ostream& out)  const
{
	out << "SkewtGridWrapper[]";
}


