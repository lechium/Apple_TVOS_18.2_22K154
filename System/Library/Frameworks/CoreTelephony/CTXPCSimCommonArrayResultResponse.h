//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface CTXPCSimCommonArrayResultResponse
{
    NSArray *_result;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000016e0ac
- (void).cxx_destruct;	// IMP=0x000000000016e0d9
@property(retain, nonatomic) NSArray *result; // @synthesize result=_result;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016e029
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016defd
- (id)initWithResult:(id)arg1;	// IMP=0x000000000016de74

@end

