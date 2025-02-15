//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MANAutoAssetSetProgress : NSObject
{
    _Bool _isStalled;	// 8 = 0x8
    long long _downloadedAssetCount;	// 16 = 0x10
    long long _remainingAssetCount;	// 24 = 0x18
    long long _totalExpectedBytes;	// 32 = 0x20
    long long _totalWrittenBytes;	// 40 = 0x28
    double _expectedTimeRemainingSecs;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000c5c25
@property(nonatomic) double expectedTimeRemainingSecs; // @synthesize expectedTimeRemainingSecs=_expectedTimeRemainingSecs;
@property(nonatomic) _Bool isStalled; // @synthesize isStalled=_isStalled;
@property(nonatomic) long long totalWrittenBytes; // @synthesize totalWrittenBytes=_totalWrittenBytes;
@property(nonatomic) long long totalExpectedBytes; // @synthesize totalExpectedBytes=_totalExpectedBytes;
@property(nonatomic) long long remainingAssetCount; // @synthesize remainingAssetCount=_remainingAssetCount;
@property(nonatomic) long long downloadedAssetCount; // @synthesize downloadedAssetCount=_downloadedAssetCount;
- (id)summary;	// IMP=0x00000000000c5eb8
- (id)description;	// IMP=0x00000000000c5ea6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c5d09
- (id)copy;	// IMP=0x00000000000c5c2d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c5b20
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c5a2b
- (id)init;	// IMP=0x00000000000c59e0

@end

