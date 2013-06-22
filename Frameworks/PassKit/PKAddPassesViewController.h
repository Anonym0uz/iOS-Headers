/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSArray, NSDate, NSURL, PKRemoteAddPassesViewController, _UIAsyncInvocation;

@interface PKAddPassesViewController : UIViewController
{
    BOOL _viewHasAppeared;
    NSDate *_perfTestingForIngestion;
    BOOL _allowsPassIngestion;
    BOOL _succeeded;
    NSArray *_passes;
    NSURL *_URL;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    PKRemoteAddPassesViewController *_remoteViewController;
    int _previousStatusBarStyle;
    id <PKAddPassesViewControllerDelegate> _delegate;
}

+ (BOOL)isAvailable;
@property(nonatomic) id <PKAddPassesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int previousStatusBarStyle; // @synthesize previousStatusBarStyle=_previousStatusBarStyle;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSArray *passes; // @synthesize passes=_passes;
@property(retain, nonatomic) _UIAsyncInvocation *cancelViewServiceRequest; // @synthesize cancelViewServiceRequest=_cancelViewServiceRequest;
@property(retain, nonatomic) PKRemoteAddPassesViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)_transitionDidStop:(id)arg1 finished:(id)arg2;
- (void)ingestionDidFinishWithResult:(int)arg1;
- (BOOL)succeeded;
- (BOOL)wantsFullScreenLayout;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (int)modalPresentationStyle;
- (int)modalTransitionStyle;
- (void)setAllowsPassIngestion:(BOOL)arg1;
- (id)initWithPass:(id)arg1;
- (id)initWithPasses:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end
