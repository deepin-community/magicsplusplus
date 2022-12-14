
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file ImageCalculateColourTechniqueAttributes.h
    \\brief Definition of ImageCalculateColourTechnique Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "ImageCalculateColourTechniqueWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



ImageCalculateColourTechniqueWrapper::ImageCalculateColourTechniqueWrapper(): imagecalculatecolourtechnique_(new ImageCalculateColourTechnique())


{


	

}
ImageCalculateColourTechniqueWrapper::ImageCalculateColourTechniqueWrapper(ImageCalculateColourTechnique* imagecalculatecolourtechnique): imagecalculatecolourtechnique_(imagecalculatecolourtechnique)
{

	
}

ImageCalculateColourTechniqueWrapper::~ImageCalculateColourTechniqueWrapper()
{

}

void ImageCalculateColourTechniqueWrapper::set(const MagRequest& request)
{

	

	if  (request.countValues("IMAGE_COLOUR_DIRECTION") ) {
		string direction_value = request("IMAGE_COLOUR_DIRECTION");
		imagecalculatecolourtechnique_->direction_ = direction_value;
		}
	
	if  (request.countValues("IMAGE_MAX_LEVEL_COLOUR") ) {
		string max_value = request("IMAGE_MAX_LEVEL_COLOUR");
		imagecalculatecolourtechnique_->max_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(max_value));
	}
		
	if  (request.countValues("IMAGE_MIN_LEVEL_COLOUR") ) {
		string min_value = request("IMAGE_MIN_LEVEL_COLOUR");
		imagecalculatecolourtechnique_->min_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(min_value));
	}
		
	
}

void ImageCalculateColourTechniqueWrapper::print(ostream& out)  const
{
	out << "ImageCalculateColourTechniqueWrapper[]";
}




