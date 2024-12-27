//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSString, UICellAccessoryManager, _UICellAccessory;

@protocol UICellAccessoryLayout <NSObject>
@property(copy, nonatomic) CDUnknownBlockType disclosureLayoutWidthProvider;
@property(copy, nonatomic) CDUnknownBlockType standardLayoutWidthProvider;
@property(nonatomic) unsigned long long edge;
@property(nonatomic) double safeAreaInset;
@property(nonatomic) __weak UICellAccessoryManager *manager;
- (struct CGRect)endLayout;
- (double)finalAlphaForAccessory:(_UICellAccessory *)arg1;
- (double)initialAlphaForAccessory:(_UICellAccessory *)arg1;
- (struct CGRect)finalFrameForAccessory:(_UICellAccessory *)arg1;
- (struct CGRect)initialFrameForAccessory:(_UICellAccessory *)arg1;
- (void)prepareLayoutForAccessories:(NSArray *)arg1 previousAccessories:(NSArray *)arg2 configurationIdentifier:(NSString *)arg3 animated:(_Bool)arg4;
@end

