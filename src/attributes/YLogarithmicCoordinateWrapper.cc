
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file YLogarithmicCoordinateAttributes.h
    \\brief Definition of YLogarithmicCoordinate Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "YLogarithmicCoordinateWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



YLogarithmicCoordinateWrapper::YLogarithmicCoordinateWrapper(): ylogarithmiccoordinate_(new YLogarithmicCoordinate())


{


	
	YCoordinateWrapper::object(ylogarithmiccoordinate_);
	

}
YLogarithmicCoordinateWrapper::YLogarithmicCoordinateWrapper(YLogarithmicCoordinate* ylogarithmiccoordinate): ylogarithmiccoordinate_(ylogarithmiccoordinate)
{

	
	YCoordinateWrapper::object(ylogarithmiccoordinate_);
	
}

YLogarithmicCoordinateWrapper::~YLogarithmicCoordinateWrapper()
{

}

void YLogarithmicCoordinateWrapper::set(const MagRequest& request)
{

	

	YCoordinateWrapper::set(request);
	

	if  (request.countValues("Y_MIN") ) {
		double min_value = request("Y_MIN");
		ylogarithmiccoordinate_->min_ = min_value;
		}
	if  (request.countValues("Y_MAX") ) {
		double max_value = request("Y_MAX");
		ylogarithmiccoordinate_->max_ = max_value;
		}
	if  (request.countValues("Y_AUTOMATIC_REVERSE") ) {
		string reverse_value = request("Y_AUTOMATIC_REVERSE");
		
		ylogarithmiccoordinate_->reverse_ = MagTranslator<string, bool>()(reverse_value);
		
		}
	
	
	if  (request.countValues("Y_AUTOMATIC") ) {
		string automatic_value = request("Y_AUTOMATIC");
		ylogarithmiccoordinate_->automatic_ = MagTranslator<string, AxisAutomaticSetting>()(automatic_value);
	}
		
	
}

void YLogarithmicCoordinateWrapper::print(ostream& out)  const
{
	out << "YLogarithmicCoordinateWrapper[]";
}



