/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSMutableDictionary, NSString;

@interface CNPostalAddress : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_addressDictionary;
}

+ (id)localizedAddressFormatDictionaryForCountryCode:(id)arg1;
+ (id)localizedCountryNameForCountryCode:(id)arg1;
+ (id)addressFormatsDictionary;
+ (id)defaultCountryCode;
+ (id)postalAddressWithDictionary:(id)arg1;
+ (id)postalAddress;
- (id)description;
- (id)keyboardSettingsForAddressPart:(id)arg1;
@property(readonly, nonatomic) NSString *formattedAddressSinleLine;
@property(readonly, nonatomic) NSString *formattedAddress;
@property(readonly) NSString *ISOCountryCode;
@property(readonly) NSString *country;
@property(readonly) NSString *postalCode;
@property(readonly) NSString *state;
@property(readonly) NSString *subAdministrativeArea;
@property(readonly) NSString *city;
@property(readonly) NSString *subLocality;
@property(readonly) NSString *street;
@property(retain) NSMutableDictionary *addressDictionary;
- (_Bool)_isAddressFieldEqual:(id)arg1 toField:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

