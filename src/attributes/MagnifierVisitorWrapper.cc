
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file MagnifierVisitorAttributes.h
    \\brief Definition of MagnifierVisitor Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "MagnifierVisitorWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



MagnifierVisitorWrapper::MagnifierVisitorWrapper(): magnifiervisitor_(new MagnifierVisitor())


{


	
	NoMagnifierVisitorWrapper::object(magnifiervisitor_);
	

}
MagnifierVisitorWrapper::MagnifierVisitorWrapper(MagnifierVisitor* magnifiervisitor): magnifiervisitor_(magnifiervisitor)
{

	
	NoMagnifierVisitorWrapper::object(magnifiervisitor_);
	
}

MagnifierVisitorWrapper::~MagnifierVisitorWrapper()
{

}

void MagnifierVisitorWrapper::set(const MagRequest& request)
{

	

	NoMagnifierVisitorWrapper::set(request);
	

	if  (request.countValues("MAGNIFIER_SYMBOL_NAME") ) {
		string symbol_name_value = request("MAGNIFIER_SYMBOL_NAME");
		magnifiervisitor_->symbol_name_ = symbol_name_value;
		}
	if  (request.countValues("MAGNIFIER_HIDDEN_SYMBOL_NAME") ) {
		string hidden_symbol_name_value = request("MAGNIFIER_HIDDEN_SYMBOL_NAME");
		magnifiervisitor_->hidden_symbol_name_ = hidden_symbol_name_value;
		}
	if  (request.countValues("MAGNIFIER_SYMBOL_HEIGHT") ) {
		double symbol_height_value = request("MAGNIFIER_SYMBOL_HEIGHT");
		magnifiervisitor_->symbol_height_ = symbol_height_value;
		}
	if  (request.countValues("MAGNIFIER_HIDDEN_SYMBOL_HEIGHT") ) {
		double hidden_symbol_height_value = request("MAGNIFIER_HIDDEN_SYMBOL_HEIGHT");
		magnifiervisitor_->hidden_symbol_height_ = hidden_symbol_height_value;
		}
	if  (request.countValues("MAGNIFIER_TEXT_FONT") ) {
		string text_font_name_value = request("MAGNIFIER_TEXT_FONT");
		magnifiervisitor_->text_font_name_ = text_font_name_value;
		}
	if  (request.countValues("MAGNIFIER_TEXT_FONT_SIZE") ) {
		double text_font_size_value = request("MAGNIFIER_TEXT_FONT_SIZE");
		magnifiervisitor_->text_font_size_ = text_font_size_value;
		}
	if  (request.countValues("MAGNIFIER_TEXT_FORMAT") ) {
		string text_format_value = request("MAGNIFIER_TEXT_FORMAT");
		magnifiervisitor_->text_format_ = text_format_value;
		}
	
	if  (request.countValues("MAGNIFIER_SYMBOL_COLOUR") ) {
		string symbol_colour_value = request("MAGNIFIER_SYMBOL_COLOUR");
		magnifiervisitor_->symbol_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(symbol_colour_value));
	}
		
	if  (request.countValues("MAGNIFIER_HIDDEN_SYMBOL_COLOUR") ) {
		string hidden_symbol_colour_value = request("MAGNIFIER_HIDDEN_SYMBOL_COLOUR");
		magnifiervisitor_->hidden_symbol_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(hidden_symbol_colour_value));
	}
		
	if  (request.countValues("MAGNIFIER_TEXT_FONT_COLOUR") ) {
		string text_font_colour_value = request("MAGNIFIER_TEXT_FONT_COLOUR");
		magnifiervisitor_->text_font_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(text_font_colour_value));
	}
		
	
}

void MagnifierVisitorWrapper::print(ostream& out)  const
{
	out << "MagnifierVisitorWrapper[]";
}





