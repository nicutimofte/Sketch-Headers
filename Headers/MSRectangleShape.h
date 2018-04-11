//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSRectangleShape.h"

@class NSString;

@interface MSRectangleShape : _MSRectangleShape
{
}

+ (BOOL)useSmoothCorners;
+ (double)lastUsedCornerRadius;
- (BOOL)canFlatten;
- (void)multiplyBy:(double)arg1;
- (void)resetPointsIfNecessary;
- (void)resetPathsToRoundedRect;
- (void)resetPathsToRect;
- (void)resetPoints;
- (BOOL)shouldDrawSelectionStroke;
- (id)bezierPathForCursorPreview;
- (id)inspectorViewControllerNames;
@property(readonly, nonatomic) BOOL smoothCornersAllowed;
@property(nonatomic) BOOL hasSmoothCorners;
- (void)didChangeValues;
- (void)willChangeValues;
- (double)floatFromNumbers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setCornerRadiusFromSimpleString:(id)arg1;
- (void)setCornerRadiusFromComponents:(id)arg1;
@property(copy, nonatomic) NSString *cornerRadiusString;
- (id)rectangleNumberFormatter;
@property(nonatomic) double cornerRadiusFloat;
@property(nonatomic) double normalizedExponentialCornerRadius;

@end

