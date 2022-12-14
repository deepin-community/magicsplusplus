
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file WrepRootNodeAttributes.h
    \\brief Definition of WrepRootNode Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "WrepRootNodeWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



WrepRootNodeWrapper::WrepRootNodeWrapper(): wreprootnode_(new WrepRootNode())


{


	

}
WrepRootNodeWrapper::WrepRootNodeWrapper(WrepRootNode* wreprootnode): wreprootnode_(wreprootnode)
{

	
}

WrepRootNodeWrapper::~WrepRootNodeWrapper()
{

}

void WrepRootNodeWrapper::set(const MagRequest& request)
{

	

	if  (request.countValues("WREP_NODE_WIDTH") ) {
		double pixel_width_value = request("WREP_NODE_WIDTH");
		wreprootnode_->pixel_width_ = pixel_width_value;
		}
	if  (request.countValues("WREP_NODE_HEIGHT") ) {
		double pixel_height_value = request("WREP_NODE_HEIGHT");
		wreprootnode_->pixel_height_ = pixel_height_value;
		}
	if  (request.countValues("WREP_NODE_MAPPING_ANCHOR") ) {
		string anchor_value = request("WREP_NODE_MAPPING_ANCHOR");
		wreprootnode_->anchor_ = anchor_value;
		}
	
	
}

void WrepRootNodeWrapper::print(ostream& out)  const
{
	out << "WrepRootNodeWrapper[]";
}


