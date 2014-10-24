//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MKMapAttribution, UIButton, UISegmentedControl, UIView;

__attribute__((visibility("hidden")))
@interface FMFMapOptionsViewController : UIViewController
{
    id <FMFMapOptionsViewControllerDelegate> _delegate;
    UIButton *_mapAttributionButton;
    UIView *_topTapView;
    UISegmentedControl *_segmentedControl;
    UIView *_bottomWhitePane;
    MKMapAttribution *_mapAttribution;
}

@property(retain, nonatomic) MKMapAttribution *mapAttribution; // @synthesize mapAttribution=_mapAttribution;
@property(retain, nonatomic) UIView *bottomWhitePane; // @synthesize bottomWhitePane=_bottomWhitePane;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) UIView *topTapView; // @synthesize topTapView=_topTapView;
@property(retain, nonatomic) UIButton *mapAttributionButton; // @synthesize mapAttributionButton=_mapAttributionButton;
@property(nonatomic) __weak id <FMFMapOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)segmentedControlChanged:(id)arg1;
- (void)attributionButtonPressed:(id)arg1;
- (void)openInMaps:(id)arg1;
- (void)viewDidLoad;
- (struct CGSize)paneSize;
- (void)_dismiss:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end
