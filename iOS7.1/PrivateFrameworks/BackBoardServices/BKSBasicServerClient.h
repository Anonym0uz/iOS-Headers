//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSXPCServerClient.h"

@class NSObject<OS_xpc_object>;

@interface BKSBasicServerClient : NSObject <BKSXPCServerClient>
{
    NSObject<OS_xpc_object> *_connection;
}

+ (id)wrapperWithConnection:(id)arg1;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void)invalidate;
- (void)dealloc;

@end

