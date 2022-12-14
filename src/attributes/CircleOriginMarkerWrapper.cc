
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file CircleOriginMarkerAttributes.h
    \\brief Definition of CircleOriginMarker Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "CircleOriginMarkerWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



CircleOriginMarkerWrapper::CircleOriginMarkerWrapper(): circleoriginmarker_(new CircleOriginMarker())


{


	
	OriginMarkerWrapper::object(circleoriginmarker_);
	

}
CircleOriginMarkerWrapper::CircleOriginMarkerWrapper(CircleOriginMarker* circleoriginmarker): circleoriginmarker_(circleoriginmarker)
{

	
	OriginMarkerWrapper::object(circleoriginmarker_);
	
}

CircleOriginMarkerWrapper::~CircleOriginMarkerWrapper()
{

}

void CircleOriginMarkerWrapper::set(const MagRequest& request)
{

	

	OriginMarkerWrapper::set(request);
	

	
	
}

void CircleOriginMarkerWrapper::print(ostream& out)  const
{
	out << "CircleOriginMarkerWrapper[]";
}


