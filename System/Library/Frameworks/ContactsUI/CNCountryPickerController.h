//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSArray, NSString, UILocalizedIndexedCollation, UITableViewController;
@protocol CNCountryPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNCountryPickerController : UINavigationController
{
    NSString *_selectedCountryCode;	// 8 = 0x8
    UITableViewController *_tableViewController;	// 16 = 0x10
    UILocalizedIndexedCollation *_collation;	// 24 = 0x18
    NSArray *_countries;	// 32 = 0x20
    NSArray *_sections;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000049afa
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSArray *countries; // @synthesize countries=_countries;
@property(retain, nonatomic) UILocalizedIndexedCollation *collation; // @synthesize collation=_collation;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(copy, nonatomic) NSString *selectedCountryCode; // @synthesize selectedCountryCode=_selectedCountryCode;
- (void)_configureSections;	// IMP=0x0000000000049632
- (void)_loadCountryCodes;	// IMP=0x00000000000491f6
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000000491e1
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000049144
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;	// IMP=0x00000000000490f1
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x00000000000490a1
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000048f33
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000048dbd
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000048d21
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000048cad
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000048c3f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000048a24
- (void)viewDidLoad;	// IMP=0x0000000000048987
- (void)cancelPicker:(id)arg1;	// IMP=0x000000000004893b
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000048711

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <CNCountryPickerControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

