//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/UAUserActivityInfo.h>

@interface UAPingUserActivityInfo : UAUserActivityInfo
{
    CDUnknownBlockType _wasContinuedBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000005351
@property(copy) CDUnknownBlockType wasContinuedBlock; // @synthesize wasContinuedBlock=_wasContinuedBlock;
- (id)statusString;	// IMP=0x0010000000005259
- (id)initFromPing:(id)arg1;	// IMP=0x00100000000051c6
- (id)initWithPayloadSize:(unsigned long long)arg1;	// IMP=0x00100000000050b5

@end

