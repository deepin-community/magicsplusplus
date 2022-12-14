list( APPEND _common_srcs

	OutputFactory.h MagLog.h
	BaseParameter.h Colour.h MagException.h
	Factory.cc Factory.h
	ParameterManager.h Frame.h Layout.h
	PaperPoint.h GeoPoint.h  Tokenizer.h Node.h MagTranslator.h
	ImageProperties.h LogoPlotting.h
	ImportObject.h ColourTable.h PageID.h
	Transformation.h Dimension.h
	XmlNode.h XmlTree.h XmlReader.h BackgroundColour.h
	ColourTableDefinition.h ColourTableDefinitionCompute.h ColourTableDefinitionComputeInterface.h
	ColourTableDefinitionList.h ColourTableDefinitionListInterface.h
	TableDefinition.h TableDefinitionList.h TableDefinitionListInterface.h
	TableDefinitionCompute.h TableDefinitionComputeInterface.h
	HeightTableDefinition.h LevelTableDefinition.h IntervalMap.h PaperDimension.h
	Matrix.h MatrixHandler.h Data.h MagicsDecoder.h
	BasePointsHandler.h RasterData.h  Visualiser.h CustomisedPoint.h PointsHandler.h
	MetaData.h
	Polyline.h
	Text.h
	Symbol.h
	BinaryObject.h
	Arrow.h
	Flag.h
	Image.h
	ArrowProperties.h
	MagicsParameter.cc MagicsParameter.h Clipper.h LogoPlottingBase.h
	TableDefinitionCompute.cc
	TableDefinitionList.cc
	Coordinate.h OutputHandler.h
	MagFont.h
	AnimationRules.h SymbolItem.h
	UserPoint.h Label.h
	Timer.h
	CustomisedPoint.h Static.h DriverStatic.h ProgressObject.h PolyCoast.h
	ProgressTask.h FullPaperPoint.h
	BasePointsHandler.h PointsHandler.h MagicsDecoder.h Data.h
	Visualiser.h MatrixHandler.h
	Seconds.h
	Matrix.h Matrix.cc
	Path.h
	MagicsSingleton.h
	PlotManager.h
	Image.h
	MagClipper.h
	XmlReader.h XmlTree.h XmlNode.h
	MagicsFormat.h
	CartesianTransformation.h
	Dimension.cc
	XCoordinate.h YCoordinate.h
	MagException.h
	DataStats.h SciMethods.h Tephigram.cc  Tephigram.h Skewt.cc  Skewt.h Emagram.cc Emagram.h

# sources
	Data.cc Matrix.cc 
	Static.cc DriverStatic.cc
	MagLog.cc Colour.cc Transformation.cc MagException.cc
	BaseParameter.cc ParameterManager.cc
	Tokenizer.cc Timer.cc Seconds.cc Label.cc MagClipper.cc
	ArrowProperties.cc
	XmlReader.cc XmlTree.cc XmlNode.cc Dimension.cc
	MetaData.cc
	MagicsFormat.cc
	OutputHandler.cc  OutputFactory.cc
	MagFont.cc
	ColourTable.cc ColourTableDefinitionList.cc
	ColourTableDefinitionCompute.cc CartesianTransformation.cc
	BinaryObject.cc
	Coordinate.cc
	LogoPlotting.cc
	PageID.cc AnimationRules.cc Layout.cc SymbolItem.cc Symbol.cc Polyline.cc
	Text.cc Flag.cc
	MagException.cc
	DataStats.cc SciMethods.cc BasePointsHandler.cc PointsHandler.cc ProgressObject.cc

# projection
	GeoRectangularProjection.cc  PolarStereographicProjection.cc TaylorProjection.cc
	GeoRectangularProjection.h   PolarStereographicProjection.h TaylorProjection.h
	Proj4Projection.cc  Proj4Projection.h ProjP.cc ProjP.h

# stuff from eckit

	# Value.cc Value.h

	JSONParser.cc JSONParser.h
	ObjectParser.cc ObjectParser.h
	Translator.cc Translator.h
	StreamParser.cc StreamParser.h
	JSON.cc JSON.h
	Value.cc Value.h
	MapContent.cc MapContent.h
		OrderedMapContent.cc OrderedMapContent.h

	NilContent.cc NilContent.h
	StringContent.cc StringContent.h
	BoolContent.cc BoolContent.h
	ListContent.cc ListContent.h
	DoubleContent.cc DoubleContent.h
	NumberContent.cc NumberContent.h
	Content.cc Content.h
	Counted.cc Counted.h


	MagParser.cc MagParser.h
	YAMLParser.cc YAMLParser.h
	MagRegex.cc MagRegex.h
 )

if( EC_OS_NAME MATCHES "windows" )
#	list( APPEND _common_srcs win_time.h win_time.cc magics_windows.h magics_windows.cc )
	list( APPEND _common_srcs win_time.h win_time.cc)
endif()

list( APPEND _common_templates
    Factory.cc
    MagicsParameter.cc
    TableDefinitionList.cc
    TableDefinitionCompute.cc
 )

foreach( file ${_common_srcs} )
  list( APPEND common_srcs common/${file} )
endforeach()
foreach( file ${_common_templates} )
  list( APPEND common_templates common/${file} )
endforeach()

set( common_srcs ${common_srcs} PARENT_SCOPE )
set( common_templates ${common_templates} PARENT_SCOPE )

if ( metview )
	list (APPEND metview_include
				common/MagLog.h
				common/MagTranslator.h
				common/Factory.h
				common/Factory.cc
				common/Colour.h
				common/Tokenizer.h
				common/MagException.h
				common/ParameterManager.h
				common/PaperPoint.h
				common/Matrix.h
				common/BaseParameter.h
				common/OutputHandler.h
				common/OutputFactory.h
				common/Layout.h
				common/XmlNode.h
				common/Transformation.h
				common/UserPoint.h
				common/CustomisedPoint.h
				common/XmlTree.h
				common/XmlReader.h
				common/RasterData.h
				common/MagicsDecoder.h
				common/Data.h
				common/MatrixHandler.h
				common/BasePointsHandler.h
				common/Timer.h
				common/DataStats.h
				common/IntervalMap.h
				common/GeoRectangularProjection.h
				common/Text.h
				common/Label.h
				common/MagFont.h
				common/Image.h
				common/ImageProperties.h
				common/ColourTable.h
				common/ColourTableDefinition.h
				common/PointsHandler.h
				common/ProjP.h
				)

	if ( EC_OS_NAME MATCHES "windows" )
		list (APPEND metview_include common/win_timer.h)
	endif()

	set( metview_include ${metview_include} PARENT_SCOPE )
endif()
