//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipsQuotaEnableCameraResponse : PBCodable
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x00000000004e3842
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e37f7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e37be
- (void)copyTo:(id)arg1;	// IMP=0x00000000004e37b8
- (void)writeTo:(id)arg1;	// IMP=0x00000000004e37b2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004e36b6
- (id)dictionaryRepresentation;	// IMP=0x00000000004e369d
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

