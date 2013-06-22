/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKGameDetailHeaderViewPhone.h>

@class GKFacebookLikeButton, GKRatingControl, GKStoreItemInternal, UIImageView, UILabel;

@interface GKRatableGameDetailHeaderViewPhone : GKGameDetailHeaderViewPhone
{
    UIImageView *_dividerView;
    GKFacebookLikeButton *_likeButton;
    GKStoreItemInternal *_storeItem;
    GKRatingControl *_ratingControl;
    UILabel *_ratingLabel;
}

@property(retain, nonatomic) UILabel *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(retain, nonatomic) GKRatingControl *ratingControl; // @synthesize ratingControl=_ratingControl;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @synthesize storeItem=_storeItem;
@property(retain, nonatomic) GKFacebookLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) UIImageView *dividerView; // @synthesize dividerView=_dividerView;
- (void)applyRating:(id)arg1;
- (void)readRating;
- (struct CGRect)layoutSubviewsForBounds:(struct CGRect)arg1;
- (float)preferredHeightForOrientation:(int)arg1;
- (void)configureTitleView;
- (BOOL)iconOnLeft;
- (int)gameIconStyle;
- (void)updateFromGameRecord;
- (void)dealloc;
- (id)init;

@end
