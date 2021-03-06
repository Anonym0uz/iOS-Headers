//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPSwipableViewDelegate.h"
#import "MPTransportControlsTarget.h"
#import "MPVideoOverlayDelegate.h"
#import "MPVolumeControllerDelegate.h"

@class MPAVItem, MPInlineVideoController, MPSwipableView, MPVideoPlaybackOverlayView, MPVolumeController, MPWeakTimer, UIActivityIndicatorView, UIPinchGestureRecognizer, UITapGestureRecognizer;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVolumeControllerDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget>
{
    BOOL _disableTaps;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    MPWeakTimer *_idleTimer;
    BOOL _isAnimatingOverlay;
    MPAVItem *_item;
    UIActivityIndicatorView *_loadingIndicator;
    MPInlineVideoController *_masterController;
    MPVideoPlaybackOverlayView *_overlayView;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    BOOL _shouldForwardRotationEvents;
    MPSwipableView *_swipableView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    int _activeOverlayUserEvents;
    BOOL _statusBarWasHidden;
    MPVolumeController *_volumeController;
}

@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(nonatomic) __weak MPInlineVideoController *masterController; // @synthesize masterController=_masterController;
- (void).cxx_destruct;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (void)_showOverlayDidEnd;
- (void)_overlayIdleTimerFired;
- (void)_hideOverlayDidEnd;
- (void)_hideOverlayAnimated:(BOOL)arg1;
- (void)updateOverlayView;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)showLoadingIndicator;
- (void)showAlternateTracks;
- (void)resetOverlayIdleTimer;
- (void)prepareForTransitionFromFullscreen;
- (void)hideLoadingIndicator;
- (void)cancelOverlayIdleTimer;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlay:(id)arg1 didEndUserEvent:(int)arg2;
- (void)overlay:(id)arg1 didCancelUserEvent:(int)arg2;
- (void)overlay:(id)arg1 didBeginUserEvent:(int)arg2;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)swipableViewHadActivity:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)loadView;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (id)init;

@end

