
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

#include "MagRequest.h"
#include "TephiGridWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



TephiGridWrapper::TephiGridWrapper(): tephigrid_(new TephiGrid())


{


	

}
TephiGridWrapper::TephiGridWrapper(TephiGrid* tephigrid): tephigrid_(tephigrid)
{

	
}

TephiGridWrapper::~TephiGridWrapper()
{

}

void TephiGridWrapper::set(const MagRequest& request)
{

	

	if  (request.countValues("THERMO_ANNOTATION_WIDTH") ) {
		double annotation_width_value = request("THERMO_ANNOTATION_WIDTH");
		tephigrid_->annotation_width_ = annotation_width_value;
		}
	if  (request.countValues("THERMO_ISOTHERM_GRID") ) {
		string isotherm_value = request("THERMO_ISOTHERM_GRID");
		
		tephigrid_->isotherm_ = MagTranslator<string, bool>()(isotherm_value);
		
		}
	if  (request.countValues("THERMO_ISOTHERM_THICKNESS") ) {
		int isotherm_thickness_value = request("THERMO_ISOTHERM_THICKNESS");
		tephigrid_->isotherm_thickness_ = isotherm_thickness_value;
		}
	if  (request.countValues("THERMO_ISOTHERM_INTERVAL") ) {
		double isotherm_interval_value = request("THERMO_ISOTHERM_INTERVAL");
		tephigrid_->isotherm_interval_ = isotherm_interval_value;
		}
	if  (request.countValues("THERMO_ISOTHERM_REFERENCE") ) {
		double isotherm_reference_value = request("THERMO_ISOTHERM_REFERENCE");
		tephigrid_->isotherm_reference_ = isotherm_reference_value;
		}
	if  (request.countValues("THERMO_ISOTHERM_REFERENCE_THICKNESS") ) {
		int isotherm_reference_thickness_value = request("THERMO_ISOTHERM_REFERENCE_THICKNESS");
		tephigrid_->isotherm_reference_thickness_ = isotherm_reference_thickness_value;
		}
	if  (request.countValues("THERMO_ISOTHERM_LABEL_FONT") ) {
		string isotherm_label_font_value = request("THERMO_ISOTHERM_LABEL_FONT");
		tephigrid_->isotherm_label_font_ = isotherm_label_font_value;
		}
	if  (request.countValues("THERMO_ISOTHERM_LABEL_FONT_STYLE") ) {
		string isotherm_label_style_value = request("THERMO_ISOTHERM_LABEL_FONT_STYLE");
		tephigrid_->isotherm_label_style_ = isotherm_label_style_value;
		}
	if  (request.countValues("THERMO_ISOTHERM_LABEL_FONT_SIZE") ) {
		double isotherm_label_size_value = request("THERMO_ISOTHERM_LABEL_FONT_SIZE");
		tephigrid_->isotherm_label_size_ = isotherm_label_size_value;
		}
	if  (request.countValues("THERMO_ISOTHERM_LABEL_FREQUENCY") ) {
		int isotherm_label_frequency_value = request("THERMO_ISOTHERM_LABEL_FREQUENCY");
		tephigrid_->isotherm_label_frequency_ = isotherm_label_frequency_value;
		}
	if  (request.countValues("THERMO_ISOBAR_GRID") ) {
		string isobar_value = request("THERMO_ISOBAR_GRID");
		
		tephigrid_->isobar_ = MagTranslator<string, bool>()(isobar_value);
		
		}
	if  (request.countValues("THERMO_ISOBAR_THICKNESS") ) {
		int isobar_thickness_value = request("THERMO_ISOBAR_THICKNESS");
		tephigrid_->isobar_thickness_ = isobar_thickness_value;
		}
	if  (request.countValues("THERMO_ISOBAR_INTERVAL") ) {
		double isobar_interval_value = request("THERMO_ISOBAR_INTERVAL");
		tephigrid_->isobar_interval_ = isobar_interval_value;
		}
	if  (request.countValues("THERMO_ISOBAR_REFERENCE") ) {
		double isobar_reference_value = request("THERMO_ISOBAR_REFERENCE");
		tephigrid_->isobar_reference_ = isobar_reference_value;
		}
	if  (request.countValues("THERMO_ISOBAR_LABEL_FONT") ) {
		string isobar_label_font_value = request("THERMO_ISOBAR_LABEL_FONT");
		tephigrid_->isobar_label_font_ = isobar_label_font_value;
		}
	if  (request.countValues("THERMO_ISOBAR_LABEL_FONT_STYLE") ) {
		string isobar_label_style_value = request("THERMO_ISOBAR_LABEL_FONT_STYLE");
		tephigrid_->isobar_label_style_ = isobar_label_style_value;
		}
	if  (request.countValues("THERMO_ISOBAR_LABEL_FONT_SIZE") ) {
		double isobar_label_size_value = request("THERMO_ISOBAR_LABEL_FONT_SIZE");
		tephigrid_->isobar_label_size_ = isobar_label_size_value;
		}
	if  (request.countValues("THERMO_ISOBAR_LABEL_FREQUENCY") ) {
		int isobar_label_frequency_value = request("THERMO_ISOBAR_LABEL_FREQUENCY");
		tephigrid_->isobar_label_frequency_ = isobar_label_frequency_value;
		}
	if  (request.countValues("THERMO_DRY_ADIABATIC_GRID") ) {
		string dry_adiabatic_value = request("THERMO_DRY_ADIABATIC_GRID");
		
		tephigrid_->dry_adiabatic_ = MagTranslator<string, bool>()(dry_adiabatic_value);
		
		}
	if  (request.countValues("THERMO_DRY_ADIABATIC_THICKNESS") ) {
		int dry_adiabatic_thickness_value = request("THERMO_DRY_ADIABATIC_THICKNESS");
		tephigrid_->dry_adiabatic_thickness_ = dry_adiabatic_thickness_value;
		}
	if  (request.countValues("THERMO_DRY_ADIABATIC_INTERVAL") ) {
		double dry_adiabatic_interval_value = request("THERMO_DRY_ADIABATIC_INTERVAL");
		tephigrid_->dry_adiabatic_interval_ = dry_adiabatic_interval_value;
		}
	if  (request.countValues("THERMO_DRY_ADIABATIC_REFERENCE") ) {
		double dry_adiabatic_reference_value = request("THERMO_DRY_ADIABATIC_REFERENCE");
		tephigrid_->dry_adiabatic_reference_ = dry_adiabatic_reference_value;
		}
	if  (request.countValues("THERMO_DRY_ADIABATIC_LABEL_FONT") ) {
		string dry_adiabatic_label_font_value = request("THERMO_DRY_ADIABATIC_LABEL_FONT");
		tephigrid_->dry_adiabatic_label_font_ = dry_adiabatic_label_font_value;
		}
	if  (request.countValues("THERMO_DRY_ADIABATIC_LABEL_FONT_STYLE") ) {
		string dry_adiabatic_label_style_value = request("THERMO_DRY_ADIABATIC_LABEL_FONT_STYLE");
		tephigrid_->dry_adiabatic_label_style_ = dry_adiabatic_label_style_value;
		}
	if  (request.countValues("THERMO_DRY_ADIABATIC_LABEL_FONT_SIZE") ) {
		double dry_adiabatic_label_size_value = request("THERMO_DRY_ADIABATIC_LABEL_FONT_SIZE");
		tephigrid_->dry_adiabatic_label_size_ = dry_adiabatic_label_size_value;
		}
	if  (request.countValues("THERMO_DRY_ADIABATIC_LABEL_FREQUENCY") ) {
		int dry_adiabatic_label_frequency_value = request("THERMO_DRY_ADIABATIC_LABEL_FREQUENCY");
		tephigrid_->dry_adiabatic_label_frequency_ = dry_adiabatic_label_frequency_value;
		}
	if  (request.countValues("THERMO_SATURATED_ADIABATIC_GRID") ) {
		string saturated_adiabatic_value = request("THERMO_SATURATED_ADIABATIC_GRID");
		
		tephigrid_->saturated_adiabatic_ = MagTranslator<string, bool>()(saturated_adiabatic_value);
		
		}
	if  (request.countValues("THERMO_SATURATED_ADIABATIC_THICKNESS") ) {
		int saturated_adiabatic_thickness_value = request("THERMO_SATURATED_ADIABATIC_THICKNESS");
		tephigrid_->saturated_adiabatic_thickness_ = saturated_adiabatic_thickness_value;
		}
	if  (request.countValues("THERMO_SATURATED_ADIABATIC_INTERVAL") ) {
		double saturated_adiabatic_interval_value = request("THERMO_SATURATED_ADIABATIC_INTERVAL");
		tephigrid_->saturated_adiabatic_interval_ = saturated_adiabatic_interval_value;
		}
	if  (request.countValues("THERMO_SATURATED_ADIABATIC_REFERENCE") ) {
		double saturated_adiabatic_reference_value = request("THERMO_SATURATED_ADIABATIC_REFERENCE");
		tephigrid_->saturated_adiabatic_reference_ = saturated_adiabatic_reference_value;
		}
	if  (request.countValues("THERMO_SATURATED_ADIABATIC_LABEL_FONT") ) {
		string saturated_adiabatic_label_font_value = request("THERMO_SATURATED_ADIABATIC_LABEL_FONT");
		tephigrid_->saturated_adiabatic_label_font_ = saturated_adiabatic_label_font_value;
		}
	if  (request.countValues("THERMO_SATURATED_ADIABATIC_LABEL_FONT_STYLE") ) {
		string saturated_adiabatic_label_style_value = request("THERMO_SATURATED_ADIABATIC_LABEL_FONT_STYLE");
		tephigrid_->saturated_adiabatic_label_style_ = saturated_adiabatic_label_style_value;
		}
	if  (request.countValues("THERMO_SATURATED_ADIABATIC_LABEL_FONT_SIZE") ) {
		double saturated_adiabatic_label_size_value = request("THERMO_SATURATED_ADIABATIC_LABEL_FONT_SIZE");
		tephigrid_->saturated_adiabatic_label_size_ = saturated_adiabatic_label_size_value;
		}
	if  (request.countValues("THERMO_SATURATED_ADIABATIC_LABEL_FREQUENCY") ) {
		int saturated_adiabatic_label_frequency_value = request("THERMO_SATURATED_ADIABATIC_LABEL_FREQUENCY");
		tephigrid_->saturated_adiabatic_label_frequency_ = saturated_adiabatic_label_frequency_value;
		}
	if  (request.countValues("THERMO_MIXING_RATIO_GRID") ) {
		string mixing_ratio_value = request("THERMO_MIXING_RATIO_GRID");
		
		tephigrid_->mixing_ratio_ = MagTranslator<string, bool>()(mixing_ratio_value);
		
		}
	if  (request.countValues("THERMO_MIXING_RATIO_THICKNESS") ) {
		int mixing_ratio_thickness_value = request("THERMO_MIXING_RATIO_THICKNESS");
		tephigrid_->mixing_ratio_thickness_ = mixing_ratio_thickness_value;
		}
	if  (request.countValues("THERMO_MIXING_RATIO_FREQUENCY") ) {
		int mixing_ratio_frequency_value = request("THERMO_MIXING_RATIO_FREQUENCY");
		tephigrid_->mixing_ratio_frequency_ = mixing_ratio_frequency_value;
		}
	if  (request.countValues("THERMO_MIXING_RATIO_LABEL_FONT") ) {
		string mixing_ratio_label_font_value = request("THERMO_MIXING_RATIO_LABEL_FONT");
		tephigrid_->mixing_ratio_label_font_ = mixing_ratio_label_font_value;
		}
	if  (request.countValues("THERMO_MIXING_RATIO_LABEL_FONT_STYLE") ) {
		string mixing_ratio_label_style_value = request("THERMO_MIXING_RATIO_LABEL_FONT_STYLE");
		tephigrid_->mixing_ratio_label_style_ = mixing_ratio_label_style_value;
		}
	if  (request.countValues("THERMO_MIXING_RATIO_LABEL_FONT_SIZE") ) {
		double mixing_ratio_label_size_value = request("THERMO_MIXING_RATIO_LABEL_FONT_SIZE");
		tephigrid_->mixing_ratio_label_size_ = mixing_ratio_label_size_value;
		}
	if  (request.countValues("THERMO_MIXING_RATIO_LABEL_FREQUENCY") ) {
		int mixing_ratio_label_frequency_value = request("THERMO_MIXING_RATIO_LABEL_FREQUENCY");
		tephigrid_->mixing_ratio_label_frequency_ = mixing_ratio_label_frequency_value;
		}
	
	if  (request.countValues("THERMO_ISOTHERM_COLOUR") ) {
		string isotherm_colour_value = request("THERMO_ISOTHERM_COLOUR");
		tephigrid_->isotherm_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(isotherm_colour_value));
	}
		
	
	if  (request.countValues("THERMO_ISOTHERM_STYLE") ) {
		string isotherm_style_value = request("THERMO_ISOTHERM_STYLE");
		tephigrid_->isotherm_style_ = MagTranslator<string, LineStyle>()(isotherm_style_value);
	}
		
	if  (request.countValues("THERMO_ISOTHERM_REFERENCE_COLOUR") ) {
		string isotherm_reference_colour_value = request("THERMO_ISOTHERM_REFERENCE_COLOUR");
		tephigrid_->isotherm_reference_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(isotherm_reference_colour_value));
	}
		
	
	if  (request.countValues("THERMO_ISOTHERM_REFERENCE_STYLE") ) {
		string isotherm_reference_style_value = request("THERMO_ISOTHERM_REFERENCE_STYLE");
		tephigrid_->isotherm_reference_style_ = MagTranslator<string, LineStyle>()(isotherm_reference_style_value);
	}
		
	if  (request.countValues("THERMO_ISOTHERM_LABEL_COLOUR") ) {
		string isotherm_label_colour_value = request("THERMO_ISOTHERM_LABEL_COLOUR");
		tephigrid_->isotherm_label_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(isotherm_label_colour_value));
	}
		
	if  (request.countValues("THERMO_ISOBAR_COLOUR") ) {
		string isobar_colour_value = request("THERMO_ISOBAR_COLOUR");
		tephigrid_->isobar_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(isobar_colour_value));
	}
		
	
	if  (request.countValues("THERMO_ISOBAR_STYLE") ) {
		string isobar_style_value = request("THERMO_ISOBAR_STYLE");
		tephigrid_->isobar_style_ = MagTranslator<string, LineStyle>()(isobar_style_value);
	}
		
	if  (request.countValues("THERMO_ISOBAR_LABEL_COLOUR") ) {
		string isobar_label_colour_value = request("THERMO_ISOBAR_LABEL_COLOUR");
		tephigrid_->isobar_label_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(isobar_label_colour_value));
	}
		
	if  (request.countValues("THERMO_DRY_ADIABATIC_COLOUR") ) {
		string dry_adiabatic_colour_value = request("THERMO_DRY_ADIABATIC_COLOUR");
		tephigrid_->dry_adiabatic_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(dry_adiabatic_colour_value));
	}
		
	
	if  (request.countValues("THERMO_DRY_ADIABATIC_STYLE") ) {
		string dry_adiabatic_style_value = request("THERMO_DRY_ADIABATIC_STYLE");
		tephigrid_->dry_adiabatic_style_ = MagTranslator<string, LineStyle>()(dry_adiabatic_style_value);
	}
		
	if  (request.countValues("THERMO_DRY_ADIABATIC_LABEL_COLOUR") ) {
		string dry_adiabatic_label_colour_value = request("THERMO_DRY_ADIABATIC_LABEL_COLOUR");
		tephigrid_->dry_adiabatic_label_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(dry_adiabatic_label_colour_value));
	}
		
	if  (request.countValues("THERMO_SATURATED_ADIABATIC_COLOUR") ) {
		string saturated_adiabatic_colour_value = request("THERMO_SATURATED_ADIABATIC_COLOUR");
		tephigrid_->saturated_adiabatic_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(saturated_adiabatic_colour_value));
	}
		
	
	if  (request.countValues("THERMO_SATURATED_ADIABATIC_STYLE") ) {
		string saturated_adiabatic_style_value = request("THERMO_SATURATED_ADIABATIC_STYLE");
		tephigrid_->saturated_adiabatic_style_ = MagTranslator<string, LineStyle>()(saturated_adiabatic_style_value);
	}
		
	if  (request.countValues("THERMO_SATURATED_ADIABATIC_LABEL_COLOUR") ) {
		string saturated_adiabatic_label_colour_value = request("THERMO_SATURATED_ADIABATIC_LABEL_COLOUR");
		tephigrid_->saturated_adiabatic_label_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(saturated_adiabatic_label_colour_value));
	}
		
	if  (request.countValues("THERMO_MIXING_RATIO_COLOUR") ) {
		string mixing_ratio_colour_value = request("THERMO_MIXING_RATIO_COLOUR");
		tephigrid_->mixing_ratio_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(mixing_ratio_colour_value));
	}
		
	
	if  (request.countValues("THERMO_MIXING_RATIO_STYLE") ) {
		string mixing_ratio_style_value = request("THERMO_MIXING_RATIO_STYLE");
		tephigrid_->mixing_ratio_style_ = MagTranslator<string, LineStyle>()(mixing_ratio_style_value);
	}
		
	if  (request.countValues("THERMO_MIXING_RATIO_LABEL_COLOUR") ) {
		string mixing_ratio_label_colour_value = request("THERMO_MIXING_RATIO_LABEL_COLOUR");
		tephigrid_->mixing_ratio_label_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(mixing_ratio_label_colour_value));
	}
		
	
}

void TephiGridWrapper::print(ostream& out)  const
{
	out << "TephiGridWrapper[]";
}



















