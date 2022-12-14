
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file LabelPlottingAttributes.h
    \\brief Definition of LabelPlotting Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "LabelPlottingAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

LabelPlottingAttributes::LabelPlottingAttributes():
	font_(ParameterManager::getString("map_label_font")),
	font_style_(ParameterManager::getString("map_label_font_style")),
	height_(ParameterManager::getDouble("map_label_height")),
	blanking_(ParameterManager::getBool("map_label_blanking")),
	latFrequency_(ParameterManager::getInt("map_label_latitude_frequency")),
	lonFrequency_(ParameterManager::getInt("map_label_longitude_frequency")),
	left_(ParameterManager::getBool("map_label_left")),
	right_(ParameterManager::getBool("map_label_right")),
	top_(ParameterManager::getBool("map_label_top")),
	bottom_(ParameterManager::getBool("map_label_bottom"))
	,
	colour_(MagTranslator<string, Colour>().magics("map_label_colour"))
	
{
}


LabelPlottingAttributes::~LabelPlottingAttributes()
{

}


void LabelPlottingAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(2);
	int i = 0;
	prefix[i++] = "map";
	prefix[i++] = "map_label";
	
	setAttribute(prefix, "map_label_font", font_, params);
	setAttribute(prefix, "map_label_font_style", font_style_, params);
	setAttribute(prefix, "map_label_height", height_, params);
	setAttribute(prefix, "map_label_blanking", blanking_, params);
	setAttribute(prefix, "map_label_latitude_frequency", latFrequency_, params);
	setAttribute(prefix, "map_label_longitude_frequency", lonFrequency_, params);
	setAttribute(prefix, "map_label_left", left_, params);
	setAttribute(prefix, "map_label_right", right_, params);
	setAttribute(prefix, "map_label_top", top_, params);
	setAttribute(prefix, "map_label_bottom", bottom_, params);
	
	setMember(prefix, "map_label_colour", colour_, params);
	
}

void LabelPlottingAttributes::copy(const LabelPlottingAttributes& other)
{
	font_ = other.font_;
	font_style_ = other.font_style_;
	height_ = other.height_;
	blanking_ = other.blanking_;
	latFrequency_ = other.latFrequency_;
	lonFrequency_ = other.lonFrequency_;
	left_ = other.left_;
	right_ = other.right_;
	top_ = other.top_;
	bottom_ = other.bottom_;
	colour_ = unique_ptr<Colour>(other.colour_->clone());
	
}


bool LabelPlottingAttributes::accept(const string& node)
{

	if ( magCompare(node, "label")  )
		return true;
	
	return false;
}

void LabelPlottingAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "label")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void LabelPlottingAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " font = " <<  font_;
	out << " font_style = " <<  font_style_;
	out << " height = " <<  height_;
	out << " blanking = " <<  blanking_;
	out << " latFrequency = " <<  latFrequency_;
	out << " lonFrequency = " <<  lonFrequency_;
	out << " left = " <<  left_;
	out << " right = " <<  right_;
	out << " top = " <<  top_;
	out << " bottom = " <<  bottom_;
	out << " colour = " <<  *colour_;
	
	out << "]" << "\n";
}

void LabelPlottingAttributes::toxml(ostream& out)  const
{
	out <<  "\"label\"";
	out << ", \"map_label_font\":";
	niceprint(out,font_);
	out << ", \"map_label_font_style\":";
	niceprint(out,font_style_);
	out << ", \"map_label_height\":";
	niceprint(out,height_);
	out << ", \"map_label_blanking\":";
	niceprint(out,blanking_);
	out << ", \"map_label_latitude_frequency\":";
	niceprint(out,latFrequency_);
	out << ", \"map_label_longitude_frequency\":";
	niceprint(out,lonFrequency_);
	out << ", \"map_label_left\":";
	niceprint(out,left_);
	out << ", \"map_label_right\":";
	niceprint(out,right_);
	out << ", \"map_label_top\":";
	niceprint(out,top_);
	out << ", \"map_label_bottom\":";
	niceprint(out,bottom_);
	out << ", \"map_label_colour\":";
	niceprint(out, *colour_);
	
}

static MagicsParameter<string> map_label_font("map_label_font", "sansserif");
static MagicsParameter<string> map_label_font_style("map_label_font_style", "normal");
static MagicsParameter<double> map_label_height("map_label_height", 0.25);
static MagicsParameter<string> map_label_blanking("map_label_blanking", "on");
static MagicsParameter<int> map_label_latitude_frequency("map_label_latitude_frequency", 1);
static MagicsParameter<int> map_label_longitude_frequency("map_label_longitude_frequency", 1);
static MagicsParameter<string> map_label_left("map_label_left", "on");
static MagicsParameter<string> map_label_right("map_label_right", "on");
static MagicsParameter<string> map_label_top("map_label_top", "on");
static MagicsParameter<string> map_label_bottom("map_label_bottom", "on");
static MagicsParameter<string> map_label_colour("map_label_colour", "black");
