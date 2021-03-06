/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MFPriorityDesignator.h"

@class MFError, MFInvocationQueue, MFMailboxUid, NSString, NSThread;

@interface MFActivityMonitor : MFPriorityDesignator
{
    NSThread *_runningThread;
    NSString *_taskName;
    NSString *_displayName;
    NSString *_statusMessage;
    NSString *_descriptionString;
    MFInvocationQueue *_ourQueue;
    double _percentDone;
    unsigned int _key:13;
    unsigned int _canCancel:1;
    unsigned int _shouldCancel:1;
    unsigned int _isActive:1;
    unsigned int _changeCount:8;
    id _delegate;
    id _target;
    MFError *_error;
    unsigned long long _expectedLength;
    unsigned long long _maxCount;
    unsigned long long _currentCount;
    double _currentItemPercentDone;
    unsigned int _supportsPerItemProgress:1;
    MFMailboxUid *_mailbox;
    double _lastTime;
    double _startTime;
    unsigned long long _gotNewMessagesState;
}

+ (void)destroyMonitor;
+ (id)currentMonitor;
@property(retain) MFMailboxUid *mailbox; // @synthesize mailbox=_mailbox;
- (void)setError:(id)arg1;
- (id)error;
- (void)setPercentDone:(double)arg1 withKey:(int)arg2;
- (void)setStatusMessage:(id)arg1 withKey:(int)arg2;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3;
- (void)relinquishExclusiveAccessKey:(int)arg1;
- (int)acquireExclusiveAccessKey;
- (void)setInvocationQueue:(id)arg1;
- (void)cancel;
- (void)setShouldCancel:(_Bool)arg1;
- (_Bool)shouldCancel;
- (void)setCanBeCancelled:(_Bool)arg1;
- (_Bool)canBeCancelled;
- (id)activityTargets;
- (id)primaryTarget;
- (void)setPrimaryTarget:(id)arg1;
- (void)removeActivityTarget:(id)arg1;
- (void)addActivityTargets:(id)arg1;
- (void)addActivityTarget:(id)arg1;
- (_Bool)_lockedAddActivityTarget:(id)arg1;
- (id)activityTarget;
- (void)setActivityTarget:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDisplayName:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)displayName;
- (void)setTaskName:(id)arg1;
- (id)taskName;
- (id)description;
- (unsigned long long)expectedLength;
- (void)setExpectedLength:(unsigned long long)arg1;
- (double)percentDone;
- (void)setPercentDone:(double)arg1;
- (id)statusMessage;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
- (void)setStatusMessage:(id)arg1;
- (int)changeCount;
- (unsigned long long)gotNewMessagesState;
- (void)setGotNewMessagesState:(unsigned long long)arg1;
- (void)reset;
- (void)setPercentDoneOfCurrentItem:(double)arg1;
- (id)_ntsThrottledUserInfoDict;
- (void)setSupportsPerItemProgress:(_Bool)arg1;
- (void)setCurrentCount:(unsigned long long)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)_didChange;
- (void)postDidChangeWithUserInfo:(id)arg1;
- (id)userInfoForNotification;
- (void)notifyConnectionEstablished;
- (void)finishedActivity:(id)arg1;
- (void)startActivity;
- (void)postActivityFinished:(id)arg1;
- (void)postActivityStarting;
- (void)cancelMessage;
- (void)setDelegate:(id)arg1;
- (_Bool)isActive;
- (void)dealloc;
- (id)init;

@end

