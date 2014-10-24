//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIApplication.h"

#import "UIApplicationDelegate.h"

@class BLActivityAlert, NSDictionary, NSString, PLUIController, UIWindow;

@interface PLPhotosApplication : UIApplication <UIApplicationDelegate>
{
    PLUIController *_uiController;
    BOOL _receivingRemoteControlEvents;
    UIWindow *_window;
    BOOL _urlNeedsHandling;
    int _observeForRechabilityChanges;
    BOOL _isReachable;
    BOOL _isOnWifi;
    BOOL _photoStreamIsBusy;
    BOOL _sharedPhotoStreamIsBusy;
    int _photoStreamActivityToken;
    int _sharedPhotoStreamActivityToken;
    int _sharedPhotoStreamInvitationFailureToken;
    NSString *_currentTestName;
    NSDictionary *_currentTestOptions;
    BLActivityAlert *_iPhotoMigrationActivityAlert;
}

+ (void)initialize;
@property(retain, nonatomic) BLActivityAlert *iPhotoMigrationActivityAlert; // @synthesize iPhotoMigrationActivityAlert=_iPhotoMigrationActivityAlert;
@property(retain, nonatomic) NSDictionary *currentTestOptions; // @synthesize currentTestOptions=_currentTestOptions;
@property(retain, nonatomic) NSString *currentTestName; // @synthesize currentTestName=_currentTestName;
@property(readonly, nonatomic) BOOL isOnWifi; // @synthesize isOnWifi=_isOnWifi;
@property(readonly, nonatomic) BOOL isReachable; // @synthesize isReachable=_isReachable;
- (void)presentInternalSettingsController;
- (void)_statusBarDoubleTap:(id)arg1;
- (void *)getSharedAddressBook;
- (void)_updateSharedPhotoStreamProgressDisplay;
- (void)_updatePhotoStreamProgressDisplay;
- (void)_updateNetworkActivityIndicatorAsync;
- (void)_unregisterForPhotoStreamActivityNotifications;
- (void)_registerForPhotoStreamActivityNotifications;
- (BOOL)shouldAllowSBAlertSupression;
- (void)disableNetworkObservation;
- (void)enableNetworkObservation;
- (void)_stopObservingReachabilityChanges;
- (void)_startObservingReachabilityChanges;
- (void)_networkReachabilityDidChange:(id)arg1;
- (void)setReceivingRemoteControlEvents:(BOOL)arg1;
- (BOOL)visitViewControllersWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateSuspensionSettings;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)photosPreferencesChanged;
- (id)currentUIConfiguration;
- (BOOL)useCompatibleSuspensionAnimation;
- (void)_finishExtendedTest;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)sharedFinishedLaunching:(BOOL)arg1;
- (id)rootViewController;
- (id)mainWindow;
- (void)_setImageOptions;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
