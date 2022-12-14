
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file NoCalmIndicatorAttributes.h
    \\brief Definition of NoCalmIndicator Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "NoCalmIndicatorWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



NoCalmIndicatorWrapper::NoCalmIndicatorWrapper(): nocalmindicator_(new NoCalmIndicator())


{


	
	CalmIndicatorWrapper::object(nocalmindicator_);
	

}
NoCalmIndicatorWrapper::NoCalmIndicatorWrapper(NoCalmIndicator* nocalmindicator): nocalmindicator_(nocalmindicator)
{

	
	CalmIndicatorWrapper::object(nocalmindicator_);
	
}

NoCalmIndicatorWrapper::~NoCalmIndicatorWrapper()
{

}

void NoCalmIndicatorWrapper::set(const MagRequest& request)
{

	

	CalmIndicatorWrapper::set(request);
	

	
	
}

void NoCalmIndicatorWrapper::print(ostream& out)  const
{
	out << "NoCalmIndicatorWrapper[]";
}


