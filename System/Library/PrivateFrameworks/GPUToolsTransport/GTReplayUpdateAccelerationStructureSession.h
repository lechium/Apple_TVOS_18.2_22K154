//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface GTReplayUpdateAccelerationStructureSession
{
    unsigned long long _sessionsID;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005f52
- (void).cxx_destruct;	// IMP=0x0000000000006116
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long sessionsID; // @synthesize sessionsID=_sessionsID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000602f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000005f5a

@end

