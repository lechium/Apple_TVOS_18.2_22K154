//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPassEntitlementsComposerEntry;

@protocol PKPassEntitlementSelectionSectionControllerDelegate <NSObject>
- (void)showAdvancedScheduleSelectionFlowForEntitlementEntry:(PKPassEntitlementsComposerEntry *)arg1;
- (void)entitlementSelectionDidChange;
- (void)deselectCells;
- (void)reloadDataAnimated:(_Bool)arg1;
- (void)reloadItem:(id)arg1 animated:(_Bool)arg2;
@end

