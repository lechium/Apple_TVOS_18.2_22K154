//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSDate, NSString, NSURL, UIViewController;

@protocol PXMutableMessagesExtensionViewModel <NSObject>
@property(nonatomic) _Bool drawerActive;
@property(copy, nonatomic) NSArray *recipients;
@property(retain, nonatomic) UIViewController *presentedViewController;
@property(retain, nonatomic) NSDate *selectedMessageDate;
@property(copy, nonatomic) NSString *selectedMessageText;
@property(nonatomic) unsigned long long selectedActivityType;
@property(retain, nonatomic) NSURL *selectedURL;
- (void)clearSelection;
@end

