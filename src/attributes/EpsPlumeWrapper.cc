
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file EpsPlumeAttributes.h
    \\brief Definition of EpsPlume Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "EpsPlumeWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



EpsPlumeWrapper::EpsPlumeWrapper(): epsplume_(new EpsPlume())


{


	

}
EpsPlumeWrapper::EpsPlumeWrapper(EpsPlume* epsplume): epsplume_(epsplume)
{

	
}

EpsPlumeWrapper::~EpsPlumeWrapper()
{

}

void EpsPlumeWrapper::set(const MagRequest& request)
{

	

	if  (request.countValues("EPS_PLUME_METHOD") ) {
		string method_value = request("EPS_PLUME_METHOD");
		epsplume_->method_ = method_value;
		}
	if  (request.countValues("EPS_PLUME_LEGEND") ) {
		string legend_value = request("EPS_PLUME_LEGEND");
		
		epsplume_->legend_ = MagTranslator<string, bool>()(legend_value);
		
		}
	if  (request.countValues("EPS_PLUME_MEMBERS") ) {
		string line_value = request("EPS_PLUME_MEMBERS");
		
		epsplume_->line_ = MagTranslator<string, bool>()(line_value);
		
		}
	if  (request.countValues("EPS_PLUME_LINE_THICKNESS") ) {
		int line_thickness_value = request("EPS_PLUME_LINE_THICKNESS");
		epsplume_->line_thickness_ = line_thickness_value;
		}
	if  (request.countValues("EPS_PLUME_FORECAST") ) {
		string forecast_value = request("EPS_PLUME_FORECAST");
		
		epsplume_->forecast_ = MagTranslator<string, bool>()(forecast_value);
		
		}
	if  (request.countValues("EPS_PLUME_FORECAST_LINE_THICKNESS") ) {
		int forecast_line_thickness_value = request("EPS_PLUME_FORECAST_LINE_THICKNESS");
		epsplume_->forecast_line_thickness_ = forecast_line_thickness_value;
		}
	if  (request.countValues("EPS_PLUME_CONTROL") ) {
		string control_value = request("EPS_PLUME_CONTROL");
		
		epsplume_->control_ = MagTranslator<string, bool>()(control_value);
		
		}
	if  (request.countValues("EPS_PLUME_CONTROL_LINE_THICKNESS") ) {
		int control_line_thickness_value = request("EPS_PLUME_CONTROL_LINE_THICKNESS");
		epsplume_->control_line_thickness_ = control_line_thickness_value;
		}
	if  (request.countValues("EPS_PLUME_MEDIAN") ) {
		string median_value = request("EPS_PLUME_MEDIAN");
		
		epsplume_->median_ = MagTranslator<string, bool>()(median_value);
		
		}
	if  (request.countValues("EPS_PLUME_MEDIAN_LINE_THICKNESS") ) {
		int median_line_thickness_value = request("EPS_PLUME_MEDIAN_LINE_THICKNESS");
		epsplume_->median_line_thickness_ = median_line_thickness_value;
		}
	if  (request.countValues("EPS_PLUME_SHADING") ) {
		string shading_value = request("EPS_PLUME_SHADING");
		
		epsplume_->shading_ = MagTranslator<string, bool>()(shading_value);
		
		}
	doublearray  shading_levels_value;
	for (int i = 0; i < request.countValues("EPS_PLUME_SHADING_LEVEL_LIST"); i++)
		shading_levels_value.push_back((double)request("EPS_PLUME_SHADING_LEVEL_LIST", i));
	if ( !shading_levels_value.empty() )
		epsplume_->shading_levels_ = shading_levels_value;
	stringarray  shading_colours_value;
	for (int i = 0; i < request.countValues("EPS_PLUME_SHADING_COLOUR_LIST"); i++)
		shading_colours_value.push_back((string)request("EPS_PLUME_SHADING_COLOUR_LIST", i));
	if ( !shading_colours_value.empty() )
		epsplume_->shading_colours_ = shading_colours_value;
	
	if  (request.countValues("EPS_PLUME_LINE_COLOUR") ) {
		string line_colour_value = request("EPS_PLUME_LINE_COLOUR");
		epsplume_->line_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(line_colour_value));
	}
		
	
	if  (request.countValues("EPS_PLUME_LINE_STYLE") ) {
		string line_style_value = request("EPS_PLUME_LINE_STYLE");
		epsplume_->line_style_ = MagTranslator<string, LineStyle>()(line_style_value);
	}
		
	if  (request.countValues("EPS_PLUME_FORECAST_LINE_COLOUR") ) {
		string forecast_line_colour_value = request("EPS_PLUME_FORECAST_LINE_COLOUR");
		epsplume_->forecast_line_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(forecast_line_colour_value));
	}
		
	
	if  (request.countValues("EPS_PLUME_FORECAST_LINE_STYLE") ) {
		string forecast_line_style_value = request("EPS_PLUME_FORECAST_LINE_STYLE");
		epsplume_->forecast_line_style_ = MagTranslator<string, LineStyle>()(forecast_line_style_value);
	}
		
	if  (request.countValues("EPS_PLUME_CONTROL_LINE_COLOUR") ) {
		string control_line_colour_value = request("EPS_PLUME_CONTROL_LINE_COLOUR");
		epsplume_->control_line_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(control_line_colour_value));
	}
		
	
	if  (request.countValues("EPS_PLUME_CONTROL_LINE_STYLE") ) {
		string control_line_style_value = request("EPS_PLUME_CONTROL_LINE_STYLE");
		epsplume_->control_line_style_ = MagTranslator<string, LineStyle>()(control_line_style_value);
	}
		
	if  (request.countValues("EPS_PLUME_MEDIAN_LINE_COLOUR") ) {
		string median_line_colour_value = request("EPS_PLUME_MEDIAN_LINE_COLOUR");
		epsplume_->median_line_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(median_line_colour_value));
	}
		
	
	if  (request.countValues("EPS_PLUME_MEDIAN_LINE_STYLE") ) {
		string median_line_style_value = request("EPS_PLUME_MEDIAN_LINE_STYLE");
		epsplume_->median_line_style_ = MagTranslator<string, LineStyle>()(median_line_style_value);
	}
		
	
}

void EpsPlumeWrapper::print(ostream& out)  const
{
	out << "EpsPlumeWrapper[]";
}










