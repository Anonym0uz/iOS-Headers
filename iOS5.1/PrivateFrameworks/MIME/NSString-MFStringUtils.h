/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSString.h"

@interface NSString (MFStringUtils)
+ (id)mf_stringWithData:(id)arg1 encoding:(unsigned int)arg2;
- (const void *)mf_lossyDefaultCStringBytes;
- (int)mf_caseInsensitiveCompareExcludingXDash:(id)arg1;
- (id)mf_dataUsingEncoding:(unsigned int)arg1;
- (id)mf_dataUsingEncoding:(unsigned int)arg1 allowLossyConversion:(BOOL)arg2;
- (id)mf_MD5Digest;
- (id)mf_messageIDSubstring;
@end
