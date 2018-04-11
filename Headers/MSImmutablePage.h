//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutablePage.h"

#import "MSImmutableRootLayer.h"
#import "MSWebExportableRootLayer.h"

@class MSImmutableColor, MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid, NSArray, NSSet, NSString;

@interface MSImmutablePage : _MSImmutablePage <MSWebExportableRootLayer, MSImmutableRootLayer>
{
    NSSet *_selectedLayerIDs;
}

+ (unsigned long long)traitsForPropertyName:(id)arg1;
+ (unsigned long long)traits;
+ (id)defaultName;
@property(readonly, nonatomic) NSSet *selectedLayerIDs; // @synthesize selectedLayerIDs=_selectedLayerIDs;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *symbols;
@property(readonly, nonatomic) BOOL hasArtboards;
@property(readonly, nonatomic) NSArray *artboards;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (struct CGPoint)rulerBase;
- (id)archiveReferenceIdentifier_bc;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)performInitWithMutableModelObject:(id)arg1;
@property(readonly, nonatomic) BOOL isFlowHome;
@property(readonly, nonatomic) BOOL webExporterShouldIncludeBackgroundColor;
@property(readonly, nonatomic) MSImmutableColor *webExporterBackgoundColor;
- (id)exporterForWebOnPage:(id)arg1 document:(id)arg2 scale:(double)arg3;
- (BOOL)shouldDiffSublayersForDifferingLayer:(id)arg1;
- (void)migratePropertiesFromV79OrEarlierWithUnarchiver:(id)arg1;
- (void)prepareDrawingInContext:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)transparencyLayerUseRectCondition;
- (BOOL)shouldSkipDrawingInContext:(id)arg1;
- (BOOL)shouldRenderInTransparencyLayer;
- (id)svgStyle:(id)arg1;
- (BOOL)shouldIncludeInSVGExport:(id)arg1;
- (void)appendBaseTranslation:(id)arg1 exporter:(id)arg2;
- (struct CGPoint)layerOffsetWithExporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) MSImmutableSimpleGrid *grid;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) MSImmutableRulerData *horizontalRulerData;
@property(readonly, copy, nonatomic) MSImmutableLayoutGrid *layout;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) MSImmutableRulerData *verticalRulerData;

@end

