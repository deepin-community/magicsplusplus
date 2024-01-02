
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file NetcdfInterpretorAttributes.h
    \\brief Definition of NetcdfInterpretor Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "NetcdfInterpretorWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



NetcdfInterpretorWrapper::NetcdfInterpretorWrapper(): netcdfinterpretor_(new NetcdfInterpretor())


{


	

}
NetcdfInterpretorWrapper::NetcdfInterpretorWrapper(NetcdfInterpretor* netcdfinterpretor): netcdfinterpretor_(netcdfinterpretor)
{

	
}

NetcdfInterpretorWrapper::~NetcdfInterpretorWrapper()
{

}

void NetcdfInterpretorWrapper::set(const MagRequest& request)
{

	

	if  (request.countValues("NETCDF_FILENAME") ) {
		string path_value = request("NETCDF_FILENAME");
		netcdfinterpretor_->path_ = path_value;
		}
	stringarray  dimension_value;
	for (int i = 0; i < request.countValues("NETCDF_DIMENSION_SETTING"); i++)
		dimension_value.push_back((string)request("NETCDF_DIMENSION_SETTING", i));
	if ( !dimension_value.empty() )
		netcdfinterpretor_->dimension_ = dimension_value;
	if  (request.countValues("NETCDF_TIME_VARIABLE") ) {
		string time_variable_value = request("NETCDF_TIME_VARIABLE");
		netcdfinterpretor_->time_variable_ = time_variable_value;
		}
	if  (request.countValues("NETCDF_LEVEL_VARIABLE") ) {
		string level_variable_value = request("NETCDF_LEVEL_VARIABLE");
		netcdfinterpretor_->level_variable_ = level_variable_value;
		}
	if  (request.countValues("NETCDF_NUMBER_VARIABLE") ) {
		string number_variable_value = request("NETCDF_NUMBER_VARIABLE");
		netcdfinterpretor_->number_variable_ = number_variable_value;
		}
	if  (request.countValues("NETCDF_TIME_DIMENSION_SETTING") ) {
		string time_dimension_value = request("NETCDF_TIME_DIMENSION_SETTING");
		netcdfinterpretor_->time_dimension_ = time_dimension_value;
		}
	if  (request.countValues("NETCDF_LEVEL_DIMENSION_SETTING") ) {
		string level_dimension_value = request("NETCDF_LEVEL_DIMENSION_SETTING");
		netcdfinterpretor_->level_dimension_ = level_dimension_value;
		}
	if  (request.countValues("NETCDF_NUMBER_DIMENSION_SETTING") ) {
		string number_dimension_value = request("NETCDF_NUMBER_DIMENSION_SETTING");
		netcdfinterpretor_->number_dimension_ = number_dimension_value;
		}
	if  (request.countValues("NETCDF_DIMENSION_SETTING_METHOD") ) {
		string dimension_method_value = request("NETCDF_DIMENSION_SETTING_METHOD");
		netcdfinterpretor_->dimension_method_ = dimension_method_value;
		}
	if  (request.countValues("NETCDF_LATITUDE_VARIABLE") ) {
		string latitude_value = request("NETCDF_LATITUDE_VARIABLE");
		netcdfinterpretor_->latitude_ = latitude_value;
		}
	if  (request.countValues("NETCDF_LONGITUDE_VARIABLE") ) {
		string longitude_value = request("NETCDF_LONGITUDE_VARIABLE");
		netcdfinterpretor_->longitude_ = longitude_value;
		}
	if  (request.countValues("NETCDF_SPEED_COMPONENT_VARIABLE") ) {
		string speed_value = request("NETCDF_SPEED_COMPONENT_VARIABLE");
		netcdfinterpretor_->speed_ = speed_value;
		}
	if  (request.countValues("NETCDF_DIRECTION_COMPONENT_VARIABLE") ) {
		string direction_value = request("NETCDF_DIRECTION_COMPONENT_VARIABLE");
		netcdfinterpretor_->direction_ = direction_value;
		}
	if  (request.countValues("NETCDF_VALUE_VARIABLE") ) {
		string field_value = request("NETCDF_VALUE_VARIABLE");
		netcdfinterpretor_->field_ = field_value;
		}
	if  (request.countValues("NETCDF_X_COMPONENT_VARIABLE") ) {
		string x_component_value = request("NETCDF_X_COMPONENT_VARIABLE");
		netcdfinterpretor_->x_component_ = x_component_value;
		}
	if  (request.countValues("NETCDF_Y_COMPONENT_VARIABLE") ) {
		string y_component_value = request("NETCDF_Y_COMPONENT_VARIABLE");
		netcdfinterpretor_->y_component_ = y_component_value;
		}
	if  (request.countValues("NETCDF_COLOUR_COMPONENT_VARIABLE") ) {
		string colour_component_value = request("NETCDF_COLOUR_COMPONENT_VARIABLE");
		netcdfinterpretor_->colour_component_ = colour_component_value;
		}
	if  (request.countValues("NETCDF_FIELD_AUTOMATIC_SCALING") ) {
		string automatic_scaling_value = request("NETCDF_FIELD_AUTOMATIC_SCALING");
		
		netcdfinterpretor_->automatic_scaling_ = MagTranslator<string, bool>()(automatic_scaling_value);
		
		}
	if  (request.countValues("NETCDF_FIELD_SCALING_FACTOR") ) {
		double scaling_value = request("NETCDF_FIELD_SCALING_FACTOR");
		netcdfinterpretor_->scaling_ = scaling_value;
		}
	if  (request.countValues("NETCDF_FIELD_ADD_OFFSET") ) {
		double offset_value = request("NETCDF_FIELD_ADD_OFFSET");
		netcdfinterpretor_->offset_ = offset_value;
		}
	if  (request.countValues("NETCDF_MISSING_ATTRIBUTE") ) {
		string missing_attribute_value = request("NETCDF_MISSING_ATTRIBUTE");
		netcdfinterpretor_->missing_attribute_ = missing_attribute_value;
		}
	if  (request.countValues("NETCDF_REFERENCE_DATE") ) {
		string reference_value = request("NETCDF_REFERENCE_DATE");
		netcdfinterpretor_->reference_ = reference_value;
		}
	if  (request.countValues("NETCDF_FIELD_SUPPRESS_BELOW") ) {
		double suppress_below_value = request("NETCDF_FIELD_SUPPRESS_BELOW");
		netcdfinterpretor_->suppress_below_ = suppress_below_value;
		}
	if  (request.countValues("NETCDF_FIELD_SUPPRESS_ABOVE") ) {
		double suppress_above_value = request("NETCDF_FIELD_SUPPRESS_ABOVE");
		netcdfinterpretor_->suppress_above_ = suppress_above_value;
		}
	if  (request.countValues("NETCDF_X_VARIABLE") ) {
		string x_value = request("NETCDF_X_VARIABLE");
		netcdfinterpretor_->x_ = x_value;
		}
	if  (request.countValues("NETCDF_X2_VARIABLE") ) {
		string x2_value = request("NETCDF_X2_VARIABLE");
		netcdfinterpretor_->x2_ = x2_value;
		}
	if  (request.countValues("NETCDF_Y_VARIABLE") ) {
		string y_value = request("NETCDF_Y_VARIABLE");
		netcdfinterpretor_->y_ = y_value;
		}
	if  (request.countValues("NETCDF_Y2_VARIABLE") ) {
		string y2_value = request("NETCDF_Y2_VARIABLE");
		netcdfinterpretor_->y2_ = y2_value;
		}
	if  (request.countValues("NETCDF_X_AUXILIARY_VARIABLE") ) {
		string aux_x_value = request("NETCDF_X_AUXILIARY_VARIABLE");
		netcdfinterpretor_->aux_x_ = aux_x_value;
		}
	if  (request.countValues("NETCDF_X_GEOLINE_CONVENTION") ) {
		string geo_x_convention_value = request("NETCDF_X_GEOLINE_CONVENTION");
		netcdfinterpretor_->geo_x_convention_ = geo_x_convention_value;
		}
	if  (request.countValues("NETCDF_Y_GEOLINE_CONVENTION") ) {
		string geo_y_convention_value = request("NETCDF_Y_GEOLINE_CONVENTION");
		netcdfinterpretor_->geo_y_convention_ = geo_y_convention_value;
		}
	if  (request.countValues("NETCDF_Y_AUXILIARY_VARIABLE") ) {
		string aux_y_value = request("NETCDF_Y_AUXILIARY_VARIABLE");
		netcdfinterpretor_->aux_y_ = aux_y_value;
		}
	if  (request.countValues("NETCDF_MATRIX_PRIMARY_INDEX") ) {
		string primary_index_value = request("NETCDF_MATRIX_PRIMARY_INDEX");
		netcdfinterpretor_->primary_index_ = primary_index_value;
		}
	if  (request.countValues("NETCDF_MATRIX_INTERPRETATION") ) {
		string interpretation_value = request("NETCDF_MATRIX_INTERPRETATION");
		netcdfinterpretor_->interpretation_ = interpretation_value;
		}
	if  (request.countValues("NETCDF_IGNORE_MISSING_VALUE") ) {
		string ignore_missing_value = request("NETCDF_IGNORE_MISSING_VALUE");
		
		netcdfinterpretor_->ignore_missing_ = MagTranslator<string, bool>()(ignore_missing_value);
		
		}
	
	
}

void NetcdfInterpretorWrapper::print(ostream& out)  const
{
	out << "NetcdfInterpretorWrapper[]";
}


