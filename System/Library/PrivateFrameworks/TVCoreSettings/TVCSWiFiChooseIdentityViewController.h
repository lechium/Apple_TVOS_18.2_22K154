//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, UILabel;
@protocol TVCSWiFiChooseIdentityDelegate;

__attribute__((visibility("hidden")))
@interface TVCSWiFiChooseIdentityViewController : UITableViewController
{
    NSString *_titleText;	// 8 = 0x8
    id <TVCSWiFiChooseIdentityDelegate> _delegate;	// 16 = 0x10
    NSArray *_identities;	// 24 = 0x18
    NSArray *_certificates;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000f9e2
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(retain, nonatomic) NSArray *identities; // @synthesize identities=_identities;
@property(nonatomic) __weak id <TVCSWiFiChooseIdentityDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000f8b2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000f788
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000000f76b
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000000f760
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000000f74e
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000000f740
- (void)viewDidLoad;	// IMP=0x000000000000f22e
- (id)initWithIdenities:(id)arg1;	// IMP=0x000000000000f0ab

@end

