//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSLayerSection.h"

#import "MSInspectorItemDelegate.h"

@class MSArtboardContentResizeInspectorItem, NSArray, NSString;

@interface MSArtboardInspectorSection : MSLayerSection <MSInspectorItemDelegate>
{
    MSArtboardContentResizeInspectorItem *_contentResizeItem;
    NSArray *_items;
}

@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) MSArtboardContentResizeInspectorItem *contentResizeItem; // @synthesize contentResizeItem=_contentResizeItem;
- (void).cxx_destruct;
- (void)valuesPossiblyChanged:(id)arg1;
- (void)itemDidResize:(id)arg1;
- (id)documentForInspectorItem:(id)arg1;
- (id)views;
- (void)viewDidLoad;
- (void)updateItems;
- (void)assignItemLayers;
- (void)setLayers:(id)arg1;
- (id)initWithLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
