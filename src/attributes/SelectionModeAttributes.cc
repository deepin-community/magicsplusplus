
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file SelectionModeAttributes.h
    \\brief Definition of SelectionMode Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "SelectionModeAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

SelectionModeAttributes::SelectionModeAttributes():
	background_opacity_(ParameterManager::getInt("selection_mode_background_opacity")),
	line_thickness_(ParameterManager::getInt("selection_mode_line_thickness")),
	object_instancies_(ParameterManager::getInt("selection_mode_object_instancies"))
	,
	background_colour_(MagTranslator<string, Colour>().magics("selection_mode_background_colour")),
	line_colour_(MagTranslator<string, Colour>().magics("selection_mode_line_colour")),
	line_style_(MagTranslator<string, LineStyle>().magics("selection_mode_line_style"))
	
{
}


SelectionModeAttributes::~SelectionModeAttributes()
{

}


void SelectionModeAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "selection_mode";
	
	setAttribute(prefix, "selection_mode_background_opacity", background_opacity_, params);
	setAttribute(prefix, "selection_mode_line_thickness", line_thickness_, params);
	setAttribute(prefix, "selection_mode_object_instancies", object_instancies_, params);
	
	setMember(prefix, "selection_mode_background_colour", background_colour_, params);
	setMember(prefix, "selection_mode_line_colour", line_colour_, params);
	setAttribute(prefix, "selection_mode_line_style", line_style_, params);
	
}

void SelectionModeAttributes::copy(const SelectionModeAttributes& other)
{
	background_opacity_ = other.background_opacity_;
	line_thickness_ = other.line_thickness_;
	object_instancies_ = other.object_instancies_;
	background_colour_ = unique_ptr<Colour>(other.background_colour_->clone());
	line_colour_ = unique_ptr<Colour>(other.line_colour_->clone());
	line_style_ = other.line_style_;
	
}


bool SelectionModeAttributes::accept(const string& node)
{

	if ( magCompare(node, "interactive_mode")  )
		return true;
	
	return false;
}

void SelectionModeAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "interactive_mode")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void SelectionModeAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " background_opacity = " <<  background_opacity_;
	out << " line_thickness = " <<  line_thickness_;
	out << " object_instancies = " <<  object_instancies_;
	out << " background_colour = " <<  *background_colour_;
	out << " line_colour = " <<  *line_colour_;
	out << " line_style = " <<  line_style_;
	
	out << "]" << "\n";
}

void SelectionModeAttributes::toxml(ostream& out)  const
{
	out <<  "\"interactive_mode\"";
	out << ", \"selection_mode_background_opacity\":";
	niceprint(out,background_opacity_);
	out << ", \"selection_mode_line_thickness\":";
	niceprint(out,line_thickness_);
	out << ", \"selection_mode_object_instancies\":";
	niceprint(out,object_instancies_);
	out << ", \"selection_mode_background_colour\":";
	niceprint(out, *background_colour_);
	out << ", \"selection_mode_line_colour\":";
	niceprint(out, *line_colour_);
	out << ", \"selection_mode_line_style\":";
	niceprint(out, line_style_);
	
}

static MagicsParameter<int> selection_mode_background_opacity("selection_mode_background_opacity", 75);
static MagicsParameter<int> selection_mode_line_thickness("selection_mode_line_thickness", 2);
static MagicsParameter<int> selection_mode_object_instancies("selection_mode_object_instancies", 1);
static MagicsParameter<string> selection_mode_background_colour("selection_mode_background_colour", "blue");
static MagicsParameter<string> selection_mode_line_colour("selection_mode_line_colour", "blue");
static MagicsParameter<string> selection_mode_line_style("selection_mode_line_style", "solid");
