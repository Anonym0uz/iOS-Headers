/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3Entity.h>

@class ML3Predicate, NSArray, NSString;

@interface ML3Container : ML3Entity
{
}

+ (void)populateMediaTypesOfStaticContainersInLibrary:(id)arg1;
+ (void)_reloadContainedMediaTypesForContainerWithPersistID:(long long)arg1 connection:(id)arg2;
+ (void)_removeMediaTypesFromContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3;
+ (void)_addMediaTypesToContainerWithPersistentID:(long long)arg1 mediaTypes:(id)arg2 connection:(id)arg3;
+ (void)_clearContainerMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2;
+ (id)_mediaTypesForTracksWithSwappedPersistentIDsInArray:(id)arg1 connection:(id)arg2;
+ (id)_mediaTypesForTracksInContainerWithPersistentID:(long long)arg1 connection:(id)arg2;
+ (id)_mediaTypesForTracksWithSwappedPersistentIDs:(const long long *)arg1 count:(int)arg2 connection:(id)arg3;
+ (id)__mediaTypesForTracksWithDatabaseConnection:(id)arg1 tracksPersistentIDsEnumerationBlock:(id)arg2;
+ (void)_updateContainedMediaTypeInContainerWithPersistentID:(long long)arg1 connection:(id)arg2 itemUpdateBlock:(id)arg3;
+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2 createBuiltinSmartPlaylists:(_Bool)arg3;
+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2;
+ (void)populateDynamicContainersInLibrary:(id)arg1 createBuiltinSmartPlaylists:(_Bool)arg2;
+ (void)populateDynamicContainersInLibrary:(id)arg1;
+ (void)populateStaticItemsOfDynamicContainersInLibrary:(id)arg1;
+ (void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)arg1;
+ (_Bool)updateBuiltInSmartPlaylistNamesForCurrentLanguage:(id)arg1;
+ (_Bool)createMissingBuiltInSmartPlaylists:(id)arg1;
+ (void)_insertNewSmartPlaylist:(id)arg1 criteriaBlob:(id)arg2 evaluationOrder:(unsigned int)arg3 limited:(_Bool)arg4 trackOrder:(unsigned int)arg5 distinguishedKind:(int)arg6 inLibrary:(id)arg7 cachedNameOrders:(id)arg8;
+ (id)predicateForCriteriaList:(struct SearchCriteriaList *)arg1 dynamicCriteria:(_Bool)arg2;
+ (_Bool)hasCriterionInCriteriaList:(struct SearchCriteriaList *)arg1 forITDBTrackField:(int)arg2;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (_Bool)smartCriteriaCanBeEvaluated:(id)arg1;
+ (id)nextFilepathForPlaylistType:(int)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3;
+ (id)defaultFilterPredicates;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)extraTablesToDelete;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)defaultOrderingProperties;
+ (long long)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
- (_Bool)setTracksWithSwappedPersistentIDData:(id)arg1;
- (_Bool)setTracksWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 notify:(_Bool)arg3;
- (_Bool)setTracksWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2;
- (_Bool)moveTrackFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (_Bool)addTracksWithPersistentIDs:(long long *)arg1 count:(unsigned long long)arg2 notify:(_Bool)arg3;
- (_Bool)addTracksWithPersistentIDs:(long long *)arg1 count:(unsigned long long)arg2;
- (_Bool)addTrackWithPersistentID:(long long)arg1;
- (_Bool)removeTracksWithPersistentIDs:(const long long *)arg1 atFilteredIndexes:(id)arg2;
- (_Bool)removeTracksAtIndexes:(id)arg1;
- (_Bool)removeTracksAtIndexes:(id)arg1 notify:(_Bool)arg2;
- (_Bool)setContainsTrack:(_Bool)arg1 forPersistentID:(long long)arg2 notify:(_Bool)arg3;
- (_Bool)removeTracksAtIndexes:(id)arg1 notify:(_Bool)arg2 indexesTransformBlock:(id)arg3;
- (void)_accessCurrentSwappedPersisentIDsUsingBlock:(id)arg1;
- (_Bool)removeAllTracks;
- (_Bool)_setSwappedItemPersistentIDs:(const long long *)arg1 reloadContainedMediaTypes:(_Bool)arg2 size:(int)arg3;
- (_Bool)_setSwappedItemPersistentIDs:(const long long *)arg1 reloadContainedMediaTypes:(_Bool)arg2 size:(int)arg3 notify:(_Bool)arg4;
- (_Bool)_setSwappedItemPersistentIDs:(const long long *)arg1 mediaTypesToRemove:(id)arg2 mediaTypesToAdd:(id)arg3 size:(int)arg4 notify:(_Bool)arg5;
- (_Bool)_setSwappedItemPersistentIDs:(const long long *)arg1 reloadContainedMediaTypes:(_Bool)arg2 mediaTypesToRemove:(id)arg3 mediaTypesToAdd:(id)arg4 size:(int)arg5 notify:(_Bool)arg6;
- (id)populateStatementParametersWithStaticTrackPersistentID:(id)arg1;
- (id)populateSQLWithStaticTrackPersistentID:(id)arg1;
@property(readonly) NSArray *displayOrderingTerms;
@property(readonly) NSArray *cloudDisplayOrderingTerms;
@property(readonly) long long limitValue;
@property(readonly) NSArray *limitOrderingTerms;
- (id)evaluationOrderingTerms;
@property(readonly) NSString *limitingProperty;
@property(readonly, getter=isLimitOrderingDescending) _Bool limitOrderingDescending;
@property(readonly, getter=isLimitedByCount) _Bool limitedByCount;
- (_Bool)isEvaluationOrderingDescending;
@property(readonly) ML3Predicate *dynamicPredicate;
@property(readonly) ML3Predicate *staticPredicate;
- (struct SearchCriteriaList *)importedCriteriaList;
- (void)setValues:(id)arg1 forProperties:(id)arg2 async:(_Bool)arg3 withCompletionBlock:(id)arg4;
- (void)_setContainerSeedItemPersistentIDValue:(id)arg1;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;

@end

