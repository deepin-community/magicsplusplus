
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file SimplePolylineInputAttributes.h
    \\brief Definition of SimplePolylineInput Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "SimplePolylineInputWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



SimplePolylineInputWrapper::SimplePolylineInputWrapper(): simplepolylineinput_(new SimplePolylineInput())


{


	

}
SimplePolylineInputWrapper::SimplePolylineInputWrapper(SimplePolylineInput* simplepolylineinput): simplepolylineinput_(simplepolylineinput)
{

	
}

SimplePolylineInputWrapper::~SimplePolylineInputWrapper()
{

}

void SimplePolylineInputWrapper::set(const MagRequest& request)
{

	

	doublearray  latitudes_value;
	for (int i = 0; i < request.countValues("POLYLINE_INPUT_LATITUDES"); i++)
		latitudes_value.push_back((double)request("POLYLINE_INPUT_LATITUDES", i));
	if ( !latitudes_value.empty() )
		simplepolylineinput_->latitudes_ = latitudes_value;
	doublearray  longitudes_value;
	for (int i = 0; i < request.countValues("POLYLINE_INPUT_LONGITUDES"); i++)
		longitudes_value.push_back((double)request("POLYLINE_INPUT_LONGITUDES", i));
	if ( !longitudes_value.empty() )
		simplepolylineinput_->longitudes_ = longitudes_value;
	doublearray  values_value;
	for (int i = 0; i < request.countValues("POLYLINE_INPUT_VALUES"); i++)
		values_value.push_back((double)request("POLYLINE_INPUT_VALUES", i));
	if ( !values_value.empty() )
		simplepolylineinput_->values_ = values_value;
	if  (request.countValues("POLYLINE_INPUT_BREAK_INDICATOR") ) {
		double breakvalue_value = request("POLYLINE_INPUT_BREAK_INDICATOR");
		simplepolylineinput_->breakvalue_ = breakvalue_value;
		}
	if  (request.countValues("POLYLINE_INPUT_POSITIONS_FILENAME") ) {
		string position_filename_value = request("POLYLINE_INPUT_POSITIONS_FILENAME");
		simplepolylineinput_->position_filename_ = position_filename_value;
		}
	if  (request.countValues("POLYLINE_INPUT_VALUES_FILENAME") ) {
		string values_filename_value = request("POLYLINE_INPUT_VALUES_FILENAME");
		simplepolylineinput_->values_filename_ = values_filename_value;
		}
	
	
}

void SimplePolylineInputWrapper::print(ostream& out)  const
{
	out << "SimplePolylineInputWrapper[]";
}


