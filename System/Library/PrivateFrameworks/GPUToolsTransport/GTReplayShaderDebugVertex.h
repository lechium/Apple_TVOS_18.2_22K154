//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface GTReplayShaderDebugVertex
{
    unsigned int _instanceID;	// 40 = 0x28
    unsigned int _amplificationID;	// 44 = 0x2c
    NSArray *_vertexIDs;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000797c
- (void).cxx_destruct;	// IMP=0x0000000000007ba0
@property(retain, nonatomic) NSArray *vertexIDs; // @synthesize vertexIDs=_vertexIDs;
@property(nonatomic) unsigned int amplificationID; // @synthesize amplificationID=_amplificationID;
@property(nonatomic) unsigned int instanceID; // @synthesize instanceID=_instanceID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007a7f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007984

@end

