//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface BRiWorkSharingInfo : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _options;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL options; // @synthesize options=_options;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToiWorkSharingInfo:(id)arg1;
- (void)dealloc;
- (id)initWithSharingInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

