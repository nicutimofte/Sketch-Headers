//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSRenderingDriver, MSTiledLayerPile;

@protocol MSTiledLayerPileHostView <NSObject>
- (void)tiledLayerPileDidRefreshTileContent:(MSTiledLayerPile *)arg1 finishTime:(unsigned long long)arg2;
- (void)tiledLayerPile:(MSTiledLayerPile *)arg1 requiresRedrawInRect:(struct CGRect)arg2;
- (MSRenderingDriver *)driver;
@end

