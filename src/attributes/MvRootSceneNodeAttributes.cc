
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file MvRootSceneNodeAttributes.h
    \\brief Definition of MvRootSceneNode Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "MvRootSceneNodeAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

MvRootSceneNodeAttributes::MvRootSceneNodeAttributes():
	width_(ParameterManager::getDouble("super_page_x_length")),
	height_(ParameterManager::getDouble("super_page_y_length")),
	frame_(ParameterManager::getBool("super_page_frame")),
	thickness_(ParameterManager::getInt("super_page_frame_thickness")),
	plot_layout_(ParameterManager::getString("layout")),
	plot_start_(ParameterManager::getString("plot_start")),
	plot_direction_(ParameterManager::getString("plot_direction")),
	legend_(ParameterManager::getBool("legend"))
	,
	colour_(MagTranslator<string, Colour>().magics("super_page_frame_colour")),
	style_(MagTranslator<string, LineStyle>().magics("super_page_frame_line_style"))
	
{
}


MvRootSceneNodeAttributes::~MvRootSceneNodeAttributes()
{

}


void MvRootSceneNodeAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "super_page";
	
	setAttribute(prefix, "super_page_x_length", width_, params);
	setAttribute(prefix, "super_page_y_length", height_, params);
	setAttribute(prefix, "super_page_frame", frame_, params);
	setAttribute(prefix, "super_page_frame_thickness", thickness_, params);
	setAttribute(prefix, "layout", plot_layout_, params);
	setAttribute(prefix, "plot_start", plot_start_, params);
	setAttribute(prefix, "plot_direction", plot_direction_, params);
	setAttribute(prefix, "legend", legend_, params);
	
	setMember(prefix, "super_page_frame_colour", colour_, params);
	setAttribute(prefix, "super_page_frame_line_style", style_, params);
	
}

void MvRootSceneNodeAttributes::copy(const MvRootSceneNodeAttributes& other)
{
	width_ = other.width_;
	height_ = other.height_;
	frame_ = other.frame_;
	thickness_ = other.thickness_;
	plot_layout_ = other.plot_layout_;
	plot_start_ = other.plot_start_;
	plot_direction_ = other.plot_direction_;
	legend_ = other.legend_;
	colour_ = unique_ptr<Colour>(other.colour_->clone());
	style_ = other.style_;
	
}


bool MvRootSceneNodeAttributes::accept(const string& node)
{

	if ( magCompare(node, "super_page")  )
		return true;
	
	return false;
}

void MvRootSceneNodeAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "super_page")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void MvRootSceneNodeAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " width = " <<  width_;
	out << " height = " <<  height_;
	out << " frame = " <<  frame_;
	out << " thickness = " <<  thickness_;
	out << " plot_layout = " <<  plot_layout_;
	out << " plot_start = " <<  plot_start_;
	out << " plot_direction = " <<  plot_direction_;
	out << " legend = " <<  legend_;
	out << " colour = " <<  *colour_;
	out << " style = " <<  style_;
	
	out << "]" << "\n";
}

void MvRootSceneNodeAttributes::toxml(ostream& out)  const
{
	out <<  "\"super_page\"";
	out << ", \"super_page_x_length\":";
	niceprint(out,width_);
	out << ", \"super_page_y_length\":";
	niceprint(out,height_);
	out << ", \"super_page_frame\":";
	niceprint(out,frame_);
	out << ", \"super_page_frame_thickness\":";
	niceprint(out,thickness_);
	out << ", \"layout\":";
	niceprint(out,plot_layout_);
	out << ", \"plot_start\":";
	niceprint(out,plot_start_);
	out << ", \"plot_direction\":";
	niceprint(out,plot_direction_);
	out << ", \"legend\":";
	niceprint(out,legend_);
	out << ", \"super_page_frame_colour\":";
	niceprint(out, *colour_);
	out << ", \"super_page_frame_line_style\":";
	niceprint(out, style_);
	
}

static MagicsParameter<double> super_page_x_length("super_page_x_length", 29.7);
static MagicsParameter<double> super_page_y_length("super_page_y_length", 21.0);
static MagicsParameter<string> super_page_frame("super_page_frame", "off");
static MagicsParameter<int> super_page_frame_thickness("super_page_frame_thickness", 1);
static MagicsParameter<string> layout("layout", "automatic");
static MagicsParameter<string> plot_start("plot_start", "bottom");
static MagicsParameter<string> plot_direction("plot_direction", "vertical");
static MagicsParameter<string> legend("legend", "off");
static MagicsParameter<string> super_page_frame_colour("super_page_frame_colour", "blue");
static MagicsParameter<string> super_page_frame_line_style("super_page_frame_line_style", "solid");
