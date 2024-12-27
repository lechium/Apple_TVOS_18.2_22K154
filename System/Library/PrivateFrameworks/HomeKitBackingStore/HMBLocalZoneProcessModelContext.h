//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMBLocalZoneProcessModelContext : HMFObject
{
    HMBModel *_model;	// 8 = 0x8
    NSNumber *_outputBlockRow;	// 16 = 0x10
    NSData *_externalData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000adfe
@property(readonly, nonatomic) NSData *externalData; // @synthesize externalData=_externalData;
@property(readonly, copy, nonatomic) NSNumber *outputBlockRow; // @synthesize outputBlockRow=_outputBlockRow;
@property(readonly, nonatomic) HMBModel *model; // @synthesize model=_model;
- (id)initWithModel:(id)arg1 outputBlockRow:(id)arg2 externalData:(id)arg3;	// IMP=0x000000000000acd1

@end

