//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipsQuotaGetActiveCamerasMessage : PBCodable
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000be3144
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000be30f9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000be30c0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000be30ba
- (void)writeTo:(id)arg1;	// IMP=0x0000000000be30b4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000be2fb8
- (id)dictionaryRepresentation;	// IMP=0x0000000000be2f9f
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

