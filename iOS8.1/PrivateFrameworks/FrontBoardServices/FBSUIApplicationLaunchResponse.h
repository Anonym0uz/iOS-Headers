//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceResponse.h>

@class BSMachSendRight;

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse
{
    BOOL _supportsTaskSuspension;
    BOOL _supportsTaskSuspensionOnLock;
    BSMachSendRight *_taskPort;
}

@property(retain, nonatomic) BSMachSendRight *taskPort; // @synthesize taskPort=_taskPort;
@property(nonatomic) BOOL supportsTaskSuspensionOnLock; // @synthesize supportsTaskSuspensionOnLock=_supportsTaskSuspensionOnLock;
@property(nonatomic) BOOL supportsTaskSuspension; // @synthesize supportsTaskSuspension=_supportsTaskSuspension;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)dealloc;

@end

