/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIBarButtonItem.h"

@class MKMapView, UIActivityIndicatorView, UIImage, UIImageView, UINavigationBar, UIToolbar, UIView;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem
{
    id <MKUserTrackingView> _userTrackingView;
    UIActivityIndicatorView *_progressIndicator;
    UIImageView *_imageView;
    int _state;
    UIToolbar *_toolbar;
    UINavigationBar *_navigationBar;
    UIView *_associatedView;
    BOOL _silverStyle;
    UIImage *_trackingEmptyImage;
    UIImage *_trackingNoneImage;
    UIImage *_trackingFollowImage;
    UIImage *_trackingFollowWithHeadingImage;
}

+ (Class)_activityIndicatorClass;
@property(retain, nonatomic) UIImage *_trackingFollowWithHeadingImage; // @synthesize _trackingFollowWithHeadingImage;
@property(retain, nonatomic) UIImage *_trackingFollowImage; // @synthesize _trackingFollowImage;
@property(retain, nonatomic) UIImage *_trackingNoneImage; // @synthesize _trackingNoneImage;
@property(retain, nonatomic) UIImage *_trackingEmptyImage; // @synthesize _trackingEmptyImage;
@property(nonatomic) BOOL _silverStyle; // @synthesize _silverStyle;
@property(retain, nonatomic) UIView *_associatedView; // @synthesize _associatedView;
@property(retain, nonatomic) UINavigationBar *_navigationBar; // @synthesize _navigationBar;
@property(retain, nonatomic) UIToolbar *_toolbar; // @synthesize _toolbar;
@property(nonatomic) int _state; // @synthesize _state;
@property(retain, nonatomic) UIImageView *_imageView; // @synthesize _imageView;
@property(retain, nonatomic) UIActivityIndicatorView *_progressIndicator; // @synthesize _progressIndicator;
@property(retain, nonatomic, setter=_setUserTrackingView:) id <MKUserTrackingView> _userTrackingView; // @synthesize _userTrackingView;
- (void)_goToNextMode:(id)arg1;
- (void)_updateState;
- (void)setState:(int)arg1;
- (BOOL)_shouldAnimateFromState:(int)arg1 toState:(int)arg2;
- (id)_imageForState:(int)arg1;
- (int)_styleForState:(int)arg1;
- (float)_verticalOffsetForState:(int)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)_contentAnimation;
- (id)_expandAnimation;
- (id)_shrinkAnimation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)createView;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
@property(retain, nonatomic) MKMapView *mapView;
- (void)_repositionViews;
- (BOOL)_isInMiniBar;
- (int)_activityIndicatorStyle;
- (void)dealloc;
- (id)initWithWorldView:(id)arg1;
- (id)initWithWorldView:(id)arg1 forceSilverStyle:(BOOL)arg2;
- (id)initWithMapView:(id)arg1;
- (id)_initWithUserTrackingView:(id)arg1 forceSilverStyle:(BOOL)arg2;

@end
