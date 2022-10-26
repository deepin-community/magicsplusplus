
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file ObsDecoderAttributes.h
    \\brief Definition of ObsDecoder Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "ObsDecoderWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



ObsDecoderWrapper::ObsDecoderWrapper(): obsdecoder_(new ObsDecoder())


{


	

}
ObsDecoderWrapper::ObsDecoderWrapper(ObsDecoder* obsdecoder): obsdecoder_(obsdecoder)
{

	
}

ObsDecoderWrapper::~ObsDecoderWrapper()
{

}

void ObsDecoderWrapper::set(const MagRequest& request)
{

	

	if  (request.countValues("OBS_INPUT_FILE_NAME") ) {
		string file_name_value = request("OBS_INPUT_FILE_NAME");
		obsdecoder_->file_name_ = file_name_value;
		}
	if  (request.countValues("OBS_LEVEL") ) {
		int level_value = request("OBS_LEVEL");
		obsdecoder_->level_ = level_value;
		}
	if  (request.countValues("OBS_LEVEL_2") ) {
		int level2_value = request("OBS_LEVEL_2");
		obsdecoder_->level2_ = level2_value;
		}
	if  (request.countValues("OBS_LEVEL_TOLERANCE") ) {
		int tolerance_value = request("OBS_LEVEL_TOLERANCE");
		obsdecoder_->tolerance_ = tolerance_value;
		}
	stringarray  types_value;
	for (int i = 0; i < request.countValues("OBS_TYPE_LIST"); i++)
		types_value.push_back((string)request("OBS_TYPE_LIST", i));
	if ( !types_value.empty() )
		obsdecoder_->types_ = types_value;
	
	
}

void ObsDecoderWrapper::print(ostream& out)  const
{
	out << "ObsDecoderWrapper[]";
}


