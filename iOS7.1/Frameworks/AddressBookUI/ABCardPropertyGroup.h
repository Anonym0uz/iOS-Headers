//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABCardGroup.h>

@class NSArray, NSString;

@interface ABCardPropertyGroup : ABCardGroup
{
    NSArray *_propertyItems;
    NSArray *_displayItems;
    NSArray *_editingItems;
    BOOL _showActionsWhenEmpty;
    BOOL _isAdded;
    NSString *_property;
    NSArray *_contacts;
    NSArray *_deletedItems;
}

+ (id)groupForProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3;
@property(retain, nonatomic) NSArray *deletedItems; // @synthesize deletedItems=_deletedItems;
@property(nonatomic) BOOL isAdded; // @synthesize isAdded=_isAdded;
@property(nonatomic) BOOL showActionsWhenEmpty; // @synthesize showActionsWhenEmpty=_showActionsWhenEmpty;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(readonly, nonatomic) NSArray *propertyItems; // @synthesize propertyItems=_propertyItems;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (id)_nextAvailableSocialService;
- (id)_nextAvailableInstantMessageService;
- (id)_nextAvailableLabel;
- (id)_nextAvailableLabelInLabels:(id)arg1 withValueSelector:(SEL)arg2;
- (void)saveChangesForItems:(id)arg1;
- (void)_updateNameValuesForItems:(id)arg1;
- (BOOL)_arrayContainsMaxAllowedItems:(id)arg1;
- (BOOL)canAddEditingItem;
- (BOOL)isRequired;
- (BOOL)_shoulShowGroupWhenEditing:(BOOL)arg1;
- (id)_itemToBeMergedWith:(id)arg1 fromItems:(id)arg2 forEditing:(BOOL)arg3;
- (id)_mergeItems:(id)arg1 forEditing:(_Bool)arg2;
- (id)_loadPropertyItems;
@property(retain, nonatomic) NSArray *editingItems;
- (id)displayItems;
- (void)saveChanges;
- (void)reloadData;
- (void)removeEditingItem:(id)arg1;
- (BOOL)addEditingItem;
- (id)emptyLabeledValue;
- (id)nextAvailableLabel;
@property(readonly, nonatomic, getter=isMultiLine) BOOL multiLine;
@property(readonly, nonatomic, getter=isFixedValue) BOOL fixedValue;
@property(readonly, nonatomic, getter=isMultiValue) BOOL multiValue;
@property(readonly, nonatomic) BOOL allowsAdding;
- (id)description;
- (void)dealloc;
- (id)initWithProperty:(id)arg1 contact:(id)arg2 withLinkedContacts:(id)arg3;

@end

