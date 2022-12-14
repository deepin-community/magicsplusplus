
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file BoxPlotBoxAttributes.h
    \\brief Definition of BoxPlotBox Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "BoxPlotBoxAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

BoxPlotBoxAttributes::BoxPlotBoxAttributes():
	width_(ParameterManager::getDouble("boxplot_box_width"))
	,
	colour_(MagTranslator<string, Colour>().magics("boxplot_box_colour")),
	border_(MagTranslator<string, NoBoxPlotBoxBorder>().magics("boxplot_box_border")),
	median_(MagTranslator<string, NoBoxPlotMedian>().magics("boxplot_median"))
	
{
}


BoxPlotBoxAttributes::~BoxPlotBoxAttributes()
{

}


void BoxPlotBoxAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(2);
	int i = 0;
	prefix[i++] = "boxplot";
	prefix[i++] = "boxplot_box";
	
	setAttribute(prefix, "boxplot_box_width", width_, params);
	
	setMember(prefix, "boxplot_box_colour", colour_, params);
	setMember(prefix, "boxplot_box_border", border_, params);
	setMember(prefix, "boxplot_median", median_, params);
	
}

void BoxPlotBoxAttributes::copy(const BoxPlotBoxAttributes& other)
{
	width_ = other.width_;
	colour_ = unique_ptr<Colour>(other.colour_->clone());
	border_ = unique_ptr<NoBoxPlotBoxBorder>(other.border_->clone());
	median_ = unique_ptr<NoBoxPlotMedian>(other.median_->clone());
	
}


bool BoxPlotBoxAttributes::accept(const string& node)
{

	if ( magCompare(node, "box")  )
		return true;
	if ( acceptNode(node, border_) )
		return true;
	if ( acceptNode(node, median_) )
		return true;
	
	return false;
}

void BoxPlotBoxAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "box")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		setMember(node.name(), border_, node);
		setMember(node.name(), median_, node);
		
	}
	for (auto &elt : node.elements())
	{
		setMember(elt->name(), border_, *elt);
		setMember(elt->name(), median_, *elt);
		
	}
}

void BoxPlotBoxAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " width = " <<  width_;
	out << " colour = " <<  *colour_;
	out << " border = " <<  *border_;
	out << " median = " <<  *median_;
	
	out << "]" << "\n";
}

void BoxPlotBoxAttributes::toxml(ostream& out)  const
{
	out <<  "\"box\"";
	out << ", \"boxplot_box_width\":";
	niceprint(out,width_);
	out << ", \"boxplot_box_colour\":";
	niceprint(out, *colour_);
	out << ", \"boxplot_box_border\":";
	border_->toxml(out);
	out << ", \"boxplot_median\":";
	median_->toxml(out);
	
}

static MagicsParameter<double> boxplot_box_width("boxplot_box_width", 1.0);
static MagicsParameter<string> boxplot_box_colour("boxplot_box_colour", "sky");
static MagicsParameter<string> boxplot_box_border("boxplot_box_border", "on");
static MagicsParameter<string> boxplot_median("boxplot_median", "on");
#include "BoxPlotItem.h"
#include "BoxPlotBasicItem.h"
static SimpleObjectMaker<BoxPlotBoxBorder , NoBoxPlotBoxBorder> border_BoxPlotBoxBorder("border");
static SimpleObjectMaker<BoxPlotBoxBorder , NoBoxPlotBoxBorder> on_BoxPlotBoxBorder("on");
static SimpleObjectMaker<NoBoxPlotBoxBorder , NoBoxPlotBoxBorder> noborder_NoBoxPlotBoxBorder("noborder");
static SimpleObjectMaker<NoBoxPlotBoxBorder , NoBoxPlotBoxBorder> off_NoBoxPlotBoxBorder("off");
static SimpleObjectMaker<BoxPlotMedian , NoBoxPlotMedian> median_BoxPlotMedian("median");
static SimpleObjectMaker<BoxPlotMedian , NoBoxPlotMedian> on_BoxPlotMedian("on");
static SimpleObjectMaker<NoBoxPlotMedian , NoBoxPlotMedian> nomedian_NoBoxPlotMedian("nomedian");
static SimpleObjectMaker<NoBoxPlotMedian , NoBoxPlotMedian> off_NoBoxPlotMedian("off");
