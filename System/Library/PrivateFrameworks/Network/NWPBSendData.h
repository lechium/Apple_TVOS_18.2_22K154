//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NWPBSendData : PBCodable
{
    NSString *_clientUUID;	// 8 = 0x8
    NSData *_messageData;	// 16 = 0x10
    unsigned int _receiveWindow;	// 24 = 0x18
    struct {
        unsigned int receiveWindow:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000aaf7a0
- (unsigned long long)hash;	// IMP=0x0000000000aaf720
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aaf630
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aaf570
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aaf4e0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aaee20
- (id)dictionaryRepresentation;	// IMP=0x0000000000aaed30
- (id)description;	// IMP=0x0000000000aaec80

@end

