
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file GradientsColourTechniqueAttributes.h
    \\brief Definition of GradientsColourTechnique Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "GradientsColourTechniqueWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



GradientsColourTechniqueWrapper::GradientsColourTechniqueWrapper(): gradientscolourtechnique_(new GradientsColourTechnique())


{


	
	ColourTechniqueWrapper::object(gradientscolourtechnique_);
	

}
GradientsColourTechniqueWrapper::GradientsColourTechniqueWrapper(GradientsColourTechnique* gradientscolourtechnique): gradientscolourtechnique_(gradientscolourtechnique)
{

	
	ColourTechniqueWrapper::object(gradientscolourtechnique_);
	
}

GradientsColourTechniqueWrapper::~GradientsColourTechniqueWrapper()
{

}

void GradientsColourTechniqueWrapper::set(const MagRequest& request)
{

	

	ColourTechniqueWrapper::set(request);
	

	stringarray  colours_value;
	for (int i = 0; i < request.countValues("CONTOUR_GRADIENTS_COLOUR_LIST"); i++)
		colours_value.push_back((string)request("CONTOUR_GRADIENTS_COLOUR_LIST", i));
	if ( !colours_value.empty() )
		gradientscolourtechnique_->colours_ = colours_value;
	if  (request.countValues("CONTOUR_GRADIENTS_WAYPOINT_METHOD") ) {
		string stop_method_value = request("CONTOUR_GRADIENTS_WAYPOINT_METHOD");
		gradientscolourtechnique_->stop_method_ = stop_method_value;
		}
	if  (request.countValues("CONTOUR_GRADIENTS_TECHNIQUE") ) {
		string technique_value = request("CONTOUR_GRADIENTS_TECHNIQUE");
		gradientscolourtechnique_->technique_ = technique_value;
		}
	if  (request.countValues("CONTOUR_GRADIENTS_TECHNIQUE_DIRECTION") ) {
		string technique_direction_value = request("CONTOUR_GRADIENTS_TECHNIQUE_DIRECTION");
		gradientscolourtechnique_->technique_direction_ = technique_direction_value;
		}
	intarray steps_value;
	for (int i = 0; i < request.countValues("CONTOUR_GRADIENTS_STEP_LIST"); i++)
		steps_value.push_back((int)request("CONTOUR_GRADIENTS_STEP_LIST", i));
	if ( !steps_value.empty() )
		gradientscolourtechnique_->steps_ = steps_value;
	
	
}

void GradientsColourTechniqueWrapper::print(ostream& out)  const
{
	out << "GradientsColourTechniqueWrapper[]";
}


