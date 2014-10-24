//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivity.h"

#import "PUActivity.h"

@class NSString, PUActivityItemSourceController, UIImage;

@interface PUActivity : UIActivity <PUActivity>
{
    UIImage *_cachedCustomImage;
    UIImage *_cachedSmallCustomImage;
    PUActivityItemSourceController *_itemSourceController;
}

@property(nonatomic) __weak PUActivityItemSourceController *itemSourceController; // @synthesize itemSourceController=_itemSourceController;
- (void).cxx_destruct;
- (id)pu_activitySettingsImageNamed:(id)arg1;
- (id)pu_activityImageNamed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
