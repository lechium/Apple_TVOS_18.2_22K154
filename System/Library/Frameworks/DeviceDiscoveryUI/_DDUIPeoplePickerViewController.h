//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSMutableDictionary, NSString, RPRemoteDisplayDevice, TVSUIUserProfilePictureService, UICollectionView, UICollectionViewDiffableDataSource;
@protocol _DDUIPeoplePickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _DDUIPeoplePickerViewController : UIViewController
{
    _Bool _guestPairingEnabled;	// 8 = 0x8
    id <_DDUIPeoplePickerViewControllerDelegate> _delegate;	// 16 = 0x10
    RPRemoteDisplayDevice *_activeDevice;	// 24 = 0x18
    NSArray *_foundPeople;	// 32 = 0x20
    NSMutableDictionary *_identifierToPictureObserver;	// 40 = 0x28
    TVSUIUserProfilePictureService *_pictureService;	// 48 = 0x30
    UICollectionView *_peopleCollectionView;	// 56 = 0x38
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000017742
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(nonatomic) __weak UICollectionView *peopleCollectionView; // @synthesize peopleCollectionView=_peopleCollectionView;
@property(retain, nonatomic) TVSUIUserProfilePictureService *pictureService; // @synthesize pictureService=_pictureService;
@property(retain, nonatomic) NSMutableDictionary *identifierToPictureObserver; // @synthesize identifierToPictureObserver=_identifierToPictureObserver;
@property(copy, nonatomic) NSArray *foundPeople; // @synthesize foundPeople=_foundPeople;
@property(retain, nonatomic) RPRemoteDisplayDevice *activeDevice; // @synthesize activeDevice=_activeDevice;
@property(nonatomic) _Bool guestPairingEnabled; // @synthesize guestPairingEnabled=_guestPairingEnabled;
@property(nonatomic) __weak id <_DDUIPeoplePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000001733f
- (void)peopleListChanged:(id)arg1;	// IMP=0x00000000000162c5
- (void)activeDeviceChanged:(id)arg1 withPeopleList:(id)arg2;	// IMP=0x00000000000161e8
- (void)viewDidLoad;	// IMP=0x0000000000014196

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

