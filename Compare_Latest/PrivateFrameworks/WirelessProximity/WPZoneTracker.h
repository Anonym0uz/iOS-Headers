/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XPCClientDelegate-Protocol.h"

@class NSObject<OS_dispatch_queue>, XPCClient;

@interface WPZoneTracker : NSObject <XPCClientDelegate>
{
    BOOL _wantEntry;
    BOOL _wantExit;
    int _state;
    XPCClient *_connection;
    id <WPZoneTrackerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL wantExit; // @synthesize wantExit=_wantExit;
@property(nonatomic) BOOL wantEntry; // @synthesize wantEntry=_wantEntry;
@property(nonatomic) __weak id <WPZoneTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XPCClient *connection; // @synthesize connection=_connection;
@property int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)changeState:(int)arg1;
- (void)messageArrived:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionDied;
- (void)registerZonesFailed:(id)arg1;
- (void)zonesExited:(id)arg1;
- (void)zonesEntered:(id)arg1;
- (void)getCurrentTrackedZones;
- (void)unregisterAllZoneChanges;
- (void)unregisterForZoneChanges:(id)arg1;
- (void)registerForZoneChangesMatching:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end
