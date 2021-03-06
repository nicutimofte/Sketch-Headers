//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSShapeChange : NSObject
{
    CDUnknownBlockType _block;
}

+ (id)customActionWithBlock:(CDUnknownBlockType)arg1;
+ (id)deleteHandle;
+ (id)distributeAlongAxis:(unsigned long long)arg1;
+ (id)alignToKey:(id)arg1;
+ (void)guessControlPointsForPointAtIndex:(unsigned long long)arg1 shape:(id)arg2;
+ (id)changeToCurveMode:(long long)arg1;
+ (id)nudgeWithKey:(unsigned short)arg1 distance:(double)arg2 flags:(unsigned long long)arg3;
+ (id)moveToLocation:(double)arg1 onAxis:(unsigned long long)arg2;
+ (id)moveByOffset:(struct CGSize)arg1 options:(long long)arg2;
+ (void)moveHandle:(unsigned long long)arg1 ofCurvePoint:(id)arg2 toLocation:(struct CGPoint)arg3 options:(long long)arg4;
+ (id)moveToPoint:(struct CGPoint)arg1 options:(long long)arg2;
- (void).cxx_destruct;
- (void)executeWithContext:(id)arg1;

@end

