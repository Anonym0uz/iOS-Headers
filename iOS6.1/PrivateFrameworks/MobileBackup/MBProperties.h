/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface MBProperties : NSObject
{
    NSMutableDictionary *_plist;
    BOOL _protect;
    BOOL _protected;
}

+ (id)propertiesWithFile:(id)arg1 error:(id *)arg2;
+ (id)properties;
@property(nonatomic, getter=isProtected) BOOL protected; // @synthesize protected=_protected;
@property(readonly, nonatomic) id propertyList; // @synthesize propertyList=_plist;
- (id)description;
- (BOOL)writeToFile:(id)arg1 error:(id *)arg2;
- (void)addAppsFromArray:(id)arg1;
- (void)addApp:(id)arg1;
- (id)appWithBundleID:(id)arg1;
@property(readonly, nonatomic) NSDictionary *applications;
- (void)addAppleIDsFromSet:(id)arg1;
@property(readonly, nonatomic) NSDictionary *appleIDs;
@property(readonly, nonatomic) BOOL hasCorruptSQLiteDBs;
@property(readonly, nonatomic) NSString *buildVersion;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) NSString *deviceID;
- (id)_stringForLockdownKey:(id)arg1;
@property(retain, nonatomic) NSDictionary *lockdownKeys;
@property(nonatomic, getter=wasPasscodeSet) BOOL passcodeSet;
@property(retain, nonatomic) NSData *keybagData;
@property(nonatomic, getter=isEncrypted) BOOL encrypted;
@property(retain, nonatomic) NSDate *date;
@property(nonatomic) double systemDomainsVersion;
@property(nonatomic) double version;
- (void)_setDictionary:(id)arg1 forKey:(id)arg2;
- (id)_dictionaryForKey:(id)arg1;
- (void)_setData:(id)arg1 forKey:(id)arg2;
- (id)_dataForKey:(id)arg1;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)_boolForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithFile:(id)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)init;

@end

