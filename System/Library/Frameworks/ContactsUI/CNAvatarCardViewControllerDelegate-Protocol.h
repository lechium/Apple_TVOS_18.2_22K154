//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNAvatarCardViewController, NSArray, NSMutableArray, NSString;

@protocol CNAvatarCardViewControllerDelegate <NSObject>

@optional
- (void)cardViewControllerDidUpdatePreferredSize:(CNAvatarCardViewController *)arg1;
- (void)cardViewControllerDidDismiss:(CNAvatarCardViewController *)arg1;
- (void)cardViewControllerWillDismiss:(CNAvatarCardViewController *)arg1;
- (void)cardViewController:(CNAvatarCardViewController *)arg1 willShowActions:(NSMutableArray *)arg2;
- (NSArray *)cardViewController:(CNAvatarCardViewController *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
@end

