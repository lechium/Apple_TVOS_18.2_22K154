//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingTransform : NSObject
{
}

+ (id)mergeWithGroupMetadata:(id)arg1 group:(id)arg2;	// IMP=0x00800000003bb8d1
+ (void)changeAccessorySettingType:(id)arg1 home:(id)arg2;	// IMP=0x00800000003bb574
+ (id)modelsForChangedConstraints:(id)arg1 fromSetting:(id)arg2;	// IMP=0x00800000003bb360
+ (id)modelForSetting:(id)arg1 identifier:(id)arg2 parentIdentifier:(id)arg3;	// IMP=0x00800000003bb16f
+ (id)modelForSetting:(id)arg1;	// IMP=0x00800000003bb0c8
+ (id)modelsForSetting:(id)arg1;	// IMP=0x00800000003bae1d
+ (id)modelForGroup:(id)arg1;	// IMP=0x00800000003bad38
+ (id)modelsForSettingDiff:(id)arg1 fromSetting:(id)arg2;	// IMP=0x00800000003b9bb7
+ (id)modelsForGroupDiff:(id)arg1 fromGroup:(id)arg2;	// IMP=0x00800000003b9632
+ (id)modelsForGroup:(id)arg1;	// IMP=0x00800000003b92d2

@end

