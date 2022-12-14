
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file HatchPolyShadingMethodAttributes.h
    \\brief Definition of HatchPolyShadingMethod Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "HatchPolyShadingMethodWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



HatchPolyShadingMethodWrapper::HatchPolyShadingMethodWrapper(): hatchpolyshadingmethod_(new HatchPolyShadingMethod())


{


	
	PolyShadingMethodWrapper::object(hatchpolyshadingmethod_);
	

}
HatchPolyShadingMethodWrapper::HatchPolyShadingMethodWrapper(HatchPolyShadingMethod* hatchpolyshadingmethod): hatchpolyshadingmethod_(hatchpolyshadingmethod)
{

	
	PolyShadingMethodWrapper::object(hatchpolyshadingmethod_);
	
}

HatchPolyShadingMethodWrapper::~HatchPolyShadingMethodWrapper()
{

}

void HatchPolyShadingMethodWrapper::set(const MagRequest& request)
{

	

	PolyShadingMethodWrapper::set(request);
	

	if  (request.countValues("CONTOUR_SHADE_HATCH_INDEX") ) {
		int index_value = request("CONTOUR_SHADE_HATCH_INDEX");
		hatchpolyshadingmethod_->index_ = index_value;
		}
	if  (request.countValues("CONTOUR_SHADE_HATCH_THICKNESS") ) {
		int thickness_value = request("CONTOUR_SHADE_HATCH_THICKNESS");
		hatchpolyshadingmethod_->thickness_ = thickness_value;
		}
	if  (request.countValues("CONTOUR_SHADE_HATCH_DENSITY") ) {
		double density_value = request("CONTOUR_SHADE_HATCH_DENSITY");
		hatchpolyshadingmethod_->density_ = density_value;
		}
	
	
}

void HatchPolyShadingMethodWrapper::print(ostream& out)  const
{
	out << "HatchPolyShadingMethodWrapper[]";
}


