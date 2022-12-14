
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file YHyperCoordinateAttributes.h
    \\brief Definition of YHyperCoordinate Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "YHyperCoordinateWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



YHyperCoordinateWrapper::YHyperCoordinateWrapper(): yhypercoordinate_(new YHyperCoordinate())


{


	
	YCoordinateWrapper::object(yhypercoordinate_);
	

}
YHyperCoordinateWrapper::YHyperCoordinateWrapper(YHyperCoordinate* yhypercoordinate): yhypercoordinate_(yhypercoordinate)
{

	
	YCoordinateWrapper::object(yhypercoordinate_);
	
}

YHyperCoordinateWrapper::~YHyperCoordinateWrapper()
{

}

void YHyperCoordinateWrapper::set(const MagRequest& request)
{

	

	YCoordinateWrapper::set(request);
	

	if  (request.countValues("Y_MIN_LATITUDE") ) {
		double min_lat_value = request("Y_MIN_LATITUDE");
		yhypercoordinate_->min_lat_ = min_lat_value;
		}
	if  (request.countValues("Y_MAX_LATITUDE") ) {
		double max_lat_value = request("Y_MAX_LATITUDE");
		yhypercoordinate_->max_lat_ = max_lat_value;
		}
	if  (request.countValues("Y_MIN_LONGITUDE") ) {
		double min_lon_value = request("Y_MIN_LONGITUDE");
		yhypercoordinate_->min_lon_ = min_lon_value;
		}
	if  (request.countValues("Y_MAX_LONGITUDE") ) {
		double max_lon_value = request("Y_MAX_LONGITUDE");
		yhypercoordinate_->max_lon_ = max_lon_value;
		}
	if  (request.countValues("Y_AUTOMATIC_REVERSE") ) {
		string reverse_value = request("Y_AUTOMATIC_REVERSE");
		
		yhypercoordinate_->reverse_ = MagTranslator<string, bool>()(reverse_value);
		
		}
	
	
	if  (request.countValues("Y_AUTOMATIC") ) {
		string automatic_value = request("Y_AUTOMATIC");
		yhypercoordinate_->automatic_ = MagTranslator<string, AxisAutomaticSetting>()(automatic_value);
	}
		
	
}

void YHyperCoordinateWrapper::print(ostream& out)  const
{
	out << "YHyperCoordinateWrapper[]";
}



