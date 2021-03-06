//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSLine : NSObject
{
    struct CGRect _area;
    BOOL _areaIsInitial;
    unsigned long long _axis;
    double _position;
    unsigned long long _snapTag;
    id _associatedObject;
    Class _snapClass;
}

+ (id)lineOnAxis:(unsigned long long)arg1 position:(double)arg2 inRect:(struct CGRect)arg3 snapTag:(unsigned long long)arg4 snapClass:(Class)arg5 associatedObject:(id)arg6;
+ (id)linesForRect:(struct CGRect)arg1 associatedObject:(id)arg2;
+ (id)verticalLineWithPosition:(double)arg1;
+ (id)horizontalLineWithPosition:(double)arg1;
@property(retain, nonatomic) Class snapClass; // @synthesize snapClass=_snapClass;
@property(nonatomic) __weak id associatedObject; // @synthesize associatedObject=_associatedObject;
@property(readonly, nonatomic) unsigned long long snapTag; // @synthesize snapTag=_snapTag;
@property(nonatomic) double position; // @synthesize position=_position;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
- (void).cxx_destruct;
- (id)description;
- (struct CGRect)dirtyAbsoluteRectInFrame:(struct CGRect)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)drawWithZoomValue:(double)arg1;
- (void)addRect:(struct CGRect)arg1;
- (id)initOnAxis:(unsigned long long)arg1 position:(double)arg2 rect:(struct CGRect)arg3 snapTag:(unsigned long long)arg4 snapClass:(Class)arg5 associatedObject:(id)arg6;

@end

