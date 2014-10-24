//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PUAvalancheReviewControllerSpec;

@interface PUPhotoBrowserControllerSpec : NSObject
{
    PUAvalancheReviewControllerSpec *_avalancheReviewControllerSpec;
}

@property(readonly, nonatomic) PUAvalancheReviewControllerSpec *avalancheReviewControllerSpec; // @synthesize avalancheReviewControllerSpec=_avalancheReviewControllerSpec;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL wantsCompactCommentsLayout;
@property(readonly, nonatomic) BOOL shouldShowBackButtonTitle;
@property(readonly, nonatomic) BOOL wantsSubtitleForPhotobrowserTitleInLandscape;
@property(readonly, nonatomic) unsigned int supportedInterfaceOrientations;
@property(readonly, nonatomic) int photoThumbnailFormat;
@property(readonly, nonatomic) BOOL shouldUsePopovers;
@property(readonly, nonatomic) BOOL shouldShowPhotoScrubber;
@property(readonly, nonatomic) BOOL isInCamera;
@property(readonly, nonatomic) BOOL shouldShowDeleteItem;
@property(readonly, nonatomic) BOOL shouldShowShareItem;
@property(readonly, nonatomic) BOOL shouldShowEditItem;
@property(readonly, nonatomic) BOOL shouldShowAirplayItem;
@property(readonly, nonatomic) BOOL shouldShowSlideshowItem;
- (id)newPhotoBrowserZoomTransition;
- (id)newPhotoBrowserControllerForPhotoAtIndexPath:(id)arg1 assetCollections:(id)arg2 dataSource:(id)arg3;

@end
