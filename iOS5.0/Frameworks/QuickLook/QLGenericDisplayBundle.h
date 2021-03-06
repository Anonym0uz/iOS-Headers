/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuickLook/QLDisplayBundle.h>

@class NSError, UIImageView, UILabel, UITextView, UIView;

@interface QLGenericDisplayBundle : QLDisplayBundle
{
    UIView *_containerView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UITextView *_subtitleLabel;
    NSError *_error;
}

- (void)loadView;
- (void)_relayout;
- (void)_loadPreviewItemInfos;
- (void)prepareForSlidingIn:(id)arg1;
- (void)loadWithHints:(id)arg1;
- (void)_showLoadingProgress:(BOOL)arg1;
@property(retain) NSError *error; // @synthesize error=_error;

@end

