//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "IDSDestination.h"

@class IDSURI, NSString;

@interface IDSDestinationGroupSessionMember : IDSDestination
{
    _Bool _isLightWeight;	// 8 = 0x8
    IDSURI *_URIObject;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001d8777
- (void).cxx_destruct;	// IMP=0x00000000001d893b
@property(readonly, nonatomic) _Bool isLightWeight; // @synthesize isLightWeight=_isLightWeight;
@property(readonly, nonatomic) IDSURI *URIObject; // @synthesize URIObject=_URIObject;
- (id)destinationLightweightStatus;	// IMP=0x00000000001d8879
- (id)destinationURIs;	// IMP=0x00000000001d8816
- (_Bool)isDevice;	// IMP=0x00000000001d880e
- (id)description;	// IMP=0x00000000001d877f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d86da
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d862e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d8623
@property(readonly, nonatomic) NSString *uri;
- (id)initWithURI:(id)arg1;	// IMP=0x00000000001d85bf
- (id)initWithURIObject:(id)arg1 isLightWeight:(_Bool)arg2;	// IMP=0x00000000001d8540
- (id)initWithURI:(id)arg1 isLightWeight:(_Bool)arg2;	// IMP=0x00000000001d84be

@end

