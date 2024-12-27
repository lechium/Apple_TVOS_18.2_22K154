//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccountHandle;

__attribute__((visibility("hidden")))
@interface _HMDAccountHandleIdentifier
{
    HMDAccountHandle *_accountHandle;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000384fa0
- (void).cxx_destruct;	// IMP=0x0000000000384b25
@property(readonly, copy) HMDAccountHandle *accountHandle; // @synthesize accountHandle=_accountHandle;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000384a74
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003849d9
- (id)identifier;	// IMP=0x0000000000384989
- (id)kind;	// IMP=0x000000000038497c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003848a1
- (id)initWithAccountHandle:(id)arg1;	// IMP=0x00000000003847d1
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000038471d

@end

