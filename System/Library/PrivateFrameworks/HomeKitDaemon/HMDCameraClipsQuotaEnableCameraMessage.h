//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipsQuotaEnableCameraMessage : PBCodable
{
    NSString *_zoneName;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000e6fb43
@property(retain, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e6fafa
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e6fa4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e6f9d5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e6f9ab
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e6f987
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e6f83e
- (id)dictionaryRepresentation;	// IMP=0x0000000000e6f7e2
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasZoneName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

