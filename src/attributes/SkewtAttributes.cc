
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file SkewtAttributes.h
    \\brief Definition of Skewt Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "SkewtAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

SkewtAttributes::SkewtAttributes():
	x_min_(ParameterManager::getDouble("x_min")),
	x_automatic_(ParameterManager::getBool("subpage_x_automatic")),
	y_automatic_(ParameterManager::getBool("subpage_y_automatic")),
	x_max_(ParameterManager::getDouble("x_max")),
	y_min_(ParameterManager::getDouble("y_min")),
	y_max_(ParameterManager::getDouble("y_max")),
	annotation_width_(ParameterManager::getDouble("thermo_annotation_width"))
	
	
{
}


SkewtAttributes::~SkewtAttributes()
{

}


void SkewtAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "";
	
	setAttribute(prefix, "x_min", x_min_, params);
	setAttribute(prefix, "subpage_x_automatic", x_automatic_, params);
	setAttribute(prefix, "subpage_y_automatic", y_automatic_, params);
	setAttribute(prefix, "x_max", x_max_, params);
	setAttribute(prefix, "y_min", y_min_, params);
	setAttribute(prefix, "y_max", y_max_, params);
	setAttribute(prefix, "thermo_annotation_width", annotation_width_, params);
	
	
}

void SkewtAttributes::copy(const SkewtAttributes& other)
{
	x_min_ = other.x_min_;
	x_automatic_ = other.x_automatic_;
	y_automatic_ = other.y_automatic_;
	x_max_ = other.x_max_;
	y_min_ = other.y_min_;
	y_max_ = other.y_max_;
	annotation_width_ = other.annotation_width_;
	
}


bool SkewtAttributes::accept(const string& node)
{

	if ( magCompare(node, "thermo")  )
		return true;
	
	return false;
}

void SkewtAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "thermo")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void SkewtAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " x_min = " <<  x_min_;
	out << " x_automatic = " <<  x_automatic_;
	out << " y_automatic = " <<  y_automatic_;
	out << " x_max = " <<  x_max_;
	out << " y_min = " <<  y_min_;
	out << " y_max = " <<  y_max_;
	out << " annotation_width = " <<  annotation_width_;
	
	out << "]" << "\n";
}

void SkewtAttributes::toxml(ostream& out)  const
{
	out <<  "\"thermo\"";
	out << ", \"x_min\":";
	niceprint(out,x_min_);
	out << ", \"subpage_x_automatic\":";
	niceprint(out,x_automatic_);
	out << ", \"subpage_y_automatic\":";
	niceprint(out,y_automatic_);
	out << ", \"x_max\":";
	niceprint(out,x_max_);
	out << ", \"y_min\":";
	niceprint(out,y_min_);
	out << ", \"y_max\":";
	niceprint(out,y_max_);
	out << ", \"thermo_annotation_width\":";
	niceprint(out,annotation_width_);
	
}

static MagicsParameter<double> x_min("x_min", 0);
static MagicsParameter<string> subpage_x_automatic("subpage_x_automatic", "off");
static MagicsParameter<string> subpage_y_automatic("subpage_y_automatic", "off");
static MagicsParameter<double> x_max("x_max", 100);
static MagicsParameter<double> y_min("y_min", 0);
static MagicsParameter<double> y_max("y_max", 100);
static MagicsParameter<double> thermo_annotation_width("thermo_annotation_width", 25);
