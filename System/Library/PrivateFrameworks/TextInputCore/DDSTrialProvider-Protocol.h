//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class DDSAttributeFilter, DDSTrialQuery, NSArray;
@protocol DDSAssetCenterDelegate;

@protocol DDSTrialProvider <NSObject>
- (NSArray *)contentItemsFromAssets:(NSArray *)arg1 matchingFilter:(DDSAttributeFilter *)arg2;
- (void)fetchTrialAssetForQuery:(DDSTrialQuery *)arg1 callback:(void (^)(DDSTrialAsset *, NSError *))arg2;
- (void)setUpTrialForQuery:(DDSTrialQuery *)arg1;
- (void)unregisterDelegate:(id <DDSAssetCenterDelegate>)arg1;
- (void)registerDelegate:(id <DDSAssetCenterDelegate>)arg1;
@end

