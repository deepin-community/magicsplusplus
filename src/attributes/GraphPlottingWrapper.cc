
/******************************  LICENSE  *******************************

 * (C) Copyright 1996-2017 ECMWF.
 *
 * This software is licensed under the terms of the Apache Licence Version 2.0
 * which can be obtained at http://www.apache.org/licenses/LICENSE-2.0.
 * In applying this licence, ECMWF does not waive the privileges and immunities
 * granted to it by virtue of its status as an intergovernmental organisation nor
 * does it submit to any jurisdiction.

 *******************************  LICENSE  *******************************/

/*! \\file GraphPlottingAttributes.h
    \\brief Definition of GraphPlotting Attributes class.

    This file is automatically generated.
    Do Not Edit!

*/

#include "MagRequest.h"
#include "GraphPlottingWrapper.h"
#include "MagicsParameter.h"
#include "Factory.h"
#include "MagTranslator.h"
#include "MagicsGlobal.h"

using namespace magics;



GraphPlottingWrapper::GraphPlottingWrapper(): graphplotting_(new GraphPlotting())


{


	

}
GraphPlottingWrapper::GraphPlottingWrapper(GraphPlotting* graphplotting): graphplotting_(graphplotting)
{

	
}

GraphPlottingWrapper::~GraphPlottingWrapper()
{

}

void GraphPlottingWrapper::set(const MagRequest& request)
{

	

	if  (request.countValues("LEGEND") ) {
		string legend_value = request("LEGEND");
		
		graphplotting_->legend_ = MagTranslator<string, bool>()(legend_value);
		
		}
	if  (request.countValues("LEGEND_USER_TEXT") ) {
		string legend_text_value = request("LEGEND_USER_TEXT");
		graphplotting_->legend_text_ = legend_text_value;
		}
	
	
		string type_value = request.countValues("GRAPH_TYPE") ?  (string) request("GRAPH_TYPE") : "curve";
	MagLog::debug() << " GRAPH_TYPE set to " << type_value << endl;
	GraphWrapper* type_wrapper = 0;
	try
	{
		type_wrapper = SimpleFactory<GraphWrapper>::create(type_value);
	}
	 catch (NoFactoryException&) {
		if (MagicsGlobal::strict()) {
            throw;
        }
		MagLog::warning() << "[" << type_value << "] is not a valid value for type: reset to default -> [curve]" << endl;
		type_wrapper = SimpleFactory<GraphWrapper>::create("curve");
	}
	type_wrapper->set(request);
	graphplotting_->type_ =  unique_ptr<Graph>(type_wrapper->object());
	delete type_wrapper;
	
}

void GraphPlottingWrapper::print(ostream& out)  const
{
	out << "GraphPlottingWrapper[]";
}


#include "CurveWrapper.h"
static SimpleObjectMaker<Curve, Graph> GraphPlotting_graph_type_curve ("curve");
static SimpleObjectMaker<CurveWrapper, GraphWrapper> GraphPlotting_graph_type_curve_wrapper ("curve");


#include "BarWrapper.h"
static SimpleObjectMaker<Bar, Graph> GraphPlotting_graph_type_bar ("bar");
static SimpleObjectMaker<BarWrapper, GraphWrapper> GraphPlotting_graph_type_bar_wrapper ("bar");


#include "GraphFlagWrapper.h"
static SimpleObjectMaker<GraphFlag, Graph> GraphPlotting_graph_type_flag ("flag");
static SimpleObjectMaker<GraphFlagWrapper, GraphWrapper> GraphPlotting_graph_type_flag_wrapper ("flag");


#include "GraphArrowWrapper.h"
static SimpleObjectMaker<GraphArrow, Graph> GraphPlotting_graph_type_arrow ("arrow");
static SimpleObjectMaker<GraphArrowWrapper, GraphWrapper> GraphPlotting_graph_type_arrow_wrapper ("arrow");


#include "CurveAreaWrapper.h"
static SimpleObjectMaker<CurveArea, Graph> GraphPlotting_graph_type_area ("area");
static SimpleObjectMaker<CurveAreaWrapper, GraphWrapper> GraphPlotting_graph_type_area_wrapper ("area");



