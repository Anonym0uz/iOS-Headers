/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKChallengeInternal.h>

@class GKAchievementInternal;

@interface GKAchievementChallengeInternal : GKChallengeInternal
{
    GKAchievementInternal *_achievement;
}

+ (id)codedPropertyKeys;
+ (id)internalRepresentation;
@property(copy, nonatomic) GKAchievementInternal *achievement; // @synthesize achievement=_achievement;
- (id)issueRepresentationToPlayerID:(id)arg1;
- (void)dealloc;

@end

