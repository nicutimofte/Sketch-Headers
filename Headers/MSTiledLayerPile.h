//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSTiledLayerDelegate.h"

@class MSImmutableDocumentData, MSImmutablePage, MSTiledLayer, NSArray, NSMutableArray, NSString, NSView<MSTiledLayerPileHostView>;

@interface MSTiledLayerPile : NSObject <MSTiledLayerDelegate>
{
    double _zoomValue;
    id <MSRenderingContextCacheProvider> _renderingCacheProvider;
    NSView<MSTiledLayerPileHostView> *_hostView;
    NSMutableArray *_tiledLayers;
    MSImmutableDocumentData *_document;
    MSImmutablePage *_page;
    struct CGPoint _scrollOrigin;
}

@property(retain, nonatomic) MSImmutablePage *page; // @synthesize page=_page;
@property(retain, nonatomic) MSImmutableDocumentData *document; // @synthesize document=_document;
@property(retain, nonatomic) NSMutableArray *tiledLayers; // @synthesize tiledLayers=_tiledLayers;
@property(readonly, nonatomic) __weak NSView<MSTiledLayerPileHostView> *hostView; // @synthesize hostView=_hostView;
@property(retain, nonatomic) id <MSRenderingContextCacheProvider> renderingCacheProvider; // @synthesize renderingCacheProvider=_renderingCacheProvider;
@property(nonatomic) struct CGPoint scrollOrigin; // @synthesize scrollOrigin=_scrollOrigin;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
- (void).cxx_destruct;
- (void)tiledLayerDidRefreshTileContent:(id)arg1 finishTime:(unsigned long long)arg2;
- (void)tiledLayer:(id)arg1 requiresRedrawInRect:(struct CGRect)arg2;
- (void)tiledLayer:(id)arg1 didChangeToState:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL isRendering;
- (void)refreshContentForPage:(id)arg1 document:(id)arg2 quality:(long long)arg3;
- (void)refreshContentRect:(struct CGRect)arg1 forPage:(id)arg2 document:(id)arg3 quality:(long long)arg4;
- (void)redraw;
- (void)tile;
- (void)adaptToPixelGridChange;
@property(readonly, nonatomic) struct CGRect tiledRect;
- (void)zoomBy:(double)arg1 centeredOnViewPoint:(struct CGPoint)arg2;
- (void)scrollBy:(struct CGPoint)arg1;
- (void)clearAllSupercededTiledLayers;
- (void)removeAllTiledLayers;
- (void)removeObsoleteTiledLayers;
@property(readonly, nonatomic) NSArray *supercededTiledLayers;
@property(readonly, nonatomic) MSTiledLayer *currentTiledLayer;
- (void)addNewTiledLayer:(id)arg1;
- (id)prepareNewTiledLayerWithZoomValue:(double)arg1 scrollOrigin:(struct CGPoint)arg2 colorSpace:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithHostView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

