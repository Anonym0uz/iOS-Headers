//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreDAVDeleteTask.h"

@class NSString;

@interface CalDAVDeleteCalendarItemTask : CoreDAVDeleteTask
{
    NSString *_previousScheduleTag;
}

@property(retain) NSString *previousScheduleTag; // @synthesize previousScheduleTag=_previousScheduleTag;
- (id)additionalHeaderValues;
- (id)description;
- (void)dealloc;

@end
