
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file XmlViewNodeAttributes.h
    \\brief Definition of XmlViewNode Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "XmlViewNodeAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

XmlViewNodeAttributes::XmlViewNodeAttributes():
	fitted_(ParameterManager::getString("view_fitted_mode"))
	,
	transformation_(MagTranslator<string, Transformation>().magics("subpage_map_projection"))
	
{
}


XmlViewNodeAttributes::~XmlViewNodeAttributes()
{

}


void XmlViewNodeAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(2);
	int i = 0;
	prefix[i++] = "view";
	prefix[i++] = "subpage_map";
	
	setAttribute(prefix, "view_fitted_mode", fitted_, params);
	
	setMember(prefix, "subpage_map_projection", transformation_, params);
	
}

void XmlViewNodeAttributes::copy(const XmlViewNodeAttributes& other)
{
	fitted_ = other.fitted_;
	transformation_ = unique_ptr<Transformation>(other.transformation_->clone());
	
}


bool XmlViewNodeAttributes::accept(const string& node)
{

	if ( magCompare(node, "map")  )
		return true;
	if ( acceptNode(node, transformation_) )
		return true;
	
	return false;
}

void XmlViewNodeAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "map")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		setMember(node.name(), transformation_, node);
		
	}
	for (auto &elt : node.elements())
	{
		setMember(elt->name(), transformation_, *elt);
		
	}
}

void XmlViewNodeAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " fitted = " <<  fitted_;
	out << " transformation = " <<  *transformation_;
	
	out << "]" << "\n";
}

void XmlViewNodeAttributes::toxml(ostream& out)  const
{
	out <<  "\"map\"";
	out << ", \"view_fitted_mode\":";
	niceprint(out,fitted_);
	out << ", \"subpage_map_projection\":";
	transformation_->toxml(out);
	
}

static MagicsParameter<string> view_fitted_mode("view_fitted_mode", "off");
static MagicsParameter<string> subpage_map_projection("subpage_map_projection", "cylindrical");
#include "GeoRectangularProjection.h"
#include "CartesianTransformation.h"
#include "TaylorProjection.h"
#include "Tephigram.h"
#include "Skewt.h"
#include "Emagram.h"
static SimpleObjectMaker<GeoRectangularProjection , Transformation> cylindrical_GeoRectangularProjection("cylindrical");
static SimpleObjectMaker<CartesianTransformation , Transformation> cartesian_CartesianTransformation("cartesian");
static SimpleObjectMaker<CartesianTransformation , Transformation> none_CartesianTransformation("none");
static SimpleObjectMaker<TaylorProjection , Transformation> taylor_TaylorProjection("taylor");
static SimpleObjectMaker<Tephigram , Transformation> tephigram_Tephigram("tephigram");
static SimpleObjectMaker<Skewt , Transformation> skew_t_Skewt("skew_t");
static SimpleObjectMaker<Emagram , Transformation> emagram_Emagram("emagram");
