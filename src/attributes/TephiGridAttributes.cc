
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file TephiGridAttributes.h
    \\brief Definition of TephiGrid Attributes class.

    This file is automatically generated.
    Do Not Edit!
*/

#include "TephiGridAttributes.h"
#include "MagicsParameter.h"
#include "ParameterSettings.h"

using namespace magics;

TephiGridAttributes::TephiGridAttributes():
	annotation_width_(ParameterManager::getDouble("thermo_annotation_width")),
	isotherm_(ParameterManager::getBool("thermo_isotherm_grid")),
	isotherm_thickness_(ParameterManager::getInt("thermo_isotherm_thickness")),
	isotherm_interval_(ParameterManager::getDouble("thermo_isotherm_interval")),
	isotherm_reference_(ParameterManager::getDouble("thermo_isotherm_reference")),
	isotherm_reference_thickness_(ParameterManager::getInt("thermo_isotherm_reference_thickness")),
	isotherm_label_font_(ParameterManager::getString("thermo_isotherm_label_font")),
	isotherm_label_style_(ParameterManager::getString("thermo_isotherm_label_font_style")),
	isotherm_label_size_(ParameterManager::getDouble("thermo_isotherm_label_font_size")),
	isotherm_label_frequency_(ParameterManager::getInt("thermo_isotherm_label_frequency")),
	isobar_(ParameterManager::getBool("thermo_isobar_grid")),
	isobar_thickness_(ParameterManager::getInt("thermo_isobar_thickness")),
	isobar_interval_(ParameterManager::getDouble("thermo_isobar_interval")),
	isobar_reference_(ParameterManager::getDouble("thermo_isobar_reference")),
	isobar_label_font_(ParameterManager::getString("thermo_isobar_label_font")),
	isobar_label_style_(ParameterManager::getString("thermo_isobar_label_font_style")),
	isobar_label_size_(ParameterManager::getDouble("thermo_isobar_label_font_size")),
	isobar_label_frequency_(ParameterManager::getInt("thermo_isobar_label_frequency")),
	dry_adiabatic_(ParameterManager::getBool("thermo_dry_adiabatic_grid")),
	dry_adiabatic_thickness_(ParameterManager::getInt("thermo_dry_adiabatic_thickness")),
	dry_adiabatic_interval_(ParameterManager::getDouble("thermo_dry_adiabatic_interval")),
	dry_adiabatic_reference_(ParameterManager::getDouble("thermo_dry_adiabatic_reference")),
	dry_adiabatic_label_font_(ParameterManager::getString("thermo_dry_adiabatic_label_font")),
	dry_adiabatic_label_style_(ParameterManager::getString("thermo_dry_adiabatic_label_font_style")),
	dry_adiabatic_label_size_(ParameterManager::getDouble("thermo_dry_adiabatic_label_font_size")),
	dry_adiabatic_label_frequency_(ParameterManager::getInt("thermo_dry_adiabatic_label_frequency")),
	saturated_adiabatic_(ParameterManager::getBool("thermo_saturated_adiabatic_grid")),
	saturated_adiabatic_thickness_(ParameterManager::getInt("thermo_saturated_adiabatic_thickness")),
	saturated_adiabatic_interval_(ParameterManager::getDouble("thermo_saturated_adiabatic_interval")),
	saturated_adiabatic_reference_(ParameterManager::getDouble("thermo_saturated_adiabatic_reference")),
	saturated_adiabatic_label_font_(ParameterManager::getString("thermo_saturated_adiabatic_label_font")),
	saturated_adiabatic_label_style_(ParameterManager::getString("thermo_saturated_adiabatic_label_font_style")),
	saturated_adiabatic_label_size_(ParameterManager::getDouble("thermo_saturated_adiabatic_label_font_size")),
	saturated_adiabatic_label_frequency_(ParameterManager::getInt("thermo_saturated_adiabatic_label_frequency")),
	mixing_ratio_(ParameterManager::getBool("thermo_mixing_ratio_grid")),
	mixing_ratio_thickness_(ParameterManager::getInt("thermo_mixing_ratio_thickness")),
	mixing_ratio_frequency_(ParameterManager::getInt("thermo_mixing_ratio_frequency")),
	mixing_ratio_label_font_(ParameterManager::getString("thermo_mixing_ratio_label_font")),
	mixing_ratio_label_style_(ParameterManager::getString("thermo_mixing_ratio_label_font_style")),
	mixing_ratio_label_size_(ParameterManager::getDouble("thermo_mixing_ratio_label_font_size")),
	mixing_ratio_label_frequency_(ParameterManager::getInt("thermo_mixing_ratio_label_frequency"))
	,
	isotherm_colour_(MagTranslator<string, Colour>().magics("thermo_isotherm_colour")),
	isotherm_style_(MagTranslator<string, LineStyle>().magics("thermo_isotherm_style")),
	isotherm_reference_colour_(MagTranslator<string, Colour>().magics("thermo_isotherm_reference_colour")),
	isotherm_reference_style_(MagTranslator<string, LineStyle>().magics("thermo_isotherm_reference_style")),
	isotherm_label_colour_(MagTranslator<string, Colour>().magics("thermo_isotherm_label_colour")),
	isobar_colour_(MagTranslator<string, Colour>().magics("thermo_isobar_colour")),
	isobar_style_(MagTranslator<string, LineStyle>().magics("thermo_isobar_style")),
	isobar_label_colour_(MagTranslator<string, Colour>().magics("thermo_isobar_label_colour")),
	dry_adiabatic_colour_(MagTranslator<string, Colour>().magics("thermo_dry_adiabatic_colour")),
	dry_adiabatic_style_(MagTranslator<string, LineStyle>().magics("thermo_dry_adiabatic_style")),
	dry_adiabatic_label_colour_(MagTranslator<string, Colour>().magics("thermo_dry_adiabatic_label_colour")),
	saturated_adiabatic_colour_(MagTranslator<string, Colour>().magics("thermo_saturated_adiabatic_colour")),
	saturated_adiabatic_style_(MagTranslator<string, LineStyle>().magics("thermo_saturated_adiabatic_style")),
	saturated_adiabatic_label_colour_(MagTranslator<string, Colour>().magics("thermo_saturated_adiabatic_label_colour")),
	mixing_ratio_colour_(MagTranslator<string, Colour>().magics("thermo_mixing_ratio_colour")),
	mixing_ratio_style_(MagTranslator<string, LineStyle>().magics("thermo_mixing_ratio_style")),
	mixing_ratio_label_colour_(MagTranslator<string, Colour>().magics("thermo_mixing_ratio_label_colour"))
	
{
}


TephiGridAttributes::~TephiGridAttributes()
{

}


void TephiGridAttributes::set(const std::map<string, string>& params)
{
	vector<string> prefix(1);
	int i = 0;
	prefix[i++] = "";
	
	setAttribute(prefix, "thermo_annotation_width", annotation_width_, params);
	setAttribute(prefix, "thermo_isotherm_grid", isotherm_, params);
	setAttribute(prefix, "thermo_isotherm_thickness", isotherm_thickness_, params);
	setAttribute(prefix, "thermo_isotherm_interval", isotherm_interval_, params);
	setAttribute(prefix, "thermo_isotherm_reference", isotherm_reference_, params);
	setAttribute(prefix, "thermo_isotherm_reference_thickness", isotherm_reference_thickness_, params);
	setAttribute(prefix, "thermo_isotherm_label_font", isotherm_label_font_, params);
	setAttribute(prefix, "thermo_isotherm_label_font_style", isotherm_label_style_, params);
	setAttribute(prefix, "thermo_isotherm_label_font_size", isotherm_label_size_, params);
	setAttribute(prefix, "thermo_isotherm_label_frequency", isotherm_label_frequency_, params);
	setAttribute(prefix, "thermo_isobar_grid", isobar_, params);
	setAttribute(prefix, "thermo_isobar_thickness", isobar_thickness_, params);
	setAttribute(prefix, "thermo_isobar_interval", isobar_interval_, params);
	setAttribute(prefix, "thermo_isobar_reference", isobar_reference_, params);
	setAttribute(prefix, "thermo_isobar_label_font", isobar_label_font_, params);
	setAttribute(prefix, "thermo_isobar_label_font_style", isobar_label_style_, params);
	setAttribute(prefix, "thermo_isobar_label_font_size", isobar_label_size_, params);
	setAttribute(prefix, "thermo_isobar_label_frequency", isobar_label_frequency_, params);
	setAttribute(prefix, "thermo_dry_adiabatic_grid", dry_adiabatic_, params);
	setAttribute(prefix, "thermo_dry_adiabatic_thickness", dry_adiabatic_thickness_, params);
	setAttribute(prefix, "thermo_dry_adiabatic_interval", dry_adiabatic_interval_, params);
	setAttribute(prefix, "thermo_dry_adiabatic_reference", dry_adiabatic_reference_, params);
	setAttribute(prefix, "thermo_dry_adiabatic_label_font", dry_adiabatic_label_font_, params);
	setAttribute(prefix, "thermo_dry_adiabatic_label_font_style", dry_adiabatic_label_style_, params);
	setAttribute(prefix, "thermo_dry_adiabatic_label_font_size", dry_adiabatic_label_size_, params);
	setAttribute(prefix, "thermo_dry_adiabatic_label_frequency", dry_adiabatic_label_frequency_, params);
	setAttribute(prefix, "thermo_saturated_adiabatic_grid", saturated_adiabatic_, params);
	setAttribute(prefix, "thermo_saturated_adiabatic_thickness", saturated_adiabatic_thickness_, params);
	setAttribute(prefix, "thermo_saturated_adiabatic_interval", saturated_adiabatic_interval_, params);
	setAttribute(prefix, "thermo_saturated_adiabatic_reference", saturated_adiabatic_reference_, params);
	setAttribute(prefix, "thermo_saturated_adiabatic_label_font", saturated_adiabatic_label_font_, params);
	setAttribute(prefix, "thermo_saturated_adiabatic_label_font_style", saturated_adiabatic_label_style_, params);
	setAttribute(prefix, "thermo_saturated_adiabatic_label_font_size", saturated_adiabatic_label_size_, params);
	setAttribute(prefix, "thermo_saturated_adiabatic_label_frequency", saturated_adiabatic_label_frequency_, params);
	setAttribute(prefix, "thermo_mixing_ratio_grid", mixing_ratio_, params);
	setAttribute(prefix, "thermo_mixing_ratio_thickness", mixing_ratio_thickness_, params);
	setAttribute(prefix, "thermo_mixing_ratio_frequency", mixing_ratio_frequency_, params);
	setAttribute(prefix, "thermo_mixing_ratio_label_font", mixing_ratio_label_font_, params);
	setAttribute(prefix, "thermo_mixing_ratio_label_font_style", mixing_ratio_label_style_, params);
	setAttribute(prefix, "thermo_mixing_ratio_label_font_size", mixing_ratio_label_size_, params);
	setAttribute(prefix, "thermo_mixing_ratio_label_frequency", mixing_ratio_label_frequency_, params);
	
	setMember(prefix, "thermo_isotherm_colour", isotherm_colour_, params);
	setAttribute(prefix, "thermo_isotherm_style", isotherm_style_, params);
	setMember(prefix, "thermo_isotherm_reference_colour", isotherm_reference_colour_, params);
	setAttribute(prefix, "thermo_isotherm_reference_style", isotherm_reference_style_, params);
	setMember(prefix, "thermo_isotherm_label_colour", isotherm_label_colour_, params);
	setMember(prefix, "thermo_isobar_colour", isobar_colour_, params);
	setAttribute(prefix, "thermo_isobar_style", isobar_style_, params);
	setMember(prefix, "thermo_isobar_label_colour", isobar_label_colour_, params);
	setMember(prefix, "thermo_dry_adiabatic_colour", dry_adiabatic_colour_, params);
	setAttribute(prefix, "thermo_dry_adiabatic_style", dry_adiabatic_style_, params);
	setMember(prefix, "thermo_dry_adiabatic_label_colour", dry_adiabatic_label_colour_, params);
	setMember(prefix, "thermo_saturated_adiabatic_colour", saturated_adiabatic_colour_, params);
	setAttribute(prefix, "thermo_saturated_adiabatic_style", saturated_adiabatic_style_, params);
	setMember(prefix, "thermo_saturated_adiabatic_label_colour", saturated_adiabatic_label_colour_, params);
	setMember(prefix, "thermo_mixing_ratio_colour", mixing_ratio_colour_, params);
	setAttribute(prefix, "thermo_mixing_ratio_style", mixing_ratio_style_, params);
	setMember(prefix, "thermo_mixing_ratio_label_colour", mixing_ratio_label_colour_, params);
	
}

void TephiGridAttributes::copy(const TephiGridAttributes& other)
{
	annotation_width_ = other.annotation_width_;
	isotherm_ = other.isotherm_;
	isotherm_thickness_ = other.isotherm_thickness_;
	isotherm_interval_ = other.isotherm_interval_;
	isotherm_reference_ = other.isotherm_reference_;
	isotherm_reference_thickness_ = other.isotherm_reference_thickness_;
	isotherm_label_font_ = other.isotherm_label_font_;
	isotherm_label_style_ = other.isotherm_label_style_;
	isotherm_label_size_ = other.isotherm_label_size_;
	isotherm_label_frequency_ = other.isotherm_label_frequency_;
	isobar_ = other.isobar_;
	isobar_thickness_ = other.isobar_thickness_;
	isobar_interval_ = other.isobar_interval_;
	isobar_reference_ = other.isobar_reference_;
	isobar_label_font_ = other.isobar_label_font_;
	isobar_label_style_ = other.isobar_label_style_;
	isobar_label_size_ = other.isobar_label_size_;
	isobar_label_frequency_ = other.isobar_label_frequency_;
	dry_adiabatic_ = other.dry_adiabatic_;
	dry_adiabatic_thickness_ = other.dry_adiabatic_thickness_;
	dry_adiabatic_interval_ = other.dry_adiabatic_interval_;
	dry_adiabatic_reference_ = other.dry_adiabatic_reference_;
	dry_adiabatic_label_font_ = other.dry_adiabatic_label_font_;
	dry_adiabatic_label_style_ = other.dry_adiabatic_label_style_;
	dry_adiabatic_label_size_ = other.dry_adiabatic_label_size_;
	dry_adiabatic_label_frequency_ = other.dry_adiabatic_label_frequency_;
	saturated_adiabatic_ = other.saturated_adiabatic_;
	saturated_adiabatic_thickness_ = other.saturated_adiabatic_thickness_;
	saturated_adiabatic_interval_ = other.saturated_adiabatic_interval_;
	saturated_adiabatic_reference_ = other.saturated_adiabatic_reference_;
	saturated_adiabatic_label_font_ = other.saturated_adiabatic_label_font_;
	saturated_adiabatic_label_style_ = other.saturated_adiabatic_label_style_;
	saturated_adiabatic_label_size_ = other.saturated_adiabatic_label_size_;
	saturated_adiabatic_label_frequency_ = other.saturated_adiabatic_label_frequency_;
	mixing_ratio_ = other.mixing_ratio_;
	mixing_ratio_thickness_ = other.mixing_ratio_thickness_;
	mixing_ratio_frequency_ = other.mixing_ratio_frequency_;
	mixing_ratio_label_font_ = other.mixing_ratio_label_font_;
	mixing_ratio_label_style_ = other.mixing_ratio_label_style_;
	mixing_ratio_label_size_ = other.mixing_ratio_label_size_;
	mixing_ratio_label_frequency_ = other.mixing_ratio_label_frequency_;
	isotherm_colour_ = unique_ptr<Colour>(other.isotherm_colour_->clone());
	isotherm_style_ = other.isotherm_style_;
	isotherm_reference_colour_ = unique_ptr<Colour>(other.isotherm_reference_colour_->clone());
	isotherm_reference_style_ = other.isotherm_reference_style_;
	isotherm_label_colour_ = unique_ptr<Colour>(other.isotherm_label_colour_->clone());
	isobar_colour_ = unique_ptr<Colour>(other.isobar_colour_->clone());
	isobar_style_ = other.isobar_style_;
	isobar_label_colour_ = unique_ptr<Colour>(other.isobar_label_colour_->clone());
	dry_adiabatic_colour_ = unique_ptr<Colour>(other.dry_adiabatic_colour_->clone());
	dry_adiabatic_style_ = other.dry_adiabatic_style_;
	dry_adiabatic_label_colour_ = unique_ptr<Colour>(other.dry_adiabatic_label_colour_->clone());
	saturated_adiabatic_colour_ = unique_ptr<Colour>(other.saturated_adiabatic_colour_->clone());
	saturated_adiabatic_style_ = other.saturated_adiabatic_style_;
	saturated_adiabatic_label_colour_ = unique_ptr<Colour>(other.saturated_adiabatic_label_colour_->clone());
	mixing_ratio_colour_ = unique_ptr<Colour>(other.mixing_ratio_colour_->clone());
	mixing_ratio_style_ = other.mixing_ratio_style_;
	mixing_ratio_label_colour_ = unique_ptr<Colour>(other.mixing_ratio_label_colour_->clone());
	
}


bool TephiGridAttributes::accept(const string& node)
{

	if ( magCompare(node, "tephigrid")  )
		return true;
	
	return false;
}

void TephiGridAttributes::set(const XmlNode& node)
{
	bool apply = false;

	if ( this->accept(node.name()) == false )
		return;

	if ( magCompare(node.name(), "tephigrid")  )
		apply = true;
	

	if ( apply )
		set(node.attributes());
	else {
		
	}
	for (auto &elt : node.elements())
	{
		
	}
}

void TephiGridAttributes::print(ostream& out)  const
{
	out << "Attributes[";
	out << " annotation_width = " <<  annotation_width_;
	out << " isotherm = " <<  isotherm_;
	out << " isotherm_thickness = " <<  isotherm_thickness_;
	out << " isotherm_interval = " <<  isotherm_interval_;
	out << " isotherm_reference = " <<  isotherm_reference_;
	out << " isotherm_reference_thickness = " <<  isotherm_reference_thickness_;
	out << " isotherm_label_font = " <<  isotherm_label_font_;
	out << " isotherm_label_style = " <<  isotherm_label_style_;
	out << " isotherm_label_size = " <<  isotherm_label_size_;
	out << " isotherm_label_frequency = " <<  isotherm_label_frequency_;
	out << " isobar = " <<  isobar_;
	out << " isobar_thickness = " <<  isobar_thickness_;
	out << " isobar_interval = " <<  isobar_interval_;
	out << " isobar_reference = " <<  isobar_reference_;
	out << " isobar_label_font = " <<  isobar_label_font_;
	out << " isobar_label_style = " <<  isobar_label_style_;
	out << " isobar_label_size = " <<  isobar_label_size_;
	out << " isobar_label_frequency = " <<  isobar_label_frequency_;
	out << " dry_adiabatic = " <<  dry_adiabatic_;
	out << " dry_adiabatic_thickness = " <<  dry_adiabatic_thickness_;
	out << " dry_adiabatic_interval = " <<  dry_adiabatic_interval_;
	out << " dry_adiabatic_reference = " <<  dry_adiabatic_reference_;
	out << " dry_adiabatic_label_font = " <<  dry_adiabatic_label_font_;
	out << " dry_adiabatic_label_style = " <<  dry_adiabatic_label_style_;
	out << " dry_adiabatic_label_size = " <<  dry_adiabatic_label_size_;
	out << " dry_adiabatic_label_frequency = " <<  dry_adiabatic_label_frequency_;
	out << " saturated_adiabatic = " <<  saturated_adiabatic_;
	out << " saturated_adiabatic_thickness = " <<  saturated_adiabatic_thickness_;
	out << " saturated_adiabatic_interval = " <<  saturated_adiabatic_interval_;
	out << " saturated_adiabatic_reference = " <<  saturated_adiabatic_reference_;
	out << " saturated_adiabatic_label_font = " <<  saturated_adiabatic_label_font_;
	out << " saturated_adiabatic_label_style = " <<  saturated_adiabatic_label_style_;
	out << " saturated_adiabatic_label_size = " <<  saturated_adiabatic_label_size_;
	out << " saturated_adiabatic_label_frequency = " <<  saturated_adiabatic_label_frequency_;
	out << " mixing_ratio = " <<  mixing_ratio_;
	out << " mixing_ratio_thickness = " <<  mixing_ratio_thickness_;
	out << " mixing_ratio_frequency = " <<  mixing_ratio_frequency_;
	out << " mixing_ratio_label_font = " <<  mixing_ratio_label_font_;
	out << " mixing_ratio_label_style = " <<  mixing_ratio_label_style_;
	out << " mixing_ratio_label_size = " <<  mixing_ratio_label_size_;
	out << " mixing_ratio_label_frequency = " <<  mixing_ratio_label_frequency_;
	out << " isotherm_colour = " <<  *isotherm_colour_;
	out << " isotherm_style = " <<  isotherm_style_;
	out << " isotherm_reference_colour = " <<  *isotherm_reference_colour_;
	out << " isotherm_reference_style = " <<  isotherm_reference_style_;
	out << " isotherm_label_colour = " <<  *isotherm_label_colour_;
	out << " isobar_colour = " <<  *isobar_colour_;
	out << " isobar_style = " <<  isobar_style_;
	out << " isobar_label_colour = " <<  *isobar_label_colour_;
	out << " dry_adiabatic_colour = " <<  *dry_adiabatic_colour_;
	out << " dry_adiabatic_style = " <<  dry_adiabatic_style_;
	out << " dry_adiabatic_label_colour = " <<  *dry_adiabatic_label_colour_;
	out << " saturated_adiabatic_colour = " <<  *saturated_adiabatic_colour_;
	out << " saturated_adiabatic_style = " <<  saturated_adiabatic_style_;
	out << " saturated_adiabatic_label_colour = " <<  *saturated_adiabatic_label_colour_;
	out << " mixing_ratio_colour = " <<  *mixing_ratio_colour_;
	out << " mixing_ratio_style = " <<  mixing_ratio_style_;
	out << " mixing_ratio_label_colour = " <<  *mixing_ratio_label_colour_;
	
	out << "]" << "\n";
}

void TephiGridAttributes::toxml(ostream& out)  const
{
	out <<  "\"tephigrid\"";
	out << ", \"thermo_annotation_width\":";
	niceprint(out,annotation_width_);
	out << ", \"thermo_isotherm_grid\":";
	niceprint(out,isotherm_);
	out << ", \"thermo_isotherm_thickness\":";
	niceprint(out,isotherm_thickness_);
	out << ", \"thermo_isotherm_interval\":";
	niceprint(out,isotherm_interval_);
	out << ", \"thermo_isotherm_reference\":";
	niceprint(out,isotherm_reference_);
	out << ", \"thermo_isotherm_reference_thickness\":";
	niceprint(out,isotherm_reference_thickness_);
	out << ", \"thermo_isotherm_label_font\":";
	niceprint(out,isotherm_label_font_);
	out << ", \"thermo_isotherm_label_font_style\":";
	niceprint(out,isotherm_label_style_);
	out << ", \"thermo_isotherm_label_font_size\":";
	niceprint(out,isotherm_label_size_);
	out << ", \"thermo_isotherm_label_frequency\":";
	niceprint(out,isotherm_label_frequency_);
	out << ", \"thermo_isobar_grid\":";
	niceprint(out,isobar_);
	out << ", \"thermo_isobar_thickness\":";
	niceprint(out,isobar_thickness_);
	out << ", \"thermo_isobar_interval\":";
	niceprint(out,isobar_interval_);
	out << ", \"thermo_isobar_reference\":";
	niceprint(out,isobar_reference_);
	out << ", \"thermo_isobar_label_font\":";
	niceprint(out,isobar_label_font_);
	out << ", \"thermo_isobar_label_font_style\":";
	niceprint(out,isobar_label_style_);
	out << ", \"thermo_isobar_label_font_size\":";
	niceprint(out,isobar_label_size_);
	out << ", \"thermo_isobar_label_frequency\":";
	niceprint(out,isobar_label_frequency_);
	out << ", \"thermo_dry_adiabatic_grid\":";
	niceprint(out,dry_adiabatic_);
	out << ", \"thermo_dry_adiabatic_thickness\":";
	niceprint(out,dry_adiabatic_thickness_);
	out << ", \"thermo_dry_adiabatic_interval\":";
	niceprint(out,dry_adiabatic_interval_);
	out << ", \"thermo_dry_adiabatic_reference\":";
	niceprint(out,dry_adiabatic_reference_);
	out << ", \"thermo_dry_adiabatic_label_font\":";
	niceprint(out,dry_adiabatic_label_font_);
	out << ", \"thermo_dry_adiabatic_label_font_style\":";
	niceprint(out,dry_adiabatic_label_style_);
	out << ", \"thermo_dry_adiabatic_label_font_size\":";
	niceprint(out,dry_adiabatic_label_size_);
	out << ", \"thermo_dry_adiabatic_label_frequency\":";
	niceprint(out,dry_adiabatic_label_frequency_);
	out << ", \"thermo_saturated_adiabatic_grid\":";
	niceprint(out,saturated_adiabatic_);
	out << ", \"thermo_saturated_adiabatic_thickness\":";
	niceprint(out,saturated_adiabatic_thickness_);
	out << ", \"thermo_saturated_adiabatic_interval\":";
	niceprint(out,saturated_adiabatic_interval_);
	out << ", \"thermo_saturated_adiabatic_reference\":";
	niceprint(out,saturated_adiabatic_reference_);
	out << ", \"thermo_saturated_adiabatic_label_font\":";
	niceprint(out,saturated_adiabatic_label_font_);
	out << ", \"thermo_saturated_adiabatic_label_font_style\":";
	niceprint(out,saturated_adiabatic_label_style_);
	out << ", \"thermo_saturated_adiabatic_label_font_size\":";
	niceprint(out,saturated_adiabatic_label_size_);
	out << ", \"thermo_saturated_adiabatic_label_frequency\":";
	niceprint(out,saturated_adiabatic_label_frequency_);
	out << ", \"thermo_mixing_ratio_grid\":";
	niceprint(out,mixing_ratio_);
	out << ", \"thermo_mixing_ratio_thickness\":";
	niceprint(out,mixing_ratio_thickness_);
	out << ", \"thermo_mixing_ratio_frequency\":";
	niceprint(out,mixing_ratio_frequency_);
	out << ", \"thermo_mixing_ratio_label_font\":";
	niceprint(out,mixing_ratio_label_font_);
	out << ", \"thermo_mixing_ratio_label_font_style\":";
	niceprint(out,mixing_ratio_label_style_);
	out << ", \"thermo_mixing_ratio_label_font_size\":";
	niceprint(out,mixing_ratio_label_size_);
	out << ", \"thermo_mixing_ratio_label_frequency\":";
	niceprint(out,mixing_ratio_label_frequency_);
	out << ", \"thermo_isotherm_colour\":";
	niceprint(out, *isotherm_colour_);
	out << ", \"thermo_isotherm_style\":";
	niceprint(out, isotherm_style_);
	out << ", \"thermo_isotherm_reference_colour\":";
	niceprint(out, *isotherm_reference_colour_);
	out << ", \"thermo_isotherm_reference_style\":";
	niceprint(out, isotherm_reference_style_);
	out << ", \"thermo_isotherm_label_colour\":";
	niceprint(out, *isotherm_label_colour_);
	out << ", \"thermo_isobar_colour\":";
	niceprint(out, *isobar_colour_);
	out << ", \"thermo_isobar_style\":";
	niceprint(out, isobar_style_);
	out << ", \"thermo_isobar_label_colour\":";
	niceprint(out, *isobar_label_colour_);
	out << ", \"thermo_dry_adiabatic_colour\":";
	niceprint(out, *dry_adiabatic_colour_);
	out << ", \"thermo_dry_adiabatic_style\":";
	niceprint(out, dry_adiabatic_style_);
	out << ", \"thermo_dry_adiabatic_label_colour\":";
	niceprint(out, *dry_adiabatic_label_colour_);
	out << ", \"thermo_saturated_adiabatic_colour\":";
	niceprint(out, *saturated_adiabatic_colour_);
	out << ", \"thermo_saturated_adiabatic_style\":";
	niceprint(out, saturated_adiabatic_style_);
	out << ", \"thermo_saturated_adiabatic_label_colour\":";
	niceprint(out, *saturated_adiabatic_label_colour_);
	out << ", \"thermo_mixing_ratio_colour\":";
	niceprint(out, *mixing_ratio_colour_);
	out << ", \"thermo_mixing_ratio_style\":";
	niceprint(out, mixing_ratio_style_);
	out << ", \"thermo_mixing_ratio_label_colour\":";
	niceprint(out, *mixing_ratio_label_colour_);
	
}

static MagicsParameter<double> thermo_annotation_width("thermo_annotation_width", 25);
static MagicsParameter<string> thermo_isotherm_grid("thermo_isotherm_grid", "on");
static MagicsParameter<int> thermo_isotherm_thickness("thermo_isotherm_thickness", 1);
static MagicsParameter<double> thermo_isotherm_interval("thermo_isotherm_interval", 10);
static MagicsParameter<double> thermo_isotherm_reference("thermo_isotherm_reference", 0);
static MagicsParameter<int> thermo_isotherm_reference_thickness("thermo_isotherm_reference_thickness", 2);
static MagicsParameter<string> thermo_isotherm_label_font("thermo_isotherm_label_font", "helvetica");
static MagicsParameter<string> thermo_isotherm_label_font_style("thermo_isotherm_label_font_style", "normal");
static MagicsParameter<double> thermo_isotherm_label_font_size("thermo_isotherm_label_font_size", 0.3);
static MagicsParameter<int> thermo_isotherm_label_frequency("thermo_isotherm_label_frequency", 1);
static MagicsParameter<string> thermo_isobar_grid("thermo_isobar_grid", "on");
static MagicsParameter<int> thermo_isobar_thickness("thermo_isobar_thickness", 2);
static MagicsParameter<double> thermo_isobar_interval("thermo_isobar_interval", 100);
static MagicsParameter<double> thermo_isobar_reference("thermo_isobar_reference", 1000);
static MagicsParameter<string> thermo_isobar_label_font("thermo_isobar_label_font", "helvetica");
static MagicsParameter<string> thermo_isobar_label_font_style("thermo_isobar_label_font_style", "normal");
static MagicsParameter<double> thermo_isobar_label_font_size("thermo_isobar_label_font_size", 0.3);
static MagicsParameter<int> thermo_isobar_label_frequency("thermo_isobar_label_frequency", 1);
static MagicsParameter<string> thermo_dry_adiabatic_grid("thermo_dry_adiabatic_grid", "on");
static MagicsParameter<int> thermo_dry_adiabatic_thickness("thermo_dry_adiabatic_thickness", 1);
static MagicsParameter<double> thermo_dry_adiabatic_interval("thermo_dry_adiabatic_interval", 10);
static MagicsParameter<double> thermo_dry_adiabatic_reference("thermo_dry_adiabatic_reference", 0);
static MagicsParameter<string> thermo_dry_adiabatic_label_font("thermo_dry_adiabatic_label_font", "helvetica");
static MagicsParameter<string> thermo_dry_adiabatic_label_font_style("thermo_dry_adiabatic_label_font_style", "normal");
static MagicsParameter<double> thermo_dry_adiabatic_label_font_size("thermo_dry_adiabatic_label_font_size", 0.3);
static MagicsParameter<int> thermo_dry_adiabatic_label_frequency("thermo_dry_adiabatic_label_frequency", 1);
static MagicsParameter<string> thermo_saturated_adiabatic_grid("thermo_saturated_adiabatic_grid", "on");
static MagicsParameter<int> thermo_saturated_adiabatic_thickness("thermo_saturated_adiabatic_thickness", 2);
static MagicsParameter<double> thermo_saturated_adiabatic_interval("thermo_saturated_adiabatic_interval", 5);
static MagicsParameter<double> thermo_saturated_adiabatic_reference("thermo_saturated_adiabatic_reference", 0);
static MagicsParameter<string> thermo_saturated_adiabatic_label_font("thermo_saturated_adiabatic_label_font", "helvetica");
static MagicsParameter<string> thermo_saturated_adiabatic_label_font_style("thermo_saturated_adiabatic_label_font_style", "normal");
static MagicsParameter<double> thermo_saturated_adiabatic_label_font_size("thermo_saturated_adiabatic_label_font_size", 0.3);
static MagicsParameter<int> thermo_saturated_adiabatic_label_frequency("thermo_saturated_adiabatic_label_frequency", 1);
static MagicsParameter<string> thermo_mixing_ratio_grid("thermo_mixing_ratio_grid", "on");
static MagicsParameter<int> thermo_mixing_ratio_thickness("thermo_mixing_ratio_thickness", 1);
static MagicsParameter<int> thermo_mixing_ratio_frequency("thermo_mixing_ratio_frequency", 1);
static MagicsParameter<string> thermo_mixing_ratio_label_font("thermo_mixing_ratio_label_font", "helvetica");
static MagicsParameter<string> thermo_mixing_ratio_label_font_style("thermo_mixing_ratio_label_font_style", "normal");
static MagicsParameter<double> thermo_mixing_ratio_label_font_size("thermo_mixing_ratio_label_font_size", 0.3);
static MagicsParameter<int> thermo_mixing_ratio_label_frequency("thermo_mixing_ratio_label_frequency", 1);
static MagicsParameter<string> thermo_isotherm_colour("thermo_isotherm_colour", "charcoal");
static MagicsParameter<string> thermo_isotherm_style("thermo_isotherm_style", "solid");
static MagicsParameter<string> thermo_isotherm_reference_colour("thermo_isotherm_reference_colour", "red");
static MagicsParameter<string> thermo_isotherm_reference_style("thermo_isotherm_reference_style", "solid");
static MagicsParameter<string> thermo_isotherm_label_colour("thermo_isotherm_label_colour", "charcoal");
static MagicsParameter<string> thermo_isobar_colour("thermo_isobar_colour", "evergreen");
static MagicsParameter<string> thermo_isobar_style("thermo_isobar_style", "solid");
static MagicsParameter<string> thermo_isobar_label_colour("thermo_isobar_label_colour", "evergreen");
static MagicsParameter<string> thermo_dry_adiabatic_colour("thermo_dry_adiabatic_colour", "charcoal");
static MagicsParameter<string> thermo_dry_adiabatic_style("thermo_dry_adiabatic_style", "solid");
static MagicsParameter<string> thermo_dry_adiabatic_label_colour("thermo_dry_adiabatic_label_colour", "charcoal");
static MagicsParameter<string> thermo_saturated_adiabatic_colour("thermo_saturated_adiabatic_colour", "charcoal");
static MagicsParameter<string> thermo_saturated_adiabatic_style("thermo_saturated_adiabatic_style", "solid");
static MagicsParameter<string> thermo_saturated_adiabatic_label_colour("thermo_saturated_adiabatic_label_colour", "charcoal");
static MagicsParameter<string> thermo_mixing_ratio_colour("thermo_mixing_ratio_colour", "purple");
static MagicsParameter<string> thermo_mixing_ratio_style("thermo_mixing_ratio_style", "dash");
static MagicsParameter<string> thermo_mixing_ratio_label_colour("thermo_mixing_ratio_label_colour", "purple");
