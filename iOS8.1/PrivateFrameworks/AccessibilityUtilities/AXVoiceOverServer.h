//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AccessibilityUtilities/AXServer.h>

@interface AXVoiceOverServer : AXServer
{
}

+ (id)server;
- (void)triggerCommand:(int)arg1;
- (BOOL)_connectIfNecessary;
- (id)_serviceName;

@end

