/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SURemoteNotificationController : NSObject
{
}

+ (id)sharedInstance;
- (void)handleNotificationDictionary:(id)arg1;
- (void)handleRegistrationSuccessWithToken:(id)arg1;
- (void)handleRegistrationFailureWithError:(id)arg1;
@property(readonly, nonatomic) unsigned long long enabledNotificationTypes;
- (id)init;

@end

