//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBWindowContext, FBWindowContextManager;

@protocol FBWindowContextManagerObserver <NSObject>

@optional
- (void)windowContextManager:(FBWindowContextManager *)arg1 didRepositionContext:(FBWindowContext *)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4;
- (void)windowContextManagerDidStopTrackingContexts:(FBWindowContextManager *)arg1;
- (void)windowContextManagerWillStartTrackingContexts:(FBWindowContextManager *)arg1;
@end

