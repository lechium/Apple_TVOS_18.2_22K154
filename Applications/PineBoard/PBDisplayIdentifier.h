//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, PBDisplayAttributes, PBDisplayCapabilities;

@interface PBDisplayIdentifier : NSObject
{
    PBDisplayAttributes *_attributes;	// 8 = 0x8
    NSString *_hardwareID;	// 16 = 0x10
    PBDisplayCapabilities *_capabilities;	// 24 = 0x18
}

+ (_Bool)parseIdentifierString:(id)arg1 intoHardwareID:(id *)arg2 capabilityMask:(id *)arg3;	// IMP=0x004000000016f0cc
+ (id)mainDisplayIdentifier;	// IMP=0x001000000016ed24
- (void).cxx_destruct;	// IMP=0x002000000016f6da
@property(readonly, nonatomic) PBDisplayCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) NSString *hardwareID; // @synthesize hardwareID=_hardwareID;
- (_Bool)matchesIdentifierString:(id)arg1;	// IMP=0x001000000016f225
@property(readonly, nonatomic) NSString *identifierString;
@property(readonly, nonatomic) NSString *legacyEDIDDigest;
@property(readonly, nonatomic) NSData *displayEDID;
- (id)debugDescription;	// IMP=0x001000000016ed51
@property(readonly, nonatomic) PBDisplayAttributes *attributes;
- (id)initWithEncodedString:(id)arg1;	// IMP=0x001000000016f70e

@end

