/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ECMappingInfo : NSObject
{
    NSString *mSheetName;
}

+ (id)mappingInfoWithSheetName:(id)arg1;
- (id)initWithSheetName:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) int rowOffset;
@property(readonly, nonatomic) int columnOffset;
@property(readonly, nonatomic) NSString *sheetName; // @synthesize sheetName=mSheetName;

@end

