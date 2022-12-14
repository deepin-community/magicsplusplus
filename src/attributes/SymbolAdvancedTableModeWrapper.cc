
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file SymbolAdvancedTableModeAttributes.h
    \\brief Definition of SymbolAdvancedTableMode Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "SymbolAdvancedTableModeWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



SymbolAdvancedTableModeWrapper::SymbolAdvancedTableModeWrapper(): symboladvancedtablemode_(new SymbolAdvancedTableMode())


{


	
	SymbolModeWrapper::object(symboladvancedtablemode_);
	

}
SymbolAdvancedTableModeWrapper::SymbolAdvancedTableModeWrapper(SymbolAdvancedTableMode* symboladvancedtablemode): symboladvancedtablemode_(symboladvancedtablemode)
{

	
	SymbolModeWrapper::object(symboladvancedtablemode_);
	
}

SymbolAdvancedTableModeWrapper::~SymbolAdvancedTableModeWrapper()
{

}

void SymbolAdvancedTableModeWrapper::set(const MagRequest& request)
{

	

	SymbolModeWrapper::set(request);
	

	if  (request.countValues("SYMBOL_ADVANCED_TABLE_MIN_VALUE") ) {
		double min_value = request("SYMBOL_ADVANCED_TABLE_MIN_VALUE");
		symboladvancedtablemode_->min_ = min_value;
		}
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_MAX_VALUE") ) {
		double max_value = request("SYMBOL_ADVANCED_TABLE_MAX_VALUE");
		symboladvancedtablemode_->max_ = max_value;
		}
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_LEVEL_COUNT") ) {
		int count_value = request("SYMBOL_ADVANCED_TABLE_LEVEL_COUNT");
		symboladvancedtablemode_->count_ = count_value;
		}
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_LEVEL_TOLERANCE") ) {
		int tolerance_value = request("SYMBOL_ADVANCED_TABLE_LEVEL_TOLERANCE");
		symboladvancedtablemode_->tolerance_ = tolerance_value;
		}
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_INTERVAL") ) {
		double interval_value = request("SYMBOL_ADVANCED_TABLE_INTERVAL");
		symboladvancedtablemode_->interval_ = interval_value;
		}
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_REFERENCE_LEVEL") ) {
		double reference_value = request("SYMBOL_ADVANCED_TABLE_REFERENCE_LEVEL");
		symboladvancedtablemode_->reference_ = reference_value;
		}
	doublearray  list_value;
	for (int i = 0; i < request.countValues("SYMBOL_ADVANCED_TABLE_LEVEL_LIST"); i++)
		list_value.push_back((double)request("SYMBOL_ADVANCED_TABLE_LEVEL_LIST", i));
	if ( !list_value.empty() )
		symboladvancedtablemode_->list_ = list_value;
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_COLOUR_DIRECTION") ) {
		string direction_value = request("SYMBOL_ADVANCED_TABLE_COLOUR_DIRECTION");
		symboladvancedtablemode_->direction_ = direction_value;
		}
	stringarray  colours_value;
	for (int i = 0; i < request.countValues("SYMBOL_ADVANCED_TABLE_COLOUR_LIST"); i++)
		colours_value.push_back((string)request("SYMBOL_ADVANCED_TABLE_COLOUR_LIST", i));
	if ( !colours_value.empty() )
		symboladvancedtablemode_->colours_ = colours_value;
	intarray markers_value;
	for (int i = 0; i < request.countValues("SYMBOL_ADVANCED_TABLE_MARKER_LIST"); i++)
		markers_value.push_back((int)request("SYMBOL_ADVANCED_TABLE_MARKER_LIST", i));
	if ( !markers_value.empty() )
		symboladvancedtablemode_->markers_ = markers_value;
	stringarray  markers_names_value;
	for (int i = 0; i < request.countValues("SYMBOL_ADVANCED_TABLE_MARKER_NAME_LIST"); i++)
		markers_names_value.push_back((string)request("SYMBOL_ADVANCED_TABLE_MARKER_NAME_LIST", i));
	if ( !markers_names_value.empty() )
		symboladvancedtablemode_->markers_names_ = markers_names_value;
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_HEIGHT_MAX_VALUE") ) {
		double height_max_value = request("SYMBOL_ADVANCED_TABLE_HEIGHT_MAX_VALUE");
		symboladvancedtablemode_->height_max_ = height_max_value;
		}
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_HEIGHT_MIN_VALUE") ) {
		double height_min_value = request("SYMBOL_ADVANCED_TABLE_HEIGHT_MIN_VALUE");
		symboladvancedtablemode_->height_min_ = height_min_value;
		}
	doublearray  heights_value;
	for (int i = 0; i < request.countValues("SYMBOL_ADVANCED_TABLE_HEIGHT_LIST"); i++)
		heights_value.push_back((double)request("SYMBOL_ADVANCED_TABLE_HEIGHT_LIST", i));
	if ( !heights_value.empty() )
		symboladvancedtablemode_->heights_ = heights_value;
	stringarray  text_list_value;
	for (int i = 0; i < request.countValues("SYMBOL_ADVANCED_TABLE_TEXT_LIST"); i++)
		text_list_value.push_back((string)request("SYMBOL_ADVANCED_TABLE_TEXT_LIST", i));
	if ( !text_list_value.empty() )
		symboladvancedtablemode_->text_list_ = text_list_value;
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_TEXT_FONT") ) {
		string text_font_name_value = request("SYMBOL_ADVANCED_TABLE_TEXT_FONT");
		symboladvancedtablemode_->text_font_name_ = text_font_name_value;
		}
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_TEXT_FONT_SIZE") ) {
		double text_font_size_value = request("SYMBOL_ADVANCED_TABLE_TEXT_FONT_SIZE");
		symboladvancedtablemode_->text_font_size_ = text_font_size_value;
		}
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_TEXT_FONT_STYLE") ) {
		string text_font_style_value = request("SYMBOL_ADVANCED_TABLE_TEXT_FONT_STYLE");
		symboladvancedtablemode_->text_font_style_ = text_font_style_value;
		}
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_TEXT_DISPLAY_TYPE") ) {
		string text_display_type_value = request("SYMBOL_ADVANCED_TABLE_TEXT_DISPLAY_TYPE");
		symboladvancedtablemode_->text_display_type_ = text_display_type_value;
		}
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_OUTLAYER_MIN_VALUE") ) {
		double outlayer_min_value = request("SYMBOL_ADVANCED_TABLE_OUTLAYER_MIN_VALUE");
		symboladvancedtablemode_->outlayer_min_ = outlayer_min_value;
		}
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_OUTLAYER_MAX_VALUE") ) {
		double outlayer_max_value = request("SYMBOL_ADVANCED_TABLE_OUTLAYER_MAX_VALUE");
		symboladvancedtablemode_->outlayer_max_ = outlayer_max_value;
		}
	
	
		string levels_value = request.countValues("SYMBOL_ADVANCED_TABLE_SELECTION_TYPE") ?  (string) request("SYMBOL_ADVANCED_TABLE_SELECTION_TYPE") : "count";
	MagLog::debug() << " SYMBOL_ADVANCED_TABLE_SELECTION_TYPE set to " << levels_value << endl;
	LevelSelectionWrapper* levels_wrapper = 0;
	try
	{
		levels_wrapper = SimpleFactory<LevelSelectionWrapper>::create(levels_value);
	}
	 catch (NoFactoryException&) {
		if (MagicsGlobal::strict()) {
            throw;
        }
		MagLog::warning() << "[" << levels_value << "] is not a valid value for levels: reset to default -> [count]" << endl;
		levels_wrapper = SimpleFactory<LevelSelectionWrapper>::create("count");
	}
	levels_wrapper->set(request);
	symboladvancedtablemode_->levels_ =  unique_ptr<LevelSelection>(levels_wrapper->object());
	delete levels_wrapper;
	
		string colourMethod_value = request.countValues("SYMBOL_ADVANCED_TABLE_COLOUR_METHOD") ?  (string) request("SYMBOL_ADVANCED_TABLE_COLOUR_METHOD") : "calculate";
	MagLog::debug() << " SYMBOL_ADVANCED_TABLE_COLOUR_METHOD set to " << colourMethod_value << endl;
	ColourTechniqueWrapper* colourMethod_wrapper = 0;
	try
	{
		colourMethod_wrapper = SimpleFactory<ColourTechniqueWrapper>::create(colourMethod_value);
	}
	 catch (NoFactoryException&) {
		if (MagicsGlobal::strict()) {
            throw;
        }
		MagLog::warning() << "[" << colourMethod_value << "] is not a valid value for colourMethod: reset to default -> [calculate]" << endl;
		colourMethod_wrapper = SimpleFactory<ColourTechniqueWrapper>::create("calculate");
	}
	colourMethod_wrapper->set(request);
	symboladvancedtablemode_->colourMethod_ =  unique_ptr<ColourTechnique>(colourMethod_wrapper->object());
	delete colourMethod_wrapper;
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_MAX_LEVEL_COLOUR") ) {
		string maxColour_value = request("SYMBOL_ADVANCED_TABLE_MAX_LEVEL_COLOUR");
		symboladvancedtablemode_->maxColour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(maxColour_value));
	}
		
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_MIN_LEVEL_COLOUR") ) {
		string minColour_value = request("SYMBOL_ADVANCED_TABLE_MIN_LEVEL_COLOUR");
		symboladvancedtablemode_->minColour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(minColour_value));
	}
		
	
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_COLOUR_LIST_POLICY") ) {
		string colour_policy_value = request("SYMBOL_ADVANCED_TABLE_COLOUR_LIST_POLICY");
		symboladvancedtablemode_->colour_policy_ = MagTranslator<string, ListPolicy>()(colour_policy_value);
	}
		
	
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_MARKER_LIST_POLICY") ) {
		string marker_policy_value = request("SYMBOL_ADVANCED_TABLE_MARKER_LIST_POLICY");
		symboladvancedtablemode_->marker_policy_ = MagTranslator<string, ListPolicy>()(marker_policy_value);
	}
		
	
		string height_method_value = request.countValues("SYMBOL_ADVANCED_TABLE_HEIGHT_METHOD") ?  (string) request("SYMBOL_ADVANCED_TABLE_HEIGHT_METHOD") : "list";
	MagLog::debug() << " SYMBOL_ADVANCED_TABLE_HEIGHT_METHOD set to " << height_method_value << endl;
	HeightTechniqueWrapper* height_method_wrapper = 0;
	try
	{
		height_method_wrapper = SimpleFactory<HeightTechniqueWrapper>::create(height_method_value);
	}
	 catch (NoFactoryException&) {
		if (MagicsGlobal::strict()) {
            throw;
        }
		MagLog::warning() << "[" << height_method_value << "] is not a valid value for height_method: reset to default -> [list]" << endl;
		height_method_wrapper = SimpleFactory<HeightTechniqueWrapper>::create("list");
	}
	height_method_wrapper->set(request);
	symboladvancedtablemode_->height_method_ =  unique_ptr<HeightTechnique>(height_method_wrapper->object());
	delete height_method_wrapper;
	
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_HEIGHT_LIST_POLICY") ) {
		string height_policy_value = request("SYMBOL_ADVANCED_TABLE_HEIGHT_LIST_POLICY");
		symboladvancedtablemode_->height_policy_ = MagTranslator<string, ListPolicy>()(height_policy_value);
	}
		
	
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_TEXT_LIST_POLICY") ) {
		string text_policy_value = request("SYMBOL_ADVANCED_TABLE_TEXT_LIST_POLICY");
		symboladvancedtablemode_->text_policy_ = MagTranslator<string, ListPolicy>()(text_policy_value);
	}
		
	if  (request.countValues("SYMBOL_ADVANCED_TABLE_TEXT_FONT_COLOUR") ) {
		string text_font_colour_value = request("SYMBOL_ADVANCED_TABLE_TEXT_FONT_COLOUR");
		symboladvancedtablemode_->text_font_colour_ = unique_ptr<Colour>(MagTranslator<string, Colour>()(text_font_colour_value));
	}
		
	
		string outlayer_value = request.countValues("SYMBOL_ADVANCED_TABLE_OUTLAYER_METHOD") ?  (string) request("SYMBOL_ADVANCED_TABLE_OUTLAYER_METHOD") : "none";
	MagLog::debug() << " SYMBOL_ADVANCED_TABLE_OUTLAYER_METHOD set to " << outlayer_value << endl;
	NoOutLayerTechniqueWrapper* outlayer_wrapper = 0;
	try
	{
		outlayer_wrapper = SimpleFactory<NoOutLayerTechniqueWrapper>::create(outlayer_value);
	}
	 catch (NoFactoryException&) {
		if (MagicsGlobal::strict()) {
            throw;
        }
		MagLog::warning() << "[" << outlayer_value << "] is not a valid value for outlayer: reset to default -> [none]" << endl;
		outlayer_wrapper = SimpleFactory<NoOutLayerTechniqueWrapper>::create("none");
	}
	outlayer_wrapper->set(request);
	symboladvancedtablemode_->outlayer_ =  unique_ptr<NoOutLayerTechnique>(outlayer_wrapper->object());
	delete outlayer_wrapper;
	
}

void SymbolAdvancedTableModeWrapper::print(ostream& out)  const
{
	out << "SymbolAdvancedTableModeWrapper[]";
}


#include "CountSelectionTypeWrapper.h"
static SimpleObjectMaker<CountSelectionType, LevelSelection> SymbolAdvancedTableMode_symbol_advanced_table_selection_type_count ("count");
static SimpleObjectMaker<CountSelectionTypeWrapper, LevelSelectionWrapper> SymbolAdvancedTableMode_symbol_advanced_table_selection_type_count_wrapper ("count");


#include "IntervalSelectionTypeWrapper.h"
static SimpleObjectMaker<IntervalSelectionType, LevelSelection> SymbolAdvancedTableMode_symbol_advanced_table_selection_type_interval ("interval");
static SimpleObjectMaker<IntervalSelectionTypeWrapper, LevelSelectionWrapper> SymbolAdvancedTableMode_symbol_advanced_table_selection_type_interval_wrapper ("interval");


#include "LevelListSelectionTypeWrapper.h"
static SimpleObjectMaker<LevelListSelectionType, LevelSelection> SymbolAdvancedTableMode_symbol_advanced_table_selection_type_list ("list");
static SimpleObjectMaker<LevelListSelectionTypeWrapper, LevelSelectionWrapper> SymbolAdvancedTableMode_symbol_advanced_table_selection_type_list_wrapper ("list");



#include "CalculateColourTechniqueWrapper.h"
static SimpleObjectMaker<CalculateColourTechnique, ColourTechnique> SymbolAdvancedTableMode_symbol_advanced_table_colour_method_calculate ("calculate");
static SimpleObjectMaker<CalculateColourTechniqueWrapper, ColourTechniqueWrapper> SymbolAdvancedTableMode_symbol_advanced_table_colour_method_calculate_wrapper ("calculate");


#include "ListColourTechniqueWrapper.h"
static SimpleObjectMaker<ListColourTechnique, ColourTechnique> SymbolAdvancedTableMode_symbol_advanced_table_colour_method_list ("list");
static SimpleObjectMaker<ListColourTechniqueWrapper, ColourTechniqueWrapper> SymbolAdvancedTableMode_symbol_advanced_table_colour_method_list_wrapper ("list");







#include "CalculateHeightTechniqueWrapper.h"
static SimpleObjectMaker<CalculateHeightTechnique, HeightTechnique> SymbolAdvancedTableMode_symbol_advanced_table_height_method_calculate ("calculate");
static SimpleObjectMaker<CalculateHeightTechniqueWrapper, HeightTechniqueWrapper> SymbolAdvancedTableMode_symbol_advanced_table_height_method_calculate_wrapper ("calculate");


#include "ListHeightTechniqueWrapper.h"
static SimpleObjectMaker<ListHeightTechnique, HeightTechnique> SymbolAdvancedTableMode_symbol_advanced_table_height_method_list ("list");
static SimpleObjectMaker<ListHeightTechniqueWrapper, HeightTechniqueWrapper> SymbolAdvancedTableMode_symbol_advanced_table_height_method_list_wrapper ("list");






#include "NoOutLayerTechniqueWrapper.h"

static SimpleObjectMaker<NoOutLayerTechniqueWrapper> SymbolAdvancedTableMode_symbol_advanced_table_outlayer_method_nooutlayer_Wrapper("nooutlayer");


#include "NoOutLayerTechniqueWrapper.h"

static SimpleObjectMaker<NoOutLayerTechniqueWrapper> SymbolAdvancedTableMode_symbol_advanced_table_outlayer_method_none_Wrapper("none");


#include "SimpleOutLayerTechniqueWrapper.h"
static SimpleObjectMaker<SimpleOutLayerTechnique, NoOutLayerTechnique> SymbolAdvancedTableMode_symbol_advanced_table_outlayer_method_simple ("simple");
static SimpleObjectMaker<SimpleOutLayerTechniqueWrapper, NoOutLayerTechniqueWrapper> SymbolAdvancedTableMode_symbol_advanced_table_outlayer_method_simple_wrapper ("simple");



