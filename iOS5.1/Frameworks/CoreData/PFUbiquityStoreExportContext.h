/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSSQLCore, NSSet, PFUbiquityLocation, PFUbiquityPeer, PFUbiquityStoreMetadata, _PFUbiquityStack;

@interface PFUbiquityStoreExportContext : NSObject
{
    PFUbiquityLocation *_ubiquityRootLocation;
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeer *_localPeer;
    NSMutableSet *_transactionEntries;
    NSSQLCore *_store;
}

- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 forLocalPeerID:(id)arg3 withStack:(id)arg4;
- (void)dealloc;
- (id)description;
- (id)addTransactionEntryForGlobalIDString:(id)arg1 andLocalManagedObjectID:(id)arg2 andTransactionType:(int)arg3;
@property(retain, nonatomic) NSSQLCore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSSet *transactionEntries; // @synthesize transactionEntries=_transactionEntries;
@property(readonly, nonatomic) PFUbiquityPeer *localPeer; // @synthesize localPeer=_localPeer;
@property(readonly, nonatomic) PFUbiquityStoreMetadata *storeMetadata; // @synthesize storeMetadata=_storeMetadata;
@property(readonly, nonatomic) _PFUbiquityStack *stack; // @synthesize stack=_stack;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;

@end
