//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSForeignStyle.h"

#import "MSSharedStylePasting.h"

@class NSString;

@interface MSForeignStyle : _MSForeignStyle <MSSharedStylePasting>
{
}

- (void)syncWithRemote:(id)arg1;
- (id)unlinkFromRemote;
- (BOOL)isOutOfDateWithLibrary:(id)arg1;
- (id)remoteShareID;
- (void)setLocalShareID:(id)arg1;
- (id)localShareID;
- (void)setLocalObject:(id)arg1;
- (id)localObject;
- (id)initWithOriginalObject:(id)arg1 inLibrary:(id)arg2;
@property(readonly, nonatomic) NSString *currentObjectID_MSSharedStylePasting;
- (id)handlePasteIntoDocument:(id)arg1;

@end

