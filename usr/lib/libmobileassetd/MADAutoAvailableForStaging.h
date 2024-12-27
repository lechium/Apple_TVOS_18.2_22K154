//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MADAutoAvailableForStaging : NSObject
{
    NSString *_targetOSVersion;	// 8 = 0x8
    NSString *_targetBuild;	// 16 = 0x10
    NSString *_targetTrainName;	// 24 = 0x18
    NSString *_targetRestoreVersion;	// 32 = 0x20
    NSArray *_targetGroupNames;	// 40 = 0x28
    NSArray *_descriptorsRequiredForStaging;	// 48 = 0x30
    NSArray *_descriptorsOptionalForStaging;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000023cc97
- (void).cxx_destruct;	// IMP=0x000000000023cf56
@property(retain, nonatomic) NSArray *descriptorsOptionalForStaging; // @synthesize descriptorsOptionalForStaging=_descriptorsOptionalForStaging;
@property(retain, nonatomic) NSArray *descriptorsRequiredForStaging; // @synthesize descriptorsRequiredForStaging=_descriptorsRequiredForStaging;
@property(readonly, retain, nonatomic) NSArray *targetGroupNames; // @synthesize targetGroupNames=_targetGroupNames;
@property(readonly, retain, nonatomic) NSString *targetRestoreVersion; // @synthesize targetRestoreVersion=_targetRestoreVersion;
@property(readonly, retain, nonatomic) NSString *targetTrainName; // @synthesize targetTrainName=_targetTrainName;
@property(readonly, retain, nonatomic) NSString *targetBuild; // @synthesize targetBuild=_targetBuild;
@property(readonly, retain, nonatomic) NSString *targetOSVersion; // @synthesize targetOSVersion=_targetOSVersion;
- (id)newSummaryWithoutEntryID;	// IMP=0x000000000023cd66
- (id)summary;	// IMP=0x000000000023ccb1
- (id)description;	// IMP=0x000000000023cc9f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000023cb17
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023c8d8
- (id)initForTargetOSVersion:(id)arg1 forTargetBuild:(id)arg2 forTargetTrainName:(id)arg3 forTargetRestoreVersion:(id)arg4 withRequiredDescriptors:(id)arg5 withOptionalDescriptors:(id)arg6;	// IMP=0x000000000023c7b1

@end

