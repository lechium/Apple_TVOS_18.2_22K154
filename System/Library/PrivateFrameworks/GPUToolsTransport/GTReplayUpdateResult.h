//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSError;

__attribute__((visibility("hidden")))
@interface GTReplayUpdateResult
{
    CDUnion_afa92939 _dispatchUID;	// 8 = 0x8
    unsigned long long _streamRef;	// 16 = 0x10
    NSDictionary *_updatePipelines;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005c20
- (void).cxx_destruct;	// IMP=0x0000000000005f21
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *updatePipelines; // @synthesize updatePipelines=_updatePipelines;
@property(nonatomic) unsigned long long streamRef; // @synthesize streamRef=_streamRef;
@property(nonatomic) CDUnion_afa92939 dispatchUID; // @synthesize dispatchUID=_dispatchUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005dbb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005c28

@end

