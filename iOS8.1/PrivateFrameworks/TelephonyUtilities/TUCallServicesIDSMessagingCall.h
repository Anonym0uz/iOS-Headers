//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface TUCallServicesIDSMessagingCall : PBCodable <NSCopying>
{
    unsigned int _protoStatus;
    NSString *_uniqueProxyIdentifier;
    BOOL _protoConferenced;
    struct {
        unsigned int protoStatus:1;
        unsigned int protoConferenced:1;
    } _has;
}

@property(nonatomic) BOOL protoConferenced; // @synthesize protoConferenced=_protoConferenced;
@property(nonatomic) unsigned int protoStatus; // @synthesize protoStatus=_protoStatus;
@property(retain, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasProtoConferenced;
@property(nonatomic) BOOL hasProtoStatus;
@property(readonly, nonatomic) BOOL hasUniqueProxyIdentifier;
- (void)dealloc;
@property(nonatomic, getter=isConferenced) BOOL conferenced;
@property(nonatomic) int status;

@end
