//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBLockScreenViewController, SBUIFullscreenAlertAdapter;

@interface SBUIAnimationFadeLockscreenToAlert : SBUIMainScreenAnimationController
{
    SBLockScreenViewController *_lockScreenViewController;
    SBAlertManager *_alertManager;
    SBUIFullscreenAlertAdapter *_toAlert;
    _Bool _alertViewIsAnimatingItself;
    _Bool _alertIsTransparent;
    _Bool _finishedPrimaryFadeAnimation;
    _Bool _needsLockScreenAlphaRestoredOnCompletion;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_alertViewFinishedAnimatingItself;
- (void)_fadeAnimationFinished;
- (void)_evaluateTotalAnimationCompletion;
- (void)_animationFinished;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithLockScreenController:(id)arg1 toAlert:(id)arg2 alertManager:(id)arg3;

@end
