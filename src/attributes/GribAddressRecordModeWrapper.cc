
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file GribAddressRecordModeAttributes.h
    \\brief Definition of GribAddressRecordMode Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "GribAddressRecordModeWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



GribAddressRecordModeWrapper::GribAddressRecordModeWrapper(): gribaddressrecordmode_(new GribAddressRecordMode())


{


	
	GribAddressModeWrapper::object(gribaddressrecordmode_);
	

}
GribAddressRecordModeWrapper::GribAddressRecordModeWrapper(GribAddressRecordMode* gribaddressrecordmode): gribaddressrecordmode_(gribaddressrecordmode)
{

	
	GribAddressModeWrapper::object(gribaddressrecordmode_);
	
}

GribAddressRecordModeWrapper::~GribAddressRecordModeWrapper()
{

}

void GribAddressRecordModeWrapper::set(const MagRequest& request)
{

	

	GribAddressModeWrapper::set(request);
	

	
	
}

void GribAddressRecordModeWrapper::print(ostream& out)  const
{
	out << "GribAddressRecordModeWrapper[]";
}


