//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SVGElement.h"

@class MSImmutableColor, NSArray, NSSet, NSString, SVGGradient, SVGPattern;

@interface _SVGStroke : SVGElement
{
    SVGGradient *_gradient;
    SVGPattern *_pattern;
    NSSet *_usedBy;
    MSImmutableColor *_color;
    NSArray *_dashes;
    NSString *_linecap;
    NSString *_linejoin;
    double _width;
}

+ (id)attributeNames;
+ (id)relationshipNames;
+ (id)propertyNames;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *linejoin; // @synthesize linejoin=_linejoin;
@property(retain, nonatomic) NSString *linecap; // @synthesize linecap=_linecap;
@property(retain, nonatomic) NSArray *dashes; // @synthesize dashes=_dashes;
@property(retain, nonatomic) MSImmutableColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSSet *usedBy; // @synthesize usedBy=_usedBy;
@property(retain, nonatomic) SVGPattern *pattern; // @synthesize pattern=_pattern;
@property(retain, nonatomic) SVGGradient *gradient; // @synthesize gradient=_gradient;
- (void).cxx_destruct;
- (void)primitiveRemoveUsedByObject:(id)arg1;
- (void)primitiveAddUsedByObject:(id)arg1;
- (void)removeUsedByObject:(id)arg1;
- (void)addUsedByObject:(id)arg1;
- (void)primitiveSetPattern:(id)arg1;
- (void)primitiveSetGradient:(id)arg1;

@end

