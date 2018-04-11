//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSImmutableSymbolInstance.h"

#import "MSFlowContainmentCheck.h"

@class NSDictionary;

@interface MSImmutableSymbolInstance : _MSImmutableSymbolInstance <MSFlowContainmentCheck>
{
}

+ (id)defaultName;
+ (unsigned long long)traits;
@property(readonly, nonatomic) id <NSCopying> modifiedMasterCacheKey;
- (double)scale;
- (BOOL)isScaled;
- (struct CGRect)paddedInfluenceRect:(struct CGRect)arg1 withPaddingsFromMasterInDocument:(id)arg2 visitedSymbols:(id)arg3;
- (struct CGRect)influenceRectForBounds;
- (struct CGRect)influenceRectForBoundsInDocument:(id)arg1 visitedSymbols:(id)arg2;
- (id)overridesFromGroupForMigration:(id)arg1;
- (id)initWithGroupForMigration:(id)arg1;
- (Class)overrideViewControllerClassForOverridePoint:(id)arg1;
- (BOOL)includeInManifest;
- (BOOL)containsFlowWithSymbolsFromDocument:(id)arg1 visited:(id)arg2;
@property(readonly, nonatomic) NSDictionary *overrides;
- (id)availableOverridesWithDocument:(id)arg1;
- (id)overridePointsInDocument:(id)arg1;
- (id)overridePointsWithParent:(id)arg1;
- (void)decodePropertiesWithUnarchiver:(id)arg1;
- (void)ensureOverrideValuesAreUnique;
- (id)updateOverridesDictionary:(id)arg1 withObjectIDMapping:(id)arg2 afterChangingSymbolMasterWithID:(id)arg3 currentID:(id)arg4;
- (void)updateOverridesWithObjectIDMapping:(id)arg1 afterChangingSymbolMasterWithID:(id)arg2;
- (id)overridesWithGridIndexRemoved:(id)arg1;
- (void)migratePropertiesFromV96OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV89OrEarlierWithUnarchiver:(id)arg1;
- (void)migratePropertiesFromV84OrEarlierWithUnarchiver:(id)arg1;
- (BOOL)differsFromLayer:(id)arg1;
- (id)uncachedModifiedSymbolForMaster:(id)arg1 document:(id)arg2;
- (id)cachedModifiedSymbolForMaster:(id)arg1 document:(id)arg2 cache:(id)arg3;
- (id)cachedModifiedSymbolForMaster:(id)arg1 inContext:(id)arg2;
- (void)writeSVGToElement:(id)arg1 withExporter:(id)arg2;

@end

